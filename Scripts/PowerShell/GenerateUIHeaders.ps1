# 生成所有 .ui 文件对应的头文件
Write-Host "正在查找 Qt 安装路径..."

try {
    $qtDir = & qmake -query QT_INSTALL_PREFIX
    Write-Host "Qt 安装路径: $qtDir"
    
    $uicPath = Join-Path $qtDir "bin\uic.exe"
    
    if (!(Test-Path $uicPath)) {
        Write-Error "UIC 工具未找到: $uicPath"
        exit 1
    }
    
    Write-Host "UIC 工具路径: $uicPath"
    
    # 获取项目根目录
    $projectRoot = Split-Path -Parent $PSScriptRoot
    $projectRoot = Split-Path -Parent $projectRoot
    
    Write-Host "项目根目录: $projectRoot"
    Write-Host "正在搜索 .ui 文件..."
    
    # 查找所有 .ui 文件
    $uiFiles = Get-ChildItem -Path $projectRoot -Filter "*.ui" -Recurse
    
    Write-Host "找到 $($uiFiles.Count) 个 .ui 文件"
    
    $successCount = 0
    $errorCount = 0
    
    foreach ($uiFile in $uiFiles) {
        try {
            $headerName = "ui_" + [System.IO.Path]::GetFileNameWithoutExtension($uiFile.Name) + ".h"
            $headerPath = Join-Path $uiFile.DirectoryName $headerName
            
            Write-Host "正在生成: $headerName"
            Write-Host "  源文件: $($uiFile.FullName)"
            Write-Host "  目标文件: $headerPath"
            
            # 运行 UIC 工具
            $result = & $uicPath $uiFile.FullName -o $headerPath
            
            if ($LASTEXITCODE -eq 0) {
                Write-Host "  ✓ 成功生成" -ForegroundColor Green
                $successCount++
            } else {
                Write-Host "  ✗ 生成失败" -ForegroundColor Red
                $errorCount++
            }
        }
        catch {
            Write-Host "  ✗ 处理文件时出错: $($_.Exception.Message)" -ForegroundColor Red
            $errorCount++
        }
        
        Write-Host ""
    }
    
    Write-Host "========== 生成完成 =========="
    Write-Host "成功生成: $successCount 个头文件" -ForegroundColor Green
    if ($errorCount -gt 0) {
        Write-Host "生成失败: $errorCount 个头文件" -ForegroundColor Red
    }
    
} catch {
    Write-Error "执行过程中出错: $($_.Exception.Message)"
    exit 1
} 