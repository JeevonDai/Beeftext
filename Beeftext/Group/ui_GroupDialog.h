/********************************************************************************
** Form generated from reading UI file 'GroupDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPDIALOG_H
#define UI_GROUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GroupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *labelDescription;
    QLineEdit *editName;
    QPlainTextEdit *editDescription;
    QLabel *labelName;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *GroupDialog)
    {
        if (GroupDialog->objectName().isEmpty())
            GroupDialog->setObjectName("GroupDialog");
        GroupDialog->resize(508, 212);
        verticalLayout = new QVBoxLayout(GroupDialog);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        labelDescription = new QLabel(GroupDialog);
        labelDescription->setObjectName("labelDescription");
        labelDescription->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelDescription, 1, 0, 1, 1);

        editName = new QLineEdit(GroupDialog);
        editName->setObjectName("editName");

        gridLayout_2->addWidget(editName, 0, 1, 1, 1);

        editDescription = new QPlainTextEdit(GroupDialog);
        editDescription->setObjectName("editDescription");
        editDescription->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout_2->addWidget(editDescription, 1, 1, 2, 1);

        labelName = new QLabel(GroupDialog);
        labelName->setObjectName("labelName");
        labelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelName, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(GroupDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(GroupDialog);
        buttonOk->setObjectName("buttonOk");

        horizontalLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(GroupDialog);
        buttonCancel->setObjectName("buttonCancel");

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(GroupDialog);

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(GroupDialog);
    } // setupUi

    void retranslateUi(QDialog *GroupDialog)
    {
        GroupDialog->setWindowTitle(QString());
        labelDescription->setText(QCoreApplication::translate("GroupDialog", "Description", nullptr));
        labelName->setText(QCoreApplication::translate("GroupDialog", "<html><head/><body><p><span style=\" font-size:11pt; color:#258fc0; vertical-align:super;\">\342\227\217</span> Name</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("GroupDialog", "<html><head/><body><p><span style=\" font-size:11pt; color:#258fc0; vertical-align:super;\">\342\227\217 </span>Required fields</p></body></html>", nullptr));
        buttonOk->setText(QCoreApplication::translate("GroupDialog", "&OK", nullptr));
        buttonCancel->setText(QCoreApplication::translate("GroupDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupDialog: public Ui_GroupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPDIALOG_H
