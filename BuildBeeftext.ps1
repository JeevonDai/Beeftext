#!/usr/bin/env pwsh
# Beeftext Build Script
# Sets proper encoding to avoid character display issues
#
# Author: Auto-generated
# Copyright (c) Xavier Michelon. All rights reserved.
# Licensed under the MIT License.

# Set error handling
$ErrorActionPreference = "Stop"

# Set console encoding to UTF-8
chcp 65001 | Out-Null

# Set output encoding
$OutputEncoding = [System.Text.Encoding]::UTF8
[Console]::OutputEncoding = [System.Text.Encoding]::UTF8

Write-Host "Starting Beeftext build..." -ForegroundColor Green

# Configure CMake
Write-Host "Configuring CMake..." -ForegroundColor Yellow
cmake --preset MSVC

# Build project using Release preset
Write-Host "Building project (Release)..." -ForegroundColor Yellow
cmake --build --preset MSVC-release

Write-Host "Build completed!" -ForegroundColor Green
Write-Host "Executable location: out/build/MSVC/Beeftext/Release/Beeftext.exe" -ForegroundColor Cyan 