/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelBuildInfo;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *labelLogo;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonClose;
    QLabel *labelText;
    QLabel *labelTranslators;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(559, 538);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(237, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        labelBuildInfo = new QLabel(AboutDialog);
        labelBuildInfo->setObjectName("labelBuildInfo");
        labelBuildInfo->setText(QString::fromUtf8("#buildInfo#"));
        labelBuildInfo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelBuildInfo, 6, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(237, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(541, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 3);

        labelLogo = new QLabel(AboutDialog);
        labelLogo->setObjectName("labelLogo");
        labelLogo->setMinimumSize(QSize(128, 128));
        labelLogo->setMaximumSize(QSize(128, 128));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/MainWindow/Resources/BeeftextLogo128.png")));
        labelLogo->setScaledContents(true);

        gridLayout->addWidget(labelLogo, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        buttonClose = new QPushButton(AboutDialog);
        buttonClose->setObjectName("buttonClose");

        horizontalLayout_2->addWidget(buttonClose);


        gridLayout->addLayout(horizontalLayout_2, 9, 0, 1, 3);

        labelText = new QLabel(AboutDialog);
        labelText->setObjectName("labelText");
        labelText->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        labelText->setWordWrap(true);
        labelText->setOpenExternalLinks(true);

        gridLayout->addWidget(labelText, 2, 0, 1, 3);

        labelTranslators = new QLabel(AboutDialog);
        labelTranslators->setObjectName("labelTranslators");
        labelTranslators->setAlignment(Qt::AlignCenter);
        labelTranslators->setWordWrap(true);
        labelTranslators->setOpenExternalLinks(true);

        gridLayout->addWidget(labelTranslators, 4, 0, 1, 3);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 5, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 8, 0, 1, 3);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        labelLogo->setText(QString());
        buttonClose->setText(QCoreApplication::translate("AboutDialog", "&Close", nullptr));
        labelText->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p align=\"center\"><br/><span style=\" font-size:14pt; font-weight:600;\">Beeftext v%1.%2<br/></span><span style=\" font-weight:600;\">%3</span><br/><br/>Copyright (c) 2017-%4<br/><a href=\"https://x-mi.com\"><span style=\" text-decoration: underline; color:#%5;\">Xavier Michelon<br/></span></a><br/><a href=\"https://beeftext.org\"><span style=\" text-decoration: underline; color:#%5;\">https://beeftext.org<br/></span></a><br/>Github: <a href=\"https://github.com/xmichelo/Beeftext\"><span style=\" text-decoration: underline; color:#%5;\">https://github.com/xmichelo/Beeftext</span></a><br/>Twitter: <a href=\"https://twitter.com/beeftext\"><span style=\" text-decoration: underline; color:#%5;\">@beeftext<br/></span></a><br/><br/>This software is released under the terms of the <a href=\"https://en.wikipedia.org/wiki/MIT_License\"><span style=\" text-decoration: underline; color:#%5;\">MIT License</span></a>.<br/>Beeftext uses the <a href=\"https://www.qt.io/\"><span style=\" text-decoration: "
                        "underline; color:#%5;\">Qt</span></a> library under the terms of the <a href=\"https://www.gnu.org/licenses/lgpl-3.0.txt\"><span style=\" text-decoration: underline; color:#%5;\">GNU Lesser General Public License v3</span></a>.<br/>Beeftext uses the <a href=\"https://www.openssl.org\"><span style=\" text-decoration: underline; color:#%5;\">OpenSSL</span></a> library under the terms of the <a href=\"https://www.openssl.org/source/license.html\"><span style=\" text-decoration: underline; color:#%5;\">OpenSSL and SSLeay licenses</span></a>.</p></body></html>", nullptr));
        labelTranslators->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>Many thanks to all the <a href=\"https://github.com/xmichelo/Beeftext/wiki/User-provided-translations\"><span style=\" text-decoration: underline; color:#%1;\">translators</span></a> contributing to the project.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
