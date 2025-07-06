/********************************************************************************
** Form generated from reading UI file 'BackupRestoreDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKUPRESTOREDIALOG_H
#define UI_BACKUPRESTOREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BackupRestoreDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelBackup;
    QComboBox *comboBackup;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonRestore;
    QPushButton *buttonCancel;

    void setupUi(QDialog *BackupRestoreDialog)
    {
        if (BackupRestoreDialog->objectName().isEmpty())
            BackupRestoreDialog->setObjectName("BackupRestoreDialog");
        BackupRestoreDialog->resize(182, 80);
        BackupRestoreDialog->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(BackupRestoreDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelBackup = new QLabel(BackupRestoreDialog);
        labelBackup->setObjectName("labelBackup");

        horizontalLayout_2->addWidget(labelBackup);

        comboBackup = new QComboBox(BackupRestoreDialog);
        comboBackup->setObjectName("comboBackup");
        comboBackup->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(comboBackup);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonRestore = new QPushButton(BackupRestoreDialog);
        buttonRestore->setObjectName("buttonRestore");

        horizontalLayout->addWidget(buttonRestore);

        buttonCancel = new QPushButton(BackupRestoreDialog);
        buttonCancel->setObjectName("buttonCancel");

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BackupRestoreDialog);

        QMetaObject::connectSlotsByName(BackupRestoreDialog);
    } // setupUi

    void retranslateUi(QDialog *BackupRestoreDialog)
    {
        labelBackup->setText(QCoreApplication::translate("BackupRestoreDialog", "Backup", nullptr));
        buttonRestore->setText(QCoreApplication::translate("BackupRestoreDialog", "&Restore", nullptr));
        buttonCancel->setText(QCoreApplication::translate("BackupRestoreDialog", "&Cancel", nullptr));
        (void)BackupRestoreDialog;
    } // retranslateUi

};

namespace Ui {
    class BackupRestoreDialog: public Ui_BackupRestoreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKUPRESTOREDIALOG_H
