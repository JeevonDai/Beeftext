/********************************************************************************
** Form generated from reading UI file 'ComboDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBODIALOG_H
#define UI_COMBODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "Combo/ComboEditor.h"
#include "Group/GroupComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_ComboDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *editKeyword;
    QLabel *labelCaseSensitivity;
    QComboBox *comboCaseSensitivity;
    QLabel *labelName;
    ComboEditor *comboEditor;
    QLabel *labelName_2;
    QLabel *labelGroup;
    QHBoxLayout *horizontalLayout;
    GroupComboBox *comboGroup;
    QPushButton *buttonNewGroup;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelMatching;
    QComboBox *comboMatching;
    QPlainTextEdit *editDescription;
    QLineEdit *editName;
    QLabel *labelSnippet;
    QLabel *labelKeyword;
    QHBoxLayout *spacer_2;
    QLabel *labelVariables;
    QSpacerItem *spacer;
    QLabel *labelRequiredFields;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *ComboDialog)
    {
        if (ComboDialog->objectName().isEmpty())
            ComboDialog->setObjectName("ComboDialog");
        ComboDialog->resize(620, 431);
        ComboDialog->setWindowTitle(QString::fromUtf8("#Dialog"));
        verticalLayout = new QVBoxLayout(ComboDialog);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        editKeyword = new QLineEdit(ComboDialog);
        editKeyword->setObjectName("editKeyword");

        horizontalLayout_3->addWidget(editKeyword);

        labelCaseSensitivity = new QLabel(ComboDialog);
        labelCaseSensitivity->setObjectName("labelCaseSensitivity");

        horizontalLayout_3->addWidget(labelCaseSensitivity);

        comboCaseSensitivity = new QComboBox(ComboDialog);
        comboCaseSensitivity->setObjectName("comboCaseSensitivity");

        horizontalLayout_3->addWidget(comboCaseSensitivity);

        horizontalLayout_3->setStretch(0, 1);

        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        labelName = new QLabel(ComboDialog);
        labelName->setObjectName("labelName");

        gridLayout->addWidget(labelName, 3, 0, 1, 1);

        comboEditor = new ComboEditor(ComboDialog);
        comboEditor->setObjectName("comboEditor");
        comboEditor->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(comboEditor, 0, 1, 1, 1);

        labelName_2 = new QLabel(ComboDialog);
        labelName_2->setObjectName("labelName_2");
        labelName_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(labelName_2, 4, 0, 1, 1);

        labelGroup = new QLabel(ComboDialog);
        labelGroup->setObjectName("labelGroup");
        labelGroup->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelGroup, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName("horizontalLayout");
        comboGroup = new GroupComboBox(ComboDialog);
        comboGroup->setObjectName("comboGroup");
        comboGroup->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(comboGroup);

        buttonNewGroup = new QPushButton(ComboDialog);
        buttonNewGroup->setObjectName("buttonNewGroup");

        horizontalLayout->addWidget(buttonNewGroup);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labelMatching = new QLabel(ComboDialog);
        labelMatching->setObjectName("labelMatching");
        labelMatching->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelMatching);

        comboMatching = new QComboBox(ComboDialog);
        comboMatching->setObjectName("comboMatching");
        comboMatching->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(comboMatching);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        editDescription = new QPlainTextEdit(ComboDialog);
        editDescription->setObjectName("editDescription");
        editDescription->setTabChangesFocus(true);

        gridLayout->addWidget(editDescription, 4, 1, 1, 1);

        editName = new QLineEdit(ComboDialog);
        editName->setObjectName("editName");

        gridLayout->addWidget(editName, 3, 1, 1, 1);

        labelSnippet = new QLabel(ComboDialog);
        labelSnippet->setObjectName("labelSnippet");
        labelSnippet->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(labelSnippet, 0, 0, 1, 1);

        labelKeyword = new QLabel(ComboDialog);
        labelKeyword->setObjectName("labelKeyword");

        gridLayout->addWidget(labelKeyword, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 4);
        gridLayout->setRowStretch(4, 1);

        verticalLayout->addLayout(gridLayout);

        spacer_2 = new QHBoxLayout();
        spacer_2->setSpacing(6);
        spacer_2->setObjectName("spacer_2");
        spacer_2->setContentsMargins(0, 0, 0, 0);
        labelVariables = new QLabel(ComboDialog);
        labelVariables->setObjectName("labelVariables");
        labelVariables->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://github.com/xmichelo/Beeftext/wiki/Variables\"><span style=\" text-decoration: underline; color:#%1;\">About variables</span></a></p></body></html>"));
        labelVariables->setOpenExternalLinks(true);

        spacer_2->addWidget(labelVariables);

        spacer = new QSpacerItem(131, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        spacer_2->addItem(spacer);

        labelRequiredFields = new QLabel(ComboDialog);
        labelRequiredFields->setObjectName("labelRequiredFields");

        spacer_2->addWidget(labelRequiredFields);

        buttonOk = new QPushButton(ComboDialog);
        buttonOk->setObjectName("buttonOk");

        spacer_2->addWidget(buttonOk);

        buttonCancel = new QPushButton(ComboDialog);
        buttonCancel->setObjectName("buttonCancel");

        spacer_2->addWidget(buttonCancel);


        verticalLayout->addLayout(spacer_2);

        verticalLayout->setStretch(0, 1);
        QWidget::setTabOrder(comboEditor, editKeyword);
        QWidget::setTabOrder(editKeyword, comboCaseSensitivity);
        QWidget::setTabOrder(comboCaseSensitivity, comboGroup);
        QWidget::setTabOrder(comboGroup, buttonNewGroup);
        QWidget::setTabOrder(buttonNewGroup, comboMatching);
        QWidget::setTabOrder(comboMatching, editName);
        QWidget::setTabOrder(editName, editDescription);
        QWidget::setTabOrder(editDescription, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(ComboDialog);

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(ComboDialog);
    } // setupUi

    void retranslateUi(QDialog *ComboDialog)
    {
        labelCaseSensitivity->setText(QCoreApplication::translate("ComboDialog", "Case sensitivity", nullptr));
        labelName->setText(QCoreApplication::translate("ComboDialog", "<html><head/><body><p align=\"right\">Name</p></body></html>", nullptr));
        labelName_2->setText(QCoreApplication::translate("ComboDialog", "<html><head/><body><p align=\"right\">Description</p></body></html>", nullptr));
        labelGroup->setText(QCoreApplication::translate("ComboDialog", "<html><head/><body><p><span style=\" font-size:11pt; color:#258fc0; vertical-align:super;\">\342\227\217 </span>Group</p></body></html>", nullptr));
        buttonNewGroup->setText(QCoreApplication::translate("ComboDialog", "&New", nullptr));
        labelMatching->setText(QCoreApplication::translate("ComboDialog", "Matching", nullptr));
        labelSnippet->setText(QCoreApplication::translate("ComboDialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:11pt; color:#258fc0; vertical-align:super;\">\342\227\217 </span>Snippet</p></body></html>", nullptr));
        labelKeyword->setText(QCoreApplication::translate("ComboDialog", "<html><head/><body><p align=\"right\">Keyword</p></body></html>", nullptr));
        labelRequiredFields->setText(QCoreApplication::translate("ComboDialog", "<html><head/><body><p><span style=\" font-size:11pt; color:#258fc0; vertical-align:super;\">\342\227\217 </span>Required fields</p></body></html>", nullptr));
        buttonOk->setText(QCoreApplication::translate("ComboDialog", "&OK", nullptr));
        buttonCancel->setText(QCoreApplication::translate("ComboDialog", "&Cancel", nullptr));
        (void)ComboDialog;
    } // retranslateUi

};

namespace Ui {
    class ComboDialog: public Ui_ComboDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBODIALOG_H
