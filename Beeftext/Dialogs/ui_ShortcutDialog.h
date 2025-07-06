/********************************************************************************
** Form generated from reading UI file 'ShortcutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTDIALOG_H
#define UI_SHORTCUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShortcutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *editShortcut;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelError;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;

    void setupUi(QDialog *ShortcutDialog)
    {
        if (ShortcutDialog->objectName().isEmpty())
            ShortcutDialog->setObjectName("ShortcutDialog");
        ShortcutDialog->resize(384, 188);
        verticalLayout = new QVBoxLayout(ShortcutDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ShortcutDialog);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(ShortcutDialog);
        label_2->setObjectName("label_2");
        label_2->setTextFormat(Qt::AutoText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        editShortcut = new QLineEdit(ShortcutDialog);
        editShortcut->setObjectName("editShortcut");
        editShortcut->setBaseSize(QSize(300, 0));
        editShortcut->setFocusPolicy(Qt::NoFocus);
        editShortcut->setReadOnly(true);

        horizontalLayout_2->addWidget(editShortcut);

        horizontalSpacer_2 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        labelError = new QLabel(ShortcutDialog);
        labelError->setObjectName("labelError");
        labelError->setText(QString::fromUtf8("#error#"));
        labelError->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelError);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOK = new QPushButton(ShortcutDialog);
        buttonOK->setObjectName("buttonOK");
        buttonOK->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(buttonOK);

        buttonCancel = new QPushButton(ShortcutDialog);
        buttonCancel->setObjectName("buttonCancel");
        buttonCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShortcutDialog);

        QMetaObject::connectSlotsByName(ShortcutDialog);
    } // setupUi

    void retranslateUi(QDialog *ShortcutDialog)
    {
        ShortcutDialog->setWindowTitle(QString());
        label->setText(QCoreApplication::translate("ShortcutDialog", "Type the new shortcut.", nullptr));
        label_2->setText(QCoreApplication::translate("ShortcutDialog", "The shortcut must contain at least one of the following modifier keys:\n"
"Control, Alt or Windows.", nullptr));
        buttonOK->setText(QCoreApplication::translate("ShortcutDialog", "&OK", nullptr));
        buttonCancel->setText(QCoreApplication::translate("ShortcutDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShortcutDialog: public Ui_ShortcutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTDIALOG_H
