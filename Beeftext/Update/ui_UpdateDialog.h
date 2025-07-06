/********************************************************************************
** Form generated from reading UI file 'UpdateDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelHeader;
    QLabel *labelReleaseNotes;
    QTextBrowser *editReleaseNotes;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonInstall;
    QPushButton *buttonNotNow;
    QPushButton *buttonSkipThisVersion;
    QPushButton *buttonCancel;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName("UpdateDialog");
        UpdateDialog->resize(548, 434);
        verticalLayout = new QVBoxLayout(UpdateDialog);
        verticalLayout->setObjectName("verticalLayout");
        labelHeader = new QLabel(UpdateDialog);
        labelHeader->setObjectName("labelHeader");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        labelHeader->setFont(font);
        labelHeader->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelHeader);

        labelReleaseNotes = new QLabel(UpdateDialog);
        labelReleaseNotes->setObjectName("labelReleaseNotes");

        verticalLayout->addWidget(labelReleaseNotes);

        editReleaseNotes = new QTextBrowser(UpdateDialog);
        editReleaseNotes->setObjectName("editReleaseNotes");
        editReleaseNotes->setFocusPolicy(Qt::NoFocus);
        editReleaseNotes->setReadOnly(true);
        editReleaseNotes->setOpenExternalLinks(true);

        verticalLayout->addWidget(editReleaseNotes);

        progressBar = new QProgressBar(UpdateDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setEnabled(false);
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonInstall = new QPushButton(UpdateDialog);
        buttonInstall->setObjectName("buttonInstall");
        buttonInstall->setText(QString::fromUtf8("#Install/Download"));

        horizontalLayout->addWidget(buttonInstall);

        buttonNotNow = new QPushButton(UpdateDialog);
        buttonNotNow->setObjectName("buttonNotNow");

        horizontalLayout->addWidget(buttonNotNow);

        buttonSkipThisVersion = new QPushButton(UpdateDialog);
        buttonSkipThisVersion->setObjectName("buttonSkipThisVersion");

        horizontalLayout->addWidget(buttonSkipThisVersion);

        buttonCancel = new QPushButton(UpdateDialog);
        buttonCancel->setObjectName("buttonCancel");

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(buttonInstall, buttonNotNow);
        QWidget::setTabOrder(buttonNotNow, editReleaseNotes);

        retranslateUi(UpdateDialog);

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QCoreApplication::translate("UpdateDialog", "Software update", nullptr));
        labelHeader->setText(QCoreApplication::translate("UpdateDialog", "%1 v%2 is available!", nullptr));
        labelReleaseNotes->setText(QCoreApplication::translate("UpdateDialog", "Release Notes:", nullptr));
        buttonNotNow->setText(QCoreApplication::translate("UpdateDialog", "&Not Now", nullptr));
        buttonSkipThisVersion->setText(QCoreApplication::translate("UpdateDialog", "&Skip This Version", nullptr));
        buttonCancel->setText(QCoreApplication::translate("UpdateDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
