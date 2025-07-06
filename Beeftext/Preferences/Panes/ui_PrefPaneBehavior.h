/********************************************************************************
** Form generated from reading UI file 'PrefPaneBehavior.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFPANEBEHAVIOR_H
#define UI_PREFPANEBEHAVIOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrefPaneBehavior
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout2;
    QCheckBox *checkAutoCheckForUpdates;
    QPushButton *buttonCheckNow;
    QLabel *labelUpdateCheckStatus;
    QCheckBox *checkAutoStart;
    QCheckBox *checkPlaySoundOnCombo;
    QHBoxLayout *layout4;
    QCheckBox *checkUseCustomSound;
    QFrame *frameCustomSound;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editCustomSound;
    QPushButton *buttonChangeCustomSound;
    QPushButton *buttonPlay;
    QHBoxLayout *layout3;
    QCheckBox *checkAppEnableDisable;
    QFrame *frameAppEnableDisableShortcut;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *editAppEnableDisableShortcut;
    QPushButton *buttonChangeAppEnableDisableShortcut;
    QPushButton *buttonDefaultAppEnableDisableShortcut;

    void setupUi(QFrame *PrefPaneBehavior)
    {
        if (PrefPaneBehavior->objectName().isEmpty())
            PrefPaneBehavior->setObjectName("PrefPaneBehavior");
        PrefPaneBehavior->resize(708, 146);
        PrefPaneBehavior->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(PrefPaneBehavior);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layout2 = new QHBoxLayout();
        layout2->setObjectName("layout2");
        checkAutoCheckForUpdates = new QCheckBox(PrefPaneBehavior);
        checkAutoCheckForUpdates->setObjectName("checkAutoCheckForUpdates");

        layout2->addWidget(checkAutoCheckForUpdates);

        buttonCheckNow = new QPushButton(PrefPaneBehavior);
        buttonCheckNow->setObjectName("buttonCheckNow");

        layout2->addWidget(buttonCheckNow);

        labelUpdateCheckStatus = new QLabel(PrefPaneBehavior);
        labelUpdateCheckStatus->setObjectName("labelUpdateCheckStatus");
        labelUpdateCheckStatus->setText(QString::fromUtf8("#Update Check Status#"));

        layout2->addWidget(labelUpdateCheckStatus);

        layout2->setStretch(2, 1);

        verticalLayout->addLayout(layout2);

        checkAutoStart = new QCheckBox(PrefPaneBehavior);
        checkAutoStart->setObjectName("checkAutoStart");

        verticalLayout->addWidget(checkAutoStart);

        checkPlaySoundOnCombo = new QCheckBox(PrefPaneBehavior);
        checkPlaySoundOnCombo->setObjectName("checkPlaySoundOnCombo");

        verticalLayout->addWidget(checkPlaySoundOnCombo);

        layout4 = new QHBoxLayout();
        layout4->setObjectName("layout4");
        checkUseCustomSound = new QCheckBox(PrefPaneBehavior);
        checkUseCustomSound->setObjectName("checkUseCustomSound");

        layout4->addWidget(checkUseCustomSound);

        frameCustomSound = new QFrame(PrefPaneBehavior);
        frameCustomSound->setObjectName("frameCustomSound");
        frameCustomSound->setMinimumSize(QSize(0, 0));
        frameCustomSound->setFrameShape(QFrame::StyledPanel);
        frameCustomSound->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameCustomSound);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        editCustomSound = new QLineEdit(frameCustomSound);
        editCustomSound->setObjectName("editCustomSound");
        editCustomSound->setReadOnly(true);

        horizontalLayout->addWidget(editCustomSound);

        buttonChangeCustomSound = new QPushButton(frameCustomSound);
        buttonChangeCustomSound->setObjectName("buttonChangeCustomSound");

        horizontalLayout->addWidget(buttonChangeCustomSound);

        buttonPlay = new QPushButton(frameCustomSound);
        buttonPlay->setObjectName("buttonPlay");

        horizontalLayout->addWidget(buttonPlay);


        layout4->addWidget(frameCustomSound);


        verticalLayout->addLayout(layout4);

        layout3 = new QHBoxLayout();
        layout3->setObjectName("layout3");
        checkAppEnableDisable = new QCheckBox(PrefPaneBehavior);
        checkAppEnableDisable->setObjectName("checkAppEnableDisable");

        layout3->addWidget(checkAppEnableDisable);

        frameAppEnableDisableShortcut = new QFrame(PrefPaneBehavior);
        frameAppEnableDisableShortcut->setObjectName("frameAppEnableDisableShortcut");
        frameAppEnableDisableShortcut->setMinimumSize(QSize(100, 0));
        frameAppEnableDisableShortcut->setFrameShape(QFrame::StyledPanel);
        frameAppEnableDisableShortcut->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frameAppEnableDisableShortcut);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        editAppEnableDisableShortcut = new QLineEdit(frameAppEnableDisableShortcut);
        editAppEnableDisableShortcut->setObjectName("editAppEnableDisableShortcut");
        editAppEnableDisableShortcut->setMinimumSize(QSize(200, 0));
        editAppEnableDisableShortcut->setMaxLength(50);
        editAppEnableDisableShortcut->setReadOnly(true);

        horizontalLayout_13->addWidget(editAppEnableDisableShortcut);

        buttonChangeAppEnableDisableShortcut = new QPushButton(frameAppEnableDisableShortcut);
        buttonChangeAppEnableDisableShortcut->setObjectName("buttonChangeAppEnableDisableShortcut");

        horizontalLayout_13->addWidget(buttonChangeAppEnableDisableShortcut);

        buttonDefaultAppEnableDisableShortcut = new QPushButton(frameAppEnableDisableShortcut);
        buttonDefaultAppEnableDisableShortcut->setObjectName("buttonDefaultAppEnableDisableShortcut");

        horizontalLayout_13->addWidget(buttonDefaultAppEnableDisableShortcut);


        layout3->addWidget(frameAppEnableDisableShortcut);


        verticalLayout->addLayout(layout3);


        retranslateUi(PrefPaneBehavior);

        QMetaObject::connectSlotsByName(PrefPaneBehavior);
    } // setupUi

    void retranslateUi(QFrame *PrefPaneBehavior)
    {
        checkAutoCheckForUpdates->setText(QCoreApplication::translate("PrefPaneBehavior", "Automatically check for &updates", nullptr));
        buttonCheckNow->setText(QCoreApplication::translate("PrefPaneBehavior", "&Check Now", nullptr));
        checkAutoStart->setText(QCoreApplication::translate("PrefPaneBehavior", "&Automatically start Beeftext at login", nullptr));
        checkPlaySoundOnCombo->setText(QCoreApplication::translate("PrefPaneBehavior", "&Play sound on combo", nullptr));
        checkUseCustomSound->setText(QCoreApplication::translate("PrefPaneBehavior", "Use custom sound", nullptr));
        buttonChangeCustomSound->setText(QCoreApplication::translate("PrefPaneBehavior", "Cha&nge", nullptr));
        buttonPlay->setText(QCoreApplication::translate("PrefPaneBehavior", "&Play", nullptr));
        checkAppEnableDisable->setText(QCoreApplication::translate("PrefPaneBehavior", "Use shortcut to enable/disable Beeftext", nullptr));
        buttonChangeAppEnableDisableShortcut->setText(QCoreApplication::translate("PrefPaneBehavior", "&Change", nullptr));
        buttonDefaultAppEnableDisableShortcut->setText(QCoreApplication::translate("PrefPaneBehavior", "&Default", nullptr));
        (void)PrefPaneBehavior;
    } // retranslateUi

};

namespace Ui {
    class PrefPaneBehavior: public Ui_PrefPaneBehavior {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFPANEBEHAVIOR_H
