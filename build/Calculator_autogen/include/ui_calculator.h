/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btnClear;
    QPushButton *btnDivide;
    QPushButton *btn6;
    QPushButton *btn9;
    QPushButton *btnPercent;
    QPushButton *btnMultiply;
    QPushButton *btn2;
    QPushButton *btnEqual;
    QPushButton *btn5;
    QPushButton *btn3;
    QPushButton *btn0;
    QPushButton *btnNP;
    QPushButton *btn1;
    QPushButton *btnPoint;
    QPushButton *btnPlus;
    QPushButton *btn4;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btnMinus;

    void setupUi(QWidget *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QStringLiteral("calculator"));
        calculator->resize(280, 357);
        label = new QLabel(calculator);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 280, 50));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(37);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget = new QWidget(calculator);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 50, 281, 311));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(-1);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnClear = new QPushButton(widget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        btnClear->setFont(font1);
        btnClear->setLayoutDirection(Qt::LeftToRight);
        btnClear->setFlat(false);

        gridLayout->addWidget(btnClear, 0, 0, 1, 1);

        btnDivide = new QPushButton(widget);
        btnDivide->setObjectName(QStringLiteral("btnDivide"));
        sizePolicy.setHeightForWidth(btnDivide->sizePolicy().hasHeightForWidth());
        btnDivide->setSizePolicy(sizePolicy);
        btnDivide->setFont(font1);
        btnDivide->setFlat(false);

        gridLayout->addWidget(btnDivide, 0, 3, 1, 1);

        btn6 = new QPushButton(widget);
        btn6->setObjectName(QStringLiteral("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);
        btn6->setFont(font1);
        btn6->setFlat(false);

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btn9 = new QPushButton(widget);
        btn9->setObjectName(QStringLiteral("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);
        btn9->setFont(font1);
        btn9->setFlat(false);

        gridLayout->addWidget(btn9, 1, 2, 1, 1);

        btnPercent = new QPushButton(widget);
        btnPercent->setObjectName(QStringLiteral("btnPercent"));
        sizePolicy.setHeightForWidth(btnPercent->sizePolicy().hasHeightForWidth());
        btnPercent->setSizePolicy(sizePolicy);
        btnPercent->setFont(font1);
        btnPercent->setFlat(false);

        gridLayout->addWidget(btnPercent, 0, 2, 1, 1);

        btnMultiply = new QPushButton(widget);
        btnMultiply->setObjectName(QStringLiteral("btnMultiply"));
        sizePolicy.setHeightForWidth(btnMultiply->sizePolicy().hasHeightForWidth());
        btnMultiply->setSizePolicy(sizePolicy);
        btnMultiply->setFont(font1);
        btnMultiply->setFlat(false);

        gridLayout->addWidget(btnMultiply, 1, 3, 1, 1);

        btn2 = new QPushButton(widget);
        btn2->setObjectName(QStringLiteral("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setFont(font1);
        btn2->setFlat(false);

        gridLayout->addWidget(btn2, 3, 1, 1, 1);

        btnEqual = new QPushButton(widget);
        btnEqual->setObjectName(QStringLiteral("btnEqual"));
        sizePolicy.setHeightForWidth(btnEqual->sizePolicy().hasHeightForWidth());
        btnEqual->setSizePolicy(sizePolicy);
        btnEqual->setFont(font1);
        btnEqual->setFlat(false);

        gridLayout->addWidget(btnEqual, 4, 3, 1, 1);

        btn5 = new QPushButton(widget);
        btn5->setObjectName(QStringLiteral("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);
        btn5->setFont(font1);
        btn5->setFlat(false);

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn3 = new QPushButton(widget);
        btn3->setObjectName(QStringLiteral("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn3->setFont(font1);
        btn3->setFlat(false);

        gridLayout->addWidget(btn3, 3, 2, 1, 1);

        btn0 = new QPushButton(widget);
        btn0->setObjectName(QStringLiteral("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setFont(font1);
        btn0->setFlat(false);

        gridLayout->addWidget(btn0, 4, 0, 1, 2);

        btnNP = new QPushButton(widget);
        btnNP->setObjectName(QStringLiteral("btnNP"));
        sizePolicy.setHeightForWidth(btnNP->sizePolicy().hasHeightForWidth());
        btnNP->setSizePolicy(sizePolicy);
        btnNP->setFont(font1);
        btnNP->setFlat(false);

        gridLayout->addWidget(btnNP, 0, 1, 1, 1);

        btn1 = new QPushButton(widget);
        btn1->setObjectName(QStringLiteral("btn1"));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn1->setFont(font1);
        btn1->setFlat(false);

        gridLayout->addWidget(btn1, 3, 0, 1, 1);

        btnPoint = new QPushButton(widget);
        btnPoint->setObjectName(QStringLiteral("btnPoint"));
        sizePolicy.setHeightForWidth(btnPoint->sizePolicy().hasHeightForWidth());
        btnPoint->setSizePolicy(sizePolicy);
        btnPoint->setFont(font1);
        btnPoint->setFlat(false);

        gridLayout->addWidget(btnPoint, 4, 2, 1, 1);

        btnPlus = new QPushButton(widget);
        btnPlus->setObjectName(QStringLiteral("btnPlus"));
        sizePolicy.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy);
        btnPlus->setFont(font1);
        btnPlus->setFlat(false);

        gridLayout->addWidget(btnPlus, 2, 3, 1, 1);

        btn4 = new QPushButton(widget);
        btn4->setObjectName(QStringLiteral("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);
        btn4->setFont(font1);
        btn4->setFlat(false);

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btn7 = new QPushButton(widget);
        btn7->setObjectName(QStringLiteral("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);
        btn7->setFont(font1);
        btn7->setFlat(false);

        gridLayout->addWidget(btn7, 1, 0, 1, 1);

        btn8 = new QPushButton(widget);
        btn8->setObjectName(QStringLiteral("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);
        btn8->setFont(font1);
        btn8->setFlat(false);

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        btnMinus = new QPushButton(widget);
        btnMinus->setObjectName(QStringLiteral("btnMinus"));
        sizePolicy.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy);
        btnMinus->setFont(font1);
        btnMinus->setFlat(false);

        gridLayout->addWidget(btnMinus, 3, 3, 1, 1);


        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QWidget *calculator)
    {
        calculator->setWindowTitle(QApplication::translate("calculator", "calculator", Q_NULLPTR));
        label->setText(QString());
        btnClear->setText(QApplication::translate("calculator", "C", Q_NULLPTR));
        btnDivide->setText(QApplication::translate("calculator", "/", Q_NULLPTR));
        btn6->setText(QApplication::translate("calculator", "6", Q_NULLPTR));
        btn9->setText(QApplication::translate("calculator", "9", Q_NULLPTR));
        btnPercent->setText(QApplication::translate("calculator", "%", Q_NULLPTR));
        btnMultiply->setText(QApplication::translate("calculator", "X", Q_NULLPTR));
        btn2->setText(QApplication::translate("calculator", "2", Q_NULLPTR));
        btnEqual->setText(QApplication::translate("calculator", "=", Q_NULLPTR));
        btn5->setText(QApplication::translate("calculator", "5", Q_NULLPTR));
        btn3->setText(QApplication::translate("calculator", "3", Q_NULLPTR));
        btn0->setText(QApplication::translate("calculator", "0", Q_NULLPTR));
        btnNP->setText(QApplication::translate("calculator", "+/-", Q_NULLPTR));
        btn1->setText(QApplication::translate("calculator", "1", Q_NULLPTR));
        btnPoint->setText(QApplication::translate("calculator", ".", Q_NULLPTR));
        btnPlus->setText(QApplication::translate("calculator", "+", Q_NULLPTR));
        btn4->setText(QApplication::translate("calculator", "4", Q_NULLPTR));
        btn7->setText(QApplication::translate("calculator", "7", Q_NULLPTR));
        btn8->setText(QApplication::translate("calculator", "8", Q_NULLPTR));
        btnMinus->setText(QApplication::translate("calculator", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
