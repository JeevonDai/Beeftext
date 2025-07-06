/********************************************************************************
** Form generated from reading UI file 'PickerWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKERWINDOW_H
#define UI_PICKERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PickerWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameTopLevel;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editSearch;
    QLabel *labelLogo;
    QListView *listViewResults;

    void setupUi(QWidget *PickerWindow)
    {
        if (PickerWindow->objectName().isEmpty())
            PickerWindow->setObjectName("PickerWindow");
        PickerWindow->resize(500, 250);
        PickerWindow->setMinimumSize(QSize(400, 0));
        PickerWindow->setMouseTracking(true);
        PickerWindow->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(PickerWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameTopLevel = new QFrame(PickerWindow);
        frameTopLevel->setObjectName("frameTopLevel");
        frameTopLevel->setFrameShape(QFrame::StyledPanel);
        frameTopLevel->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameTopLevel);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        editSearch = new QLineEdit(frameTopLevel);
        editSearch->setObjectName("editSearch");
        editSearch->setMinimumSize(QSize(0, 32));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        editSearch->setFont(font);
        editSearch->setContextMenuPolicy(Qt::NoContextMenu);
        editSearch->setFrame(false);
        editSearch->setProperty("hasPlaceholderText", QVariant(true));

        horizontalLayout->addWidget(editSearch);

        labelLogo = new QLabel(frameTopLevel);
        labelLogo->setObjectName("labelLogo");
        labelLogo->setMinimumSize(QSize(32, 32));
        labelLogo->setMaximumSize(QSize(32, 32));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/MainWindow/Resources/BeeftextLogo128.png")));
        labelLogo->setScaledContents(true);

        horizontalLayout->addWidget(labelLogo);

        horizontalLayout->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        listViewResults = new QListView(frameTopLevel);
        listViewResults->setObjectName("listViewResults");

        verticalLayout_2->addWidget(listViewResults);

        verticalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(frameTopLevel);


        retranslateUi(PickerWindow);

        QMetaObject::connectSlotsByName(PickerWindow);
    } // setupUi

    void retranslateUi(QWidget *PickerWindow)
    {
        editSearch->setPlaceholderText(QCoreApplication::translate("PickerWindow", "Search", nullptr));
        labelLogo->setText(QString());
        (void)PickerWindow;
    } // retranslateUi

};

namespace Ui {
    class PickerWindow: public Ui_PickerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKERWINDOW_H
