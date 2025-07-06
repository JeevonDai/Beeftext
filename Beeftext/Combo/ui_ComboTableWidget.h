/********************************************************************************
** Form generated from reading UI file 'ComboTableWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOTABLEWIDGET_H
#define UI_COMBOTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComboTableWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonCombos;
    QLineEdit *editSearch;
    QTableView *tableComboList;

    void setupUi(QWidget *ComboTableWidget)
    {
        if (ComboTableWidget->objectName().isEmpty())
            ComboTableWidget->setObjectName("ComboTableWidget");
        ComboTableWidget->resize(770, 564);
        ComboTableWidget->setWindowTitle(QString::fromUtf8("#Frame"));
        verticalLayout = new QVBoxLayout(ComboTableWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        buttonCombos = new QPushButton(ComboTableWidget);
        buttonCombos->setObjectName("buttonCombos");

        horizontalLayout_2->addWidget(buttonCombos);

        editSearch = new QLineEdit(ComboTableWidget);
        editSearch->setObjectName("editSearch");
        editSearch->setMinimumSize(QSize(200, 0));
        editSearch->setClearButtonEnabled(true);
        editSearch->setProperty("hasPlaceholderText", QVariant(true));

        horizontalLayout_2->addWidget(editSearch);


        verticalLayout->addLayout(horizontalLayout_2);

        tableComboList = new QTableView(ComboTableWidget);
        tableComboList->setObjectName("tableComboList");
        tableComboList->setFocusPolicy(Qt::StrongFocus);
        tableComboList->setAcceptDrops(false);
        tableComboList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableComboList->setTabKeyNavigation(false);
        tableComboList->setProperty("showDropIndicator", QVariant(false));
        tableComboList->setDragEnabled(true);
        tableComboList->setDragDropOverwriteMode(false);
        tableComboList->setDragDropMode(QAbstractItemView::DragOnly);
        tableComboList->setDefaultDropAction(Qt::MoveAction);
        tableComboList->setAlternatingRowColors(false);
        tableComboList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableComboList->setShowGrid(false);
        tableComboList->setGridStyle(Qt::NoPen);
        tableComboList->setSortingEnabled(true);
        tableComboList->setWordWrap(false);
        tableComboList->setCornerButtonEnabled(false);
        tableComboList->horizontalHeader()->setMinimumSectionSize(70);
        tableComboList->horizontalHeader()->setDefaultSectionSize(70);
        tableComboList->horizontalHeader()->setHighlightSections(false);
        tableComboList->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableComboList->horizontalHeader()->setStretchLastSection(true);
        tableComboList->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableComboList);

        QWidget::setTabOrder(tableComboList, editSearch);
        QWidget::setTabOrder(editSearch, buttonCombos);

        retranslateUi(ComboTableWidget);

        QMetaObject::connectSlotsByName(ComboTableWidget);
    } // setupUi

    void retranslateUi(QWidget *ComboTableWidget)
    {
        buttonCombos->setText(QCoreApplication::translate("ComboTableWidget", "Combos", nullptr));
        editSearch->setPlaceholderText(QCoreApplication::translate("ComboTableWidget", "Search (Ctrl+F)", nullptr));
        (void)ComboTableWidget;
    } // retranslateUi

};

namespace Ui {
    class ComboTableWidget: public Ui_ComboTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOTABLEWIDGET_H
