/********************************************************************************
** Form generated from reading UI file 'PrefPaneAdvanced.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFPANEADVANCED_H
#define UI_PREFPANEADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrefPaneAdvanced
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout1;
    QLabel *labelDelayBetweenKeystrokes;
    QSpinBox *spinDelayBetweenKeystrokes;
    QSpacerItem *spacer1;
    QFrame *frameComboListFolder;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelComboListFolder;
    QLineEdit *editComboListFolder;
    QPushButton *buttonChangeComboListFolder;
    QPushButton *buttonOpenComboListFolder;
    QPushButton *buttonResetComboListFolder;
    QCheckBox *checkWriteDebugLogFile;
    QCheckBox *checkUseLegacyCopyPaste;
    QCheckBox *checkRestoreClipboardAfterSubstitution;
    QCheckBox *checkUseShiftInsertForPasting;
    QHBoxLayout *layout2;
    QCheckBox *checkUseCustomPowershellVersion;
    QLineEdit *editCustomPowerShellPath;
    QPushButton *buttonChangeCustomPowershellVersion;
    QGroupBox *groupboxAutoBackup;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *checkAutoBackup;
    QPushButton *buttonRestoreBackup;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *checkUseCustomBackupLocation;
    QLineEdit *editCustomBackupLocation;
    QPushButton *buttonChangeCustomBackupLocation;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *buttonSensitiveApplications;
    QPushButton *buttonExcludedApplications;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QFrame *PrefPaneAdvanced)
    {
        if (PrefPaneAdvanced->objectName().isEmpty())
            PrefPaneAdvanced->setObjectName("PrefPaneAdvanced");
        PrefPaneAdvanced->resize(701, 324);
        PrefPaneAdvanced->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(PrefPaneAdvanced);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layout1 = new QHBoxLayout();
        layout1->setObjectName("layout1");
        labelDelayBetweenKeystrokes = new QLabel(PrefPaneAdvanced);
        labelDelayBetweenKeystrokes->setObjectName("labelDelayBetweenKeystrokes");

        layout1->addWidget(labelDelayBetweenKeystrokes);

        spinDelayBetweenKeystrokes = new QSpinBox(PrefPaneAdvanced);
        spinDelayBetweenKeystrokes->setObjectName("spinDelayBetweenKeystrokes");

        layout1->addWidget(spinDelayBetweenKeystrokes);

        spacer1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout1->addItem(spacer1);


        verticalLayout->addLayout(layout1);

        frameComboListFolder = new QFrame(PrefPaneAdvanced);
        frameComboListFolder->setObjectName("frameComboListFolder");
        frameComboListFolder->setMinimumSize(QSize(0, 0));
        frameComboListFolder->setFrameShape(QFrame::StyledPanel);
        frameComboListFolder->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frameComboListFolder);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelComboListFolder = new QLabel(frameComboListFolder);
        labelComboListFolder->setObjectName("labelComboListFolder");

        horizontalLayout_3->addWidget(labelComboListFolder);

        editComboListFolder = new QLineEdit(frameComboListFolder);
        editComboListFolder->setObjectName("editComboListFolder");
        editComboListFolder->setReadOnly(true);

        horizontalLayout_3->addWidget(editComboListFolder);

        buttonChangeComboListFolder = new QPushButton(frameComboListFolder);
        buttonChangeComboListFolder->setObjectName("buttonChangeComboListFolder");

        horizontalLayout_3->addWidget(buttonChangeComboListFolder);

        buttonOpenComboListFolder = new QPushButton(frameComboListFolder);
        buttonOpenComboListFolder->setObjectName("buttonOpenComboListFolder");

        horizontalLayout_3->addWidget(buttonOpenComboListFolder);

        buttonResetComboListFolder = new QPushButton(frameComboListFolder);
        buttonResetComboListFolder->setObjectName("buttonResetComboListFolder");

        horizontalLayout_3->addWidget(buttonResetComboListFolder);


        verticalLayout->addWidget(frameComboListFolder);

        checkWriteDebugLogFile = new QCheckBox(PrefPaneAdvanced);
        checkWriteDebugLogFile->setObjectName("checkWriteDebugLogFile");

        verticalLayout->addWidget(checkWriteDebugLogFile);

        checkUseLegacyCopyPaste = new QCheckBox(PrefPaneAdvanced);
        checkUseLegacyCopyPaste->setObjectName("checkUseLegacyCopyPaste");

        verticalLayout->addWidget(checkUseLegacyCopyPaste);

        checkRestoreClipboardAfterSubstitution = new QCheckBox(PrefPaneAdvanced);
        checkRestoreClipboardAfterSubstitution->setObjectName("checkRestoreClipboardAfterSubstitution");

        verticalLayout->addWidget(checkRestoreClipboardAfterSubstitution);

        checkUseShiftInsertForPasting = new QCheckBox(PrefPaneAdvanced);
        checkUseShiftInsertForPasting->setObjectName("checkUseShiftInsertForPasting");

        verticalLayout->addWidget(checkUseShiftInsertForPasting);

        layout2 = new QHBoxLayout();
        layout2->setObjectName("layout2");
        checkUseCustomPowershellVersion = new QCheckBox(PrefPaneAdvanced);
        checkUseCustomPowershellVersion->setObjectName("checkUseCustomPowershellVersion");

        layout2->addWidget(checkUseCustomPowershellVersion);

        editCustomPowerShellPath = new QLineEdit(PrefPaneAdvanced);
        editCustomPowerShellPath->setObjectName("editCustomPowerShellPath");
        editCustomPowerShellPath->setReadOnly(true);

        layout2->addWidget(editCustomPowerShellPath);

        buttonChangeCustomPowershellVersion = new QPushButton(PrefPaneAdvanced);
        buttonChangeCustomPowershellVersion->setObjectName("buttonChangeCustomPowershellVersion");

        layout2->addWidget(buttonChangeCustomPowershellVersion);


        verticalLayout->addLayout(layout2);

        groupboxAutoBackup = new QGroupBox(PrefPaneAdvanced);
        groupboxAutoBackup->setObjectName("groupboxAutoBackup");
        verticalLayout_2 = new QVBoxLayout(groupboxAutoBackup);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        checkAutoBackup = new QCheckBox(groupboxAutoBackup);
        checkAutoBackup->setObjectName("checkAutoBackup");

        horizontalLayout_14->addWidget(checkAutoBackup);

        buttonRestoreBackup = new QPushButton(groupboxAutoBackup);
        buttonRestoreBackup->setObjectName("buttonRestoreBackup");

        horizontalLayout_14->addWidget(buttonRestoreBackup);

        horizontalSpacer_2 = new QSpacerItem(0, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        checkUseCustomBackupLocation = new QCheckBox(groupboxAutoBackup);
        checkUseCustomBackupLocation->setObjectName("checkUseCustomBackupLocation");

        horizontalLayout_15->addWidget(checkUseCustomBackupLocation);

        editCustomBackupLocation = new QLineEdit(groupboxAutoBackup);
        editCustomBackupLocation->setObjectName("editCustomBackupLocation");
        editCustomBackupLocation->setReadOnly(true);

        horizontalLayout_15->addWidget(editCustomBackupLocation);

        buttonChangeCustomBackupLocation = new QPushButton(groupboxAutoBackup);
        buttonChangeCustomBackupLocation->setObjectName("buttonChangeCustomBackupLocation");

        horizontalLayout_15->addWidget(buttonChangeCustomBackupLocation);


        verticalLayout_2->addLayout(horizontalLayout_15);


        verticalLayout->addWidget(groupboxAutoBackup);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        buttonSensitiveApplications = new QPushButton(PrefPaneAdvanced);
        buttonSensitiveApplications->setObjectName("buttonSensitiveApplications");

        horizontalLayout_6->addWidget(buttonSensitiveApplications);

        buttonExcludedApplications = new QPushButton(PrefPaneAdvanced);
        buttonExcludedApplications->setObjectName("buttonExcludedApplications");

        horizontalLayout_6->addWidget(buttonExcludedApplications);

        horizontalSpacer_7 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(PrefPaneAdvanced);

        QMetaObject::connectSlotsByName(PrefPaneAdvanced);
    } // setupUi

    void retranslateUi(QFrame *PrefPaneAdvanced)
    {
        labelDelayBetweenKeystrokes->setText(QCoreApplication::translate("PrefPaneAdvanced", "Delay between simulated keystrokes", nullptr));
        spinDelayBetweenKeystrokes->setSuffix(QCoreApplication::translate("PrefPaneAdvanced", "ms", nullptr));
        labelComboListFolder->setText(QCoreApplication::translate("PrefPaneAdvanced", "Combo list folder", nullptr));
        buttonChangeComboListFolder->setText(QCoreApplication::translate("PrefPaneAdvanced", "&Change", nullptr));
        buttonOpenComboListFolder->setText(QCoreApplication::translate("PrefPaneAdvanced", "O&pen", nullptr));
        buttonResetComboListFolder->setText(QCoreApplication::translate("PrefPaneAdvanced", "D&efault", nullptr));
        checkWriteDebugLogFile->setText(QCoreApplication::translate("PrefPaneAdvanced", "Write debug events in a log file", nullptr));
        checkUseLegacyCopyPaste->setText(QCoreApplication::translate("PrefPaneAdvanced", "Use legacy copy/paste", nullptr));
        checkRestoreClipboardAfterSubstitution->setText(QCoreApplication::translate("PrefPaneAdvanced", "Restore clipboard after combo substitution", nullptr));
        checkUseShiftInsertForPasting->setText(QCoreApplication::translate("PrefPaneAdvanced", "Use Shift+Insert for pasting", nullptr));
        checkUseCustomPowershellVersion->setText(QCoreApplication::translate("PrefPaneAdvanced", "Use custom PowerShell version", nullptr));
        buttonChangeCustomPowershellVersion->setText(QCoreApplication::translate("PrefPaneAdvanced", "&Change", nullptr));
        groupboxAutoBackup->setTitle(QCoreApplication::translate("PrefPaneAdvanced", "Automatic backup", nullptr));
        checkAutoBackup->setText(QCoreApplication::translate("PrefPaneAdvanced", "Automatically back up combo list files", nullptr));
#if QT_CONFIG(tooltip)
        buttonRestoreBackup->setToolTip(QCoreApplication::translate("PrefPaneAdvanced", "Restore a backup.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonRestoreBackup->setText(QCoreApplication::translate("PrefPaneAdvanced", "&Restore", nullptr));
        checkUseCustomBackupLocation->setText(QCoreApplication::translate("PrefPaneAdvanced", "Use custom backup location", nullptr));
        buttonChangeCustomBackupLocation->setText(QCoreApplication::translate("PrefPaneAdvanced", "&Change", nullptr));
        buttonSensitiveApplications->setText(QCoreApplication::translate("PrefPaneAdvanced", "Sensitive Applications", nullptr));
        buttonExcludedApplications->setText(QCoreApplication::translate("PrefPaneAdvanced", "E&xcluded Applications", nullptr));
        (void)PrefPaneAdvanced;
    } // retranslateUi

};

namespace Ui {
    class PrefPaneAdvanced: public Ui_PrefPaneAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFPANEADVANCED_H
