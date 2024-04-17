/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *won10;
    QPushButton *won50;
    QPushButton *won100;
    QPushButton *won500;
    QPushButton *coffee;
    QPushButton *tea;
    QPushButton *milk;
    QPushButton *reset;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(0, 0, 431, 91));
        won10 = new QPushButton(Widget);
        won10->setObjectName("won10");
        won10->setGeometry(QRect(0, 100, 87, 26));
        won50 = new QPushButton(Widget);
        won50->setObjectName("won50");
        won50->setGeometry(QRect(0, 140, 87, 26));
        won100 = new QPushButton(Widget);
        won100->setObjectName("won100");
        won100->setGeometry(QRect(0, 180, 87, 26));
        won500 = new QPushButton(Widget);
        won500->setObjectName("won500");
        won500->setGeometry(QRect(0, 220, 87, 26));
        coffee = new QPushButton(Widget);
        coffee->setObjectName("coffee");
        coffee->setGeometry(QRect(110, 100, 87, 26));
        tea = new QPushButton(Widget);
        tea->setObjectName("tea");
        tea->setGeometry(QRect(110, 140, 87, 26));
        milk = new QPushButton(Widget);
        milk->setObjectName("milk");
        milk->setGeometry(QRect(110, 180, 87, 26));
        reset = new QPushButton(Widget);
        reset->setObjectName("reset");
        reset->setGeometry(QRect(110, 220, 87, 26));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        won10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        won50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        won100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        won500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        coffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        tea->setText(QCoreApplication::translate("Widget", "Tea(150)", nullptr));
        milk->setText(QCoreApplication::translate("Widget", "Milk(200)", nullptr));
        reset->setText(QCoreApplication::translate("Widget", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
