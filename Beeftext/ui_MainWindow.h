/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Combo/ComboFrame.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionVisitBeeftextWiki;
    QAction *actionShowAboutDialog;
    QAction *actionEnableDisableBeeftext;
    QAction *actionShowPreferencesDialog;
    QAction *actionOpenLogFile;
    QAction *actionGettingStarted;
    QAction *actionShowReleaseNotes;
    QAction *actionBackup;
    QAction *actionRestore;
    QAction *actionReportBug;
    QAction *actionGenerateCheatSheet;
    QAction *action_Show_Log_Window;
    QAction *actionShowLogWindow;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    ComboFrame *frameCombos;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu_Help;
    QMenu *menu_Advanced;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(716, 481);
        MainWindow->setAcceptDrops(true);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionExit->setIconText(QString::fromUtf8("Exit <insertAppNameHere>"));
        actionVisitBeeftextWiki = new QAction(MainWindow);
        actionVisitBeeftextWiki->setObjectName("actionVisitBeeftextWiki");
        actionShowAboutDialog = new QAction(MainWindow);
        actionShowAboutDialog->setObjectName("actionShowAboutDialog");
        actionEnableDisableBeeftext = new QAction(MainWindow);
        actionEnableDisableBeeftext->setObjectName("actionEnableDisableBeeftext");
        actionEnableDisableBeeftext->setText(QString::fromUtf8("#EnableDisableBeeftext#"));
        actionEnableDisableBeeftext->setIconText(QString::fromUtf8("#EnableDisableBeeftext#"));
#if QT_CONFIG(tooltip)
        actionEnableDisableBeeftext->setToolTip(QString::fromUtf8("#EnableDisableBeeftext#"));
#endif // QT_CONFIG(tooltip)
        actionShowPreferencesDialog = new QAction(MainWindow);
        actionShowPreferencesDialog->setObjectName("actionShowPreferencesDialog");
        actionOpenLogFile = new QAction(MainWindow);
        actionOpenLogFile->setObjectName("actionOpenLogFile");
        actionGettingStarted = new QAction(MainWindow);
        actionGettingStarted->setObjectName("actionGettingStarted");
        actionShowReleaseNotes = new QAction(MainWindow);
        actionShowReleaseNotes->setObjectName("actionShowReleaseNotes");
        actionBackup = new QAction(MainWindow);
        actionBackup->setObjectName("actionBackup");
        actionRestore = new QAction(MainWindow);
        actionRestore->setObjectName("actionRestore");
        actionReportBug = new QAction(MainWindow);
        actionReportBug->setObjectName("actionReportBug");
        actionGenerateCheatSheet = new QAction(MainWindow);
        actionGenerateCheatSheet->setObjectName("actionGenerateCheatSheet");
        action_Show_Log_Window = new QAction(MainWindow);
        action_Show_Log_Window->setObjectName("action_Show_Log_Window");
        actionShowLogWindow = new QAction(MainWindow);
        actionShowLogWindow->setObjectName("actionShowLogWindow");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        frameCombos = new ComboFrame(centralWidget);
        frameCombos->setObjectName("frameCombos");
        frameCombos->setFrameShape(QFrame::StyledPanel);
        frameCombos->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frameCombos);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 716, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName("menu_Help");
        menu_Advanced = new QMenu(menuBar);
        menu_Advanced->setObjectName("menu_Advanced");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu_Advanced->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuFile->addAction(actionEnableDisableBeeftext);
        menuFile->addSeparator();
        menuFile->addAction(actionShowPreferencesDialog);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menu_Help->addAction(actionGettingStarted);
        menu_Help->addAction(actionVisitBeeftextWiki);
        menu_Help->addAction(actionShowReleaseNotes);
        menu_Help->addAction(actionReportBug);
        menu_Help->addSeparator();
        menu_Help->addAction(actionShowAboutDialog);
        menu_Advanced->addAction(actionShowLogWindow);
        menu_Advanced->addAction(actionOpenLogFile);
        menu_Advanced->addSeparator();
        menu_Advanced->addAction(actionBackup);
        menu_Advanced->addAction(actionRestore);
        menu_Advanced->addSeparator();
        menu_Advanced->addAction(actionGenerateCheatSheet);
        menu_Advanced->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(onActionExit()));
        QObject::connect(actionEnableDisableBeeftext, SIGNAL(triggered()), MainWindow, SLOT(onActionEnableDisableBeeftext()));
        QObject::connect(actionShowAboutDialog, SIGNAL(triggered()), MainWindow, SLOT(onActionShowAboutDialog()));
        QObject::connect(actionShowPreferencesDialog, SIGNAL(triggered()), MainWindow, SLOT(onActionShowPreferencesDialog()));
        QObject::connect(actionOpenLogFile, SIGNAL(triggered()), MainWindow, SLOT(onActionOpenLogFile()));
        QObject::connect(actionBackup, SIGNAL(triggered()), MainWindow, SLOT(onActionBackup()));
        QObject::connect(actionRestore, SIGNAL(triggered()), MainWindow, SLOT(onActionRestore()));
        QObject::connect(actionGenerateCheatSheet, SIGNAL(triggered()), MainWindow, SLOT(onActionGenerateCheatSheet()));
        QObject::connect(actionShowLogWindow, SIGNAL(triggered()), MainWindow, SLOT(onActionShowLogWindow()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        actionExit->setText(QCoreApplication::translate("MainWindow", "E&xit Beeftext", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "Exit Beeftext", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVisitBeeftextWiki->setText(QCoreApplication::translate("MainWindow", "&Beeftext Wiki", nullptr));
#if QT_CONFIG(shortcut)
        actionVisitBeeftextWiki->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowAboutDialog->setText(QCoreApplication::translate("MainWindow", "&About Beeftext", nullptr));
#if QT_CONFIG(shortcut)
        actionShowAboutDialog->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowPreferencesDialog->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
#if QT_CONFIG(shortcut)
        actionShowPreferencesDialog->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+,", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenLogFile->setText(QCoreApplication::translate("MainWindow", "Open &Log File", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenLogFile->setToolTip(QCoreApplication::translate("MainWindow", "Open the log file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpenLogFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGettingStarted->setText(QCoreApplication::translate("MainWindow", "&Getting Started", nullptr));
#if QT_CONFIG(tooltip)
        actionGettingStarted->setToolTip(QCoreApplication::translate("MainWindow", "Getting Started", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGettingStarted->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowReleaseNotes->setText(QCoreApplication::translate("MainWindow", "&Release Notes", nullptr));
#if QT_CONFIG(shortcut)
        actionShowReleaseNotes->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBackup->setText(QCoreApplication::translate("MainWindow", "&Back Up", nullptr));
#if QT_CONFIG(tooltip)
        actionBackup->setToolTip(QCoreApplication::translate("MainWindow", "Back up the combo list.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRestore->setText(QCoreApplication::translate("MainWindow", "&Restore", nullptr));
#if QT_CONFIG(tooltip)
        actionRestore->setToolTip(QCoreApplication::translate("MainWindow", "Restore the combo list from a backup.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReportBug->setText(QCoreApplication::translate("MainWindow", "Report &Bug", nullptr));
#if QT_CONFIG(shortcut)
        actionReportBug->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGenerateCheatSheet->setText(QCoreApplication::translate("MainWindow", "&Generate Cheat Sheet", nullptr));
#if QT_CONFIG(tooltip)
        actionGenerateCheatSheet->setToolTip(QCoreApplication::translate("MainWindow", "Generate a cheat sheet that can be imported into a spreadsheet application, formatted and printed.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGenerateCheatSheet->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Show_Log_Window->setText(QCoreApplication::translate("MainWindow", "Show Log &Window", nullptr));
        actionShowLogWindow->setText(QCoreApplication::translate("MainWindow", "Show Log &Window", nullptr));
#if QT_CONFIG(tooltip)
        actionShowLogWindow->setToolTip(QCoreApplication::translate("MainWindow", "Show the log window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowLogWindow->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menu_Advanced->setTitle(QCoreApplication::translate("MainWindow", "&Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
