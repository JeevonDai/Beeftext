/********************************************************************************
** Form generated from reading UI file 'GroupListWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPLISTWIDGET_H
#define UI_GROUPLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupListWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonGroups;
    QSpacerItem *horizontalSpacer_2;
    QListView *listGroup;

    void setupUi(QWidget *GroupListWidget)
    {
        if (GroupListWidget->objectName().isEmpty())
            GroupListWidget->setObjectName("GroupListWidget");
        GroupListWidget->resize(249, 724);
        GroupListWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(GroupListWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        buttonGroups = new QPushButton(GroupListWidget);
        buttonGroups->setObjectName("buttonGroups");
        buttonGroups->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_3->addWidget(buttonGroups);

        horizontalSpacer_2 = new QSpacerItem(145, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        listGroup = new QListView(GroupListWidget);
        listGroup->setObjectName("listGroup");
        listGroup->setAcceptDrops(true);
        listGroup->setProperty("showDropIndicator", QVariant(true));
        listGroup->setDragEnabled(true);
        listGroup->setDragDropOverwriteMode(false);
        listGroup->setDragDropMode(QAbstractItemView::DragDrop);
        listGroup->setDefaultDropAction(Qt::MoveAction);
        listGroup->setMovement(QListView::Snap);

        verticalLayout->addWidget(listGroup);

        QWidget::setTabOrder(listGroup, buttonGroups);

        retranslateUi(GroupListWidget);

        QMetaObject::connectSlotsByName(GroupListWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupListWidget)
    {
        buttonGroups->setText(QCoreApplication::translate("GroupListWidget", "Groups", nullptr));
        (void)GroupListWidget;
    } // retranslateUi

};

namespace Ui {
    class GroupListWidget: public Ui_GroupListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPLISTWIDGET_H
