/********************************************************************************
** Form generated from reading UI file 'PrefPaneEmojis.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFPANEEMOJIS_H
#define UI_PREFPANEEMOJIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrefPaneEmojis
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout1;
    QCheckBox *checkEnableEmoji;
    QPushButton *buttonEmojiExcludedApps;
    QSpacerItem *spacer1;
    QGridLayout *grid1;
    QLabel *labelEmojiLeftDelimiter;
    QSpacerItem *spacer2;
    QLineEdit *editEmojiLeftDelimiter;
    QSpacerItem *spacer3;
    QLineEdit *editEmojiRightDelimiter;
    QLabel *labelEmojiRightDelimiter;
    QHBoxLayout *layout2;
    QCheckBox *checkShowEmojiInPickerWindow;
    QSpacerItem *spacer4;

    void setupUi(QFrame *PrefPaneEmojis)
    {
        if (PrefPaneEmojis->objectName().isEmpty())
            PrefPaneEmojis->setObjectName("PrefPaneEmojis");
        PrefPaneEmojis->resize(683, 84);
        PrefPaneEmojis->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(PrefPaneEmojis);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layout1 = new QHBoxLayout();
        layout1->setObjectName("layout1");
        checkEnableEmoji = new QCheckBox(PrefPaneEmojis);
        checkEnableEmoji->setObjectName("checkEnableEmoji");

        layout1->addWidget(checkEnableEmoji);

        buttonEmojiExcludedApps = new QPushButton(PrefPaneEmojis);
        buttonEmojiExcludedApps->setObjectName("buttonEmojiExcludedApps");

        layout1->addWidget(buttonEmojiExcludedApps);

        spacer1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout1->addItem(spacer1);


        verticalLayout->addLayout(layout1);

        grid1 = new QGridLayout();
        grid1->setObjectName("grid1");
        labelEmojiLeftDelimiter = new QLabel(PrefPaneEmojis);
        labelEmojiLeftDelimiter->setObjectName("labelEmojiLeftDelimiter");

        grid1->addWidget(labelEmojiLeftDelimiter, 0, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        grid1->addItem(spacer2, 0, 2, 1, 1);

        editEmojiLeftDelimiter = new QLineEdit(PrefPaneEmojis);
        editEmojiLeftDelimiter->setObjectName("editEmojiLeftDelimiter");
        editEmojiLeftDelimiter->setMaximumSize(QSize(50, 16777215));

        grid1->addWidget(editEmojiLeftDelimiter, 0, 1, 1, 1);

        spacer3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        grid1->addItem(spacer3, 0, 5, 1, 1);

        editEmojiRightDelimiter = new QLineEdit(PrefPaneEmojis);
        editEmojiRightDelimiter->setObjectName("editEmojiRightDelimiter");
        editEmojiRightDelimiter->setMaximumSize(QSize(50, 16777215));

        grid1->addWidget(editEmojiRightDelimiter, 0, 4, 1, 1);

        labelEmojiRightDelimiter = new QLabel(PrefPaneEmojis);
        labelEmojiRightDelimiter->setObjectName("labelEmojiRightDelimiter");

        grid1->addWidget(labelEmojiRightDelimiter, 0, 3, 1, 1);


        verticalLayout->addLayout(grid1);

        layout2 = new QHBoxLayout();
        layout2->setObjectName("layout2");
        checkShowEmojiInPickerWindow = new QCheckBox(PrefPaneEmojis);
        checkShowEmojiInPickerWindow->setObjectName("checkShowEmojiInPickerWindow");

        layout2->addWidget(checkShowEmojiInPickerWindow);

        spacer4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout2->addItem(spacer4);


        verticalLayout->addLayout(layout2);


        retranslateUi(PrefPaneEmojis);

        QMetaObject::connectSlotsByName(PrefPaneEmojis);
    } // setupUi

    void retranslateUi(QFrame *PrefPaneEmojis)
    {
        checkEnableEmoji->setText(QCoreApplication::translate("PrefPaneEmojis", "Enable emoji shortcodes", nullptr));
        buttonEmojiExcludedApps->setText(QCoreApplication::translate("PrefPaneEmojis", "&Excluded Applications", nullptr));
        labelEmojiLeftDelimiter->setText(QCoreApplication::translate("PrefPaneEmojis", "Left delimiter", nullptr));
        labelEmojiRightDelimiter->setText(QCoreApplication::translate("PrefPaneEmojis", "Right delimiter", nullptr));
        checkShowEmojiInPickerWindow->setText(QCoreApplication::translate("PrefPaneEmojis", "Show emojis in picker window", nullptr));
        (void)PrefPaneEmojis;
    } // retranslateUi

};

namespace Ui {
    class PrefPaneEmojis: public Ui_PrefPaneEmojis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFPANEEMOJIS_H
