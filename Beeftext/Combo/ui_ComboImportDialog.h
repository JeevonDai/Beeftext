/********************************************************************************
** Form generated from reading UI file 'ComboImportDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOIMPORTDIALOG_H
#define UI_COMBOIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "Group/GroupComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_ComboImportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxFile;
    QGridLayout *gridLayout;
    QLineEdit *editPath;
    QPushButton *buttonBrowse;
    QLabel *labelSupportedFormats;
    QGroupBox *groupBoxOptions;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    GroupComboBox *comboGroup;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBoxConflicts;
    QVBoxLayout *groupBoxConflictsLayout;
    QRadioButton *radioSkipConflicts;
    QRadioButton *radioImportNewer;
    QRadioButton *radioOverwrite;
    QLabel *labelImportCount;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonImport;
    QPushButton *buttonCancel;

    void setupUi(QDialog *ComboImportDialog)
    {
        if (ComboImportDialog->objectName().isEmpty())
            ComboImportDialog->setObjectName("ComboImportDialog");
        ComboImportDialog->resize(521, 338);
        ComboImportDialog->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(ComboImportDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        groupBoxFile = new QGroupBox(ComboImportDialog);
        groupBoxFile->setObjectName("groupBoxFile");
        groupBoxFile->setMinimumSize(QSize(503, 0));
        gridLayout = new QGridLayout(groupBoxFile);
        gridLayout->setObjectName("gridLayout");
        editPath = new QLineEdit(groupBoxFile);
        editPath->setObjectName("editPath");
        editPath->setAcceptDrops(false);

        gridLayout->addWidget(editPath, 0, 0, 1, 1);

        buttonBrowse = new QPushButton(groupBoxFile);
        buttonBrowse->setObjectName("buttonBrowse");

        gridLayout->addWidget(buttonBrowse, 0, 1, 1, 1);

        labelSupportedFormats = new QLabel(groupBoxFile);
        labelSupportedFormats->setObjectName("labelSupportedFormats");
        labelSupportedFormats->setOpenExternalLinks(true);

        gridLayout->addWidget(labelSupportedFormats, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBoxFile);

        groupBoxOptions = new QGroupBox(ComboImportDialog);
        groupBoxOptions->setObjectName("groupBoxOptions");
        horizontalLayout_3 = new QHBoxLayout(groupBoxOptions);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBoxOptions);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        comboGroup = new GroupComboBox(groupBoxOptions);
        comboGroup->setObjectName("comboGroup");
        comboGroup->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(comboGroup);

        horizontalSpacer_2 = new QSpacerItem(315, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(groupBoxOptions);

        groupBoxConflicts = new QGroupBox(ComboImportDialog);
        groupBoxConflicts->setObjectName("groupBoxConflicts");
        QFont font;
        font.setBold(false);
        groupBoxConflicts->setFont(font);
        groupBoxConflicts->setTitle(QString::fromUtf8("Conflict resolution"));
        groupBoxConflictsLayout = new QVBoxLayout(groupBoxConflicts);
        groupBoxConflictsLayout->setObjectName("groupBoxConflictsLayout");
        radioSkipConflicts = new QRadioButton(groupBoxConflicts);
        radioSkipConflicts->setObjectName("radioSkipConflicts");
        radioSkipConflicts->setText(QString::fromUtf8("#Skip#"));
        radioSkipConflicts->setChecked(true);

        groupBoxConflictsLayout->addWidget(radioSkipConflicts);

        radioImportNewer = new QRadioButton(groupBoxConflicts);
        radioImportNewer->setObjectName("radioImportNewer");
        radioImportNewer->setText(QString::fromUtf8("#Overwrite if older#"));
        radioImportNewer->setChecked(false);

        groupBoxConflictsLayout->addWidget(radioImportNewer);

        radioOverwrite = new QRadioButton(groupBoxConflicts);
        radioOverwrite->setObjectName("radioOverwrite");
        radioOverwrite->setText(QString::fromUtf8("#Overwrite#"));

        groupBoxConflictsLayout->addWidget(radioOverwrite);


        verticalLayout->addWidget(groupBoxConflicts);

        labelImportCount = new QLabel(ComboImportDialog);
        labelImportCount->setObjectName("labelImportCount");
        QFont font1;
        font1.setBold(true);
        labelImportCount->setFont(font1);
        labelImportCount->setText(QString::fromUtf8("#importCount"));
        labelImportCount->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelImportCount);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonImport = new QPushButton(ComboImportDialog);
        buttonImport->setObjectName("buttonImport");

        horizontalLayout->addWidget(buttonImport);

        buttonCancel = new QPushButton(ComboImportDialog);
        buttonCancel->setObjectName("buttonCancel");

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(editPath, buttonBrowse);
        QWidget::setTabOrder(buttonBrowse, buttonImport);
        QWidget::setTabOrder(buttonImport, buttonCancel);

        retranslateUi(ComboImportDialog);

        buttonImport->setDefault(true);


        QMetaObject::connectSlotsByName(ComboImportDialog);
    } // setupUi

    void retranslateUi(QDialog *ComboImportDialog)
    {
        ComboImportDialog->setWindowTitle(QString());
        groupBoxFile->setTitle(QCoreApplication::translate("ComboImportDialog", "File", nullptr));
        buttonBrowse->setText(QCoreApplication::translate("ComboImportDialog", "&Browse", nullptr));
        labelSupportedFormats->setText(QCoreApplication::translate("ComboImportDialog", "<html><head/><body><p align=\"right\"><a href=\"https://github.com/xmichelo/Beeftext/wiki/Import-and-export#importing-combos\"><span style=\" text-decoration: underline; color:#%1;\">Supported file formats</span></a></p></body></html>", nullptr));
        groupBoxOptions->setTitle(QCoreApplication::translate("ComboImportDialog", "Import options", nullptr));
        label->setText(QCoreApplication::translate("ComboImportDialog", "Import into group", nullptr));
        buttonImport->setText(QCoreApplication::translate("ComboImportDialog", "Import", nullptr));
        buttonCancel->setText(QCoreApplication::translate("ComboImportDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComboImportDialog: public Ui_ComboImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOIMPORTDIALOG_H
