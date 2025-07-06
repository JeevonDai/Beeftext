/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Preferences/Panes/PrefPaneAdvanced.h"
#include "Preferences/Panes/PrefPaneAppearance.h"
#include "Preferences/Panes/PrefPaneBehavior.h"
#include "Preferences/Panes/PrefPaneCombos.h"
#include "Preferences/Panes/PrefPaneEmojis.h"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabPreferences;
    QWidget *tabBehavior;
    QVBoxLayout *verticalLayout_7;
    PrefPaneBehavior *paneBehavior;
    QSpacerItem *verticalSpacer;
    QWidget *tabCombos;
    QVBoxLayout *verticalLayout_3;
    PrefPaneCombos *paneCombos;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabEmojis;
    QVBoxLayout *verticalLayout_8;
    PrefPaneEmojis *paneEmojis;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabAppearance;
    QVBoxLayout *verticalLayout_9;
    PrefPaneAppearance *paneAppearance;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabAdvanced;
    QVBoxLayout *verticalLayout_4;
    PrefPaneAdvanced *paneAdvanced;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonExport;
    QPushButton *buttonImport;
    QPushButton *buttonDefaults;
    QPushButton *buttonResetWarnings;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonClose;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName("PreferencesDialog");
        PreferencesDialog->resize(700, 174);
        PreferencesDialog->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName("verticalLayout");
        tabPreferences = new QTabWidget(PreferencesDialog);
        tabPreferences->setObjectName("tabPreferences");
        tabBehavior = new QWidget();
        tabBehavior->setObjectName("tabBehavior");
        verticalLayout_7 = new QVBoxLayout(tabBehavior);
        verticalLayout_7->setObjectName("verticalLayout_7");
        paneBehavior = new PrefPaneBehavior(tabBehavior);
        paneBehavior->setObjectName("paneBehavior");
        paneBehavior->setMinimumSize(QSize(0, 50));
        paneBehavior->setFrameShape(QFrame::StyledPanel);
        paneBehavior->setFrameShadow(QFrame::Raised);

        verticalLayout_7->addWidget(paneBehavior);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        tabPreferences->addTab(tabBehavior, QString());
        tabCombos = new QWidget();
        tabCombos->setObjectName("tabCombos");
        verticalLayout_3 = new QVBoxLayout(tabCombos);
        verticalLayout_3->setObjectName("verticalLayout_3");
        paneCombos = new PrefPaneCombos(tabCombos);
        paneCombos->setObjectName("paneCombos");
        paneCombos->setMinimumSize(QSize(0, 50));
        paneCombos->setFrameShape(QFrame::StyledPanel);
        paneCombos->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(paneCombos);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabPreferences->addTab(tabCombos, QString());
        tabEmojis = new QWidget();
        tabEmojis->setObjectName("tabEmojis");
        verticalLayout_8 = new QVBoxLayout(tabEmojis);
        verticalLayout_8->setObjectName("verticalLayout_8");
        paneEmojis = new PrefPaneEmojis(tabEmojis);
        paneEmojis->setObjectName("paneEmojis");
        paneEmojis->setMinimumSize(QSize(0, 50));
        paneEmojis->setFrameShape(QFrame::StyledPanel);
        paneEmojis->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(paneEmojis);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        tabPreferences->addTab(tabEmojis, QString());
        tabAppearance = new QWidget();
        tabAppearance->setObjectName("tabAppearance");
        verticalLayout_9 = new QVBoxLayout(tabAppearance);
        verticalLayout_9->setObjectName("verticalLayout_9");
        paneAppearance = new PrefPaneAppearance(tabAppearance);
        paneAppearance->setObjectName("paneAppearance");
        paneAppearance->setMinimumSize(QSize(0, 50));
        paneAppearance->setFrameShape(QFrame::StyledPanel);
        paneAppearance->setFrameShadow(QFrame::Raised);

        verticalLayout_9->addWidget(paneAppearance);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

        tabPreferences->addTab(tabAppearance, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName("tabAdvanced");
        verticalLayout_4 = new QVBoxLayout(tabAdvanced);
        verticalLayout_4->setObjectName("verticalLayout_4");
        paneAdvanced = new PrefPaneAdvanced(tabAdvanced);
        paneAdvanced->setObjectName("paneAdvanced");
        paneAdvanced->setMinimumSize(QSize(0, 50));
        paneAdvanced->setFrameShape(QFrame::StyledPanel);
        paneAdvanced->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(paneAdvanced);

        verticalSpacer_5 = new QSpacerItem(667, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        tabPreferences->addTab(tabAdvanced, QString());

        verticalLayout->addWidget(tabPreferences);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        buttonExport = new QPushButton(PreferencesDialog);
        buttonExport->setObjectName("buttonExport");
        buttonExport->setAutoDefault(false);

        horizontalLayout->addWidget(buttonExport);

        buttonImport = new QPushButton(PreferencesDialog);
        buttonImport->setObjectName("buttonImport");
        buttonImport->setAutoDefault(false);

        horizontalLayout->addWidget(buttonImport);

        buttonDefaults = new QPushButton(PreferencesDialog);
        buttonDefaults->setObjectName("buttonDefaults");
        buttonDefaults->setAutoDefault(false);

        horizontalLayout->addWidget(buttonDefaults);

        buttonResetWarnings = new QPushButton(PreferencesDialog);
        buttonResetWarnings->setObjectName("buttonResetWarnings");
        buttonResetWarnings->setAutoDefault(false);

        horizontalLayout->addWidget(buttonResetWarnings);

        horizontalSpacer = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonClose = new QPushButton(PreferencesDialog);
        buttonClose->setObjectName("buttonClose");

        horizontalLayout->addWidget(buttonClose);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(buttonExport, buttonImport);
        QWidget::setTabOrder(buttonImport, buttonDefaults);
        QWidget::setTabOrder(buttonDefaults, buttonResetWarnings);
        QWidget::setTabOrder(buttonResetWarnings, buttonClose);
        QWidget::setTabOrder(buttonClose, tabPreferences);

        retranslateUi(PreferencesDialog);

        tabPreferences->setCurrentIndex(2);
        buttonClose->setDefault(true);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
        tabPreferences->setTabText(tabPreferences->indexOf(tabBehavior), QCoreApplication::translate("PreferencesDialog", "Behavior", nullptr));
        tabPreferences->setTabText(tabPreferences->indexOf(tabCombos), QCoreApplication::translate("PreferencesDialog", "Combos", nullptr));
        tabPreferences->setTabText(tabPreferences->indexOf(tabEmojis), QCoreApplication::translate("PreferencesDialog", "Emojis", nullptr));
        tabPreferences->setTabText(tabPreferences->indexOf(tabAppearance), QCoreApplication::translate("PreferencesDialog", "Appearance", nullptr));
        tabPreferences->setTabText(tabPreferences->indexOf(tabAdvanced), QCoreApplication::translate("PreferencesDialog", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        buttonExport->setToolTip(QCoreApplication::translate("PreferencesDialog", "Export the preferences.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonExport->setText(QCoreApplication::translate("PreferencesDialog", "&Export", nullptr));
#if QT_CONFIG(tooltip)
        buttonImport->setToolTip(QCoreApplication::translate("PreferencesDialog", "Import the preferences.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonImport->setText(QCoreApplication::translate("PreferencesDialog", "&Import", nullptr));
#if QT_CONFIG(tooltip)
        buttonDefaults->setToolTip(QCoreApplication::translate("PreferencesDialog", "Reset the preferences to their default values.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonDefaults->setText(QCoreApplication::translate("PreferencesDialog", "&Default", nullptr));
#if QT_CONFIG(tooltip)
        buttonResetWarnings->setToolTip(QCoreApplication::translate("PreferencesDialog", "Reset the warning dialog settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonResetWarnings->setText(QCoreApplication::translate("PreferencesDialog", "Reset &Warnings", nullptr));
        buttonClose->setText(QCoreApplication::translate("PreferencesDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
