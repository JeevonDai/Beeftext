/********************************************************************************
** Form generated from reading UI file 'PrefPaneCombos.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFPANECOMBOS_H
#define UI_PREFPANECOMBOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrefPaneCombos
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *layout1;
    QRadioButton *radioComboTriggerAuto;
    QCheckBox *checkComboTriggersOnSpace;
    QCheckBox *checkKeepFinalSpaceCharacter;
    QSpacerItem *spacer1;
    QHBoxLayout *layout2;
    QRadioButton *radioComboTriggerManual;
    QLineEdit *editComboTriggerShortcut;
    QPushButton *buttonChangeComboTriggerShortcut;
    QPushButton *buttonResetComboTriggerShortcut;
    QSpacerItem *spacer2;
    QGroupBox *groupBoxDefaultBehavior;
    QGridLayout *gridLayout;
    QLabel *labelMatchingMode;
    QComboBox *comboMatchingMode;
    QLabel *labelCaseSensitivity;
    QComboBox *comboCaseSensitivity;
    QSpacerItem *spacer3;
    QGroupBox *groupPickerWindow;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkEnablePickerWindow;
    QHBoxLayout *layout3;
    QLabel *labelPickerWindowShortcut;
    QLineEdit *editPickerWindowShortcut;
    QPushButton *buttonChangePickerWindowShortcut;
    QPushButton *buttonResetPickerWindowShortcut;
    QSpacerItem *spacer4;

    void setupUi(QFrame *PrefPaneCombos)
    {
        if (PrefPaneCombos->objectName().isEmpty())
            PrefPaneCombos->setObjectName("PrefPaneCombos");
        PrefPaneCombos->resize(561, 276);
        PrefPaneCombos->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(PrefPaneCombos);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(PrefPaneCombos);
        groupBox->setObjectName("groupBox");
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        layout1 = new QHBoxLayout();
        layout1->setObjectName("layout1");
        radioComboTriggerAuto = new QRadioButton(groupBox);
        radioComboTriggerAuto->setObjectName("radioComboTriggerAuto");

        layout1->addWidget(radioComboTriggerAuto);

        checkComboTriggersOnSpace = new QCheckBox(groupBox);
        checkComboTriggersOnSpace->setObjectName("checkComboTriggersOnSpace");

        layout1->addWidget(checkComboTriggersOnSpace);

        checkKeepFinalSpaceCharacter = new QCheckBox(groupBox);
        checkKeepFinalSpaceCharacter->setObjectName("checkKeepFinalSpaceCharacter");

        layout1->addWidget(checkKeepFinalSpaceCharacter);

        spacer1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout1->addItem(spacer1);


        verticalLayout_6->addLayout(layout1);

        layout2 = new QHBoxLayout();
        layout2->setObjectName("layout2");
        radioComboTriggerManual = new QRadioButton(groupBox);
        radioComboTriggerManual->setObjectName("radioComboTriggerManual");

        layout2->addWidget(radioComboTriggerManual);

        editComboTriggerShortcut = new QLineEdit(groupBox);
        editComboTriggerShortcut->setObjectName("editComboTriggerShortcut");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editComboTriggerShortcut->sizePolicy().hasHeightForWidth());
        editComboTriggerShortcut->setSizePolicy(sizePolicy);
        editComboTriggerShortcut->setMinimumSize(QSize(200, 0));
        editComboTriggerShortcut->setMaximumSize(QSize(100, 16777215));
        editComboTriggerShortcut->setBaseSize(QSize(50, 0));
        editComboTriggerShortcut->setMaxLength(50);
        editComboTriggerShortcut->setReadOnly(true);

        layout2->addWidget(editComboTriggerShortcut);

        buttonChangeComboTriggerShortcut = new QPushButton(groupBox);
        buttonChangeComboTriggerShortcut->setObjectName("buttonChangeComboTriggerShortcut");

        layout2->addWidget(buttonChangeComboTriggerShortcut);

        buttonResetComboTriggerShortcut = new QPushButton(groupBox);
        buttonResetComboTriggerShortcut->setObjectName("buttonResetComboTriggerShortcut");

        layout2->addWidget(buttonResetComboTriggerShortcut);

        spacer2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout2->addItem(spacer2);


        verticalLayout_6->addLayout(layout2);


        verticalLayout->addWidget(groupBox);

        groupBoxDefaultBehavior = new QGroupBox(PrefPaneCombos);
        groupBoxDefaultBehavior->setObjectName("groupBoxDefaultBehavior");
        gridLayout = new QGridLayout(groupBoxDefaultBehavior);
        gridLayout->setObjectName("gridLayout");
        labelMatchingMode = new QLabel(groupBoxDefaultBehavior);
        labelMatchingMode->setObjectName("labelMatchingMode");

        gridLayout->addWidget(labelMatchingMode, 0, 0, 1, 1);

        comboMatchingMode = new QComboBox(groupBoxDefaultBehavior);
        comboMatchingMode->setObjectName("comboMatchingMode");
        comboMatchingMode->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(comboMatchingMode, 0, 1, 1, 1);

        labelCaseSensitivity = new QLabel(groupBoxDefaultBehavior);
        labelCaseSensitivity->setObjectName("labelCaseSensitivity");

        gridLayout->addWidget(labelCaseSensitivity, 1, 0, 1, 1);

        comboCaseSensitivity = new QComboBox(groupBoxDefaultBehavior);
        comboCaseSensitivity->setObjectName("comboCaseSensitivity");
        comboCaseSensitivity->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(comboCaseSensitivity, 1, 1, 1, 1);

        spacer3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacer3, 0, 2, 2, 1);


        verticalLayout->addWidget(groupBoxDefaultBehavior);

        groupPickerWindow = new QGroupBox(PrefPaneCombos);
        groupPickerWindow->setObjectName("groupPickerWindow");
        groupPickerWindow->setMinimumSize(QSize(0, 0));
        verticalLayout_5 = new QVBoxLayout(groupPickerWindow);
        verticalLayout_5->setObjectName("verticalLayout_5");
        checkEnablePickerWindow = new QCheckBox(groupPickerWindow);
        checkEnablePickerWindow->setObjectName("checkEnablePickerWindow");

        verticalLayout_5->addWidget(checkEnablePickerWindow);

        layout3 = new QHBoxLayout();
        layout3->setObjectName("layout3");
        labelPickerWindowShortcut = new QLabel(groupPickerWindow);
        labelPickerWindowShortcut->setObjectName("labelPickerWindowShortcut");

        layout3->addWidget(labelPickerWindowShortcut);

        editPickerWindowShortcut = new QLineEdit(groupPickerWindow);
        editPickerWindowShortcut->setObjectName("editPickerWindowShortcut");
        sizePolicy.setHeightForWidth(editPickerWindowShortcut->sizePolicy().hasHeightForWidth());
        editPickerWindowShortcut->setSizePolicy(sizePolicy);
        editPickerWindowShortcut->setMinimumSize(QSize(200, 0));
        editPickerWindowShortcut->setBaseSize(QSize(50, 0));
        editPickerWindowShortcut->setMaxLength(50);
        editPickerWindowShortcut->setReadOnly(true);

        layout3->addWidget(editPickerWindowShortcut);

        buttonChangePickerWindowShortcut = new QPushButton(groupPickerWindow);
        buttonChangePickerWindowShortcut->setObjectName("buttonChangePickerWindowShortcut");

        layout3->addWidget(buttonChangePickerWindowShortcut);

        buttonResetPickerWindowShortcut = new QPushButton(groupPickerWindow);
        buttonResetPickerWindowShortcut->setObjectName("buttonResetPickerWindowShortcut");

        layout3->addWidget(buttonResetPickerWindowShortcut);

        spacer4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout3->addItem(spacer4);


        verticalLayout_5->addLayout(layout3);


        verticalLayout->addWidget(groupPickerWindow);


        retranslateUi(PrefPaneCombos);

        QMetaObject::connectSlotsByName(PrefPaneCombos);
    } // setupUi

    void retranslateUi(QFrame *PrefPaneCombos)
    {
        groupBox->setTitle(QCoreApplication::translate("PrefPaneCombos", "Combo triggering", nullptr));
        radioComboTriggerAuto->setText(QCoreApplication::translate("PrefPaneCombos", "Automatic", nullptr));
        checkComboTriggersOnSpace->setText(QCoreApplication::translate("PrefPaneCombos", "Trigger only after spacebar is pressed", nullptr));
        checkKeepFinalSpaceCharacter->setText(QCoreApplication::translate("PrefPaneCombos", "Keep the final space character", nullptr));
        radioComboTriggerManual->setText(QCoreApplication::translate("PrefPaneCombos", "Manual, using the shortcut", nullptr));
        buttonChangeComboTriggerShortcut->setText(QCoreApplication::translate("PrefPaneCombos", "C&hange", nullptr));
        buttonResetComboTriggerShortcut->setText(QCoreApplication::translate("PrefPaneCombos", "De&fault", nullptr));
        groupBoxDefaultBehavior->setTitle(QCoreApplication::translate("PrefPaneCombos", "Default behavior", nullptr));
        labelMatchingMode->setText(QCoreApplication::translate("PrefPaneCombos", "Default matching mode", nullptr));
        labelCaseSensitivity->setText(QCoreApplication::translate("PrefPaneCombos", "Default case sensitivity", nullptr));
        groupPickerWindow->setTitle(QCoreApplication::translate("PrefPaneCombos", "Picker window", nullptr));
        checkEnablePickerWindow->setText(QCoreApplication::translate("PrefPaneCombos", "Enable picker window", nullptr));
        labelPickerWindowShortcut->setText(QCoreApplication::translate("PrefPaneCombos", "Shortcut", nullptr));
        buttonChangePickerWindowShortcut->setText(QCoreApplication::translate("PrefPaneCombos", "C&hange", nullptr));
        buttonResetPickerWindowShortcut->setText(QCoreApplication::translate("PrefPaneCombos", "De&fault", nullptr));
        (void)PrefPaneCombos;
    } // retranslateUi

};

namespace Ui {
    class PrefPaneCombos: public Ui_PrefPaneCombos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFPANECOMBOS_H
