/********************************************************************************
** Form generated from reading UI file 'ComboFrame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOFRAME_H
#define UI_COMBOFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "Combo/ComboTableWidget.h"
#include "Group/GroupListWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ComboFrame
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    GroupListWidget *groupListWidget;
    ComboTableWidget *comboTableWidget;

    void setupUi(QFrame *ComboFrame)
    {
        if (ComboFrame->objectName().isEmpty())
            ComboFrame->setObjectName("ComboFrame");
        ComboFrame->resize(640, 480);
        ComboFrame->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(ComboFrame);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(ComboFrame);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(6);
        splitter->setChildrenCollapsible(false);
        groupListWidget = new GroupListWidget(splitter);
        groupListWidget->setObjectName("groupListWidget");
        splitter->addWidget(groupListWidget);
        comboTableWidget = new ComboTableWidget(splitter);
        comboTableWidget->setObjectName("comboTableWidget");
        splitter->addWidget(comboTableWidget);

        verticalLayout->addWidget(splitter);


        retranslateUi(ComboFrame);

        QMetaObject::connectSlotsByName(ComboFrame);
    } // setupUi

    void retranslateUi(QFrame *ComboFrame)
    {
        (void)ComboFrame;
    } // retranslateUi

};

namespace Ui {
    class ComboFrame: public Ui_ComboFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOFRAME_H
