/********************************************************************************
** Form generated from reading UI file 'PrefPaneAppearance.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFPANEAPPEARANCE_H
#define UI_PREFPANEAPPEARANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrefPaneAppearance
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout1;
    QLabel *labelLocale;
    QComboBox *comboLocale;
    QPushButton *buttonRefresh;
    QLabel *labelOtherLanguages;
    QSpacerItem *spacer1;
    QHBoxLayout *layout2;
    QLabel *labelTranslationFolder;
    QPushButton *buttonTranslationFolder;
    QSpacerItem *spacer2;
    QHBoxLayout *layout3;
    QCheckBox *checkUseCustomTheme;
    QComboBox *comboTheme;
    QSpacerItem *spacer3;

    void setupUi(QFrame *PrefPaneAppearance)
    {
        if (PrefPaneAppearance->objectName().isEmpty())
            PrefPaneAppearance->setObjectName("PrefPaneAppearance");
        PrefPaneAppearance->resize(442, 88);
        PrefPaneAppearance->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(PrefPaneAppearance);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layout1 = new QHBoxLayout();
        layout1->setObjectName("layout1");
        labelLocale = new QLabel(PrefPaneAppearance);
        labelLocale->setObjectName("labelLocale");

        layout1->addWidget(labelLocale);

        comboLocale = new QComboBox(PrefPaneAppearance);
        comboLocale->addItem(QString::fromUtf8("#English"));
        comboLocale->setObjectName("comboLocale");
        comboLocale->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        layout1->addWidget(comboLocale);

        buttonRefresh = new QPushButton(PrefPaneAppearance);
        buttonRefresh->setObjectName("buttonRefresh");

        layout1->addWidget(buttonRefresh);

        labelOtherLanguages = new QLabel(PrefPaneAppearance);
        labelOtherLanguages->setObjectName("labelOtherLanguages");
        labelOtherLanguages->setOpenExternalLinks(true);

        layout1->addWidget(labelOtherLanguages);

        spacer1 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout1->addItem(spacer1);


        verticalLayout->addLayout(layout1);

        layout2 = new QHBoxLayout();
        layout2->setObjectName("layout2");
        labelTranslationFolder = new QLabel(PrefPaneAppearance);
        labelTranslationFolder->setObjectName("labelTranslationFolder");

        layout2->addWidget(labelTranslationFolder);

        buttonTranslationFolder = new QPushButton(PrefPaneAppearance);
        buttonTranslationFolder->setObjectName("buttonTranslationFolder");

        layout2->addWidget(buttonTranslationFolder);

        spacer2 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout2->addItem(spacer2);


        verticalLayout->addLayout(layout2);

        layout3 = new QHBoxLayout();
        layout3->setObjectName("layout3");
        layout3->setContentsMargins(-1, 0, -1, -1);
        checkUseCustomTheme = new QCheckBox(PrefPaneAppearance);
        checkUseCustomTheme->setObjectName("checkUseCustomTheme");

        layout3->addWidget(checkUseCustomTheme);

        comboTheme = new QComboBox(PrefPaneAppearance);
        comboTheme->setObjectName("comboTheme");
        comboTheme->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        layout3->addWidget(comboTheme);

        spacer3 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout3->addItem(spacer3);


        verticalLayout->addLayout(layout3);


        retranslateUi(PrefPaneAppearance);

        QMetaObject::connectSlotsByName(PrefPaneAppearance);
    } // setupUi

    void retranslateUi(QFrame *PrefPaneAppearance)
    {
        labelLocale->setText(QCoreApplication::translate("PrefPaneAppearance", "Language", nullptr));

        buttonRefresh->setText(QCoreApplication::translate("PrefPaneAppearance", "Refresh", nullptr));
        labelOtherLanguages->setText(QCoreApplication::translate("PrefPaneAppearance", "<html><head/><body><p><a href=\"https://github.com/xmichelo/Beeftext/wiki/User-provided-translations\"><span style=\" text-decoration: underline; color:#258fc0;\">Other languages</span></a></p></body></html>", nullptr));
        labelTranslationFolder->setText(QCoreApplication::translate("PrefPaneAppearance", "User-provided translations", nullptr));
        buttonTranslationFolder->setText(QCoreApplication::translate("PrefPaneAppearance", "Open Folder", nullptr));
        checkUseCustomTheme->setText(QCoreApplication::translate("PrefPaneAppearance", "Use custom theme", nullptr));
        (void)PrefPaneAppearance;
    } // retranslateUi

};

namespace Ui {
    class PrefPaneAppearance: public Ui_PrefPaneAppearance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFPANEAPPEARANCE_H
