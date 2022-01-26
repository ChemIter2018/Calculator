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
    QPushButton *pushButton_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_15;
    QPushButton *pushButton_19;
    QPushButton *pushButton_11;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_2;
    QPushButton *pushButton_13;
    QPushButton *pushButton_18;
    QPushButton *pushButton_12;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_14;

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

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font1);
        pushButton_4->setFlat(false);

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setFont(font1);
        pushButton_10->setFlat(false);

        gridLayout->addWidget(pushButton_10, 2, 2, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font1);
        pushButton_8->setFlat(false);

        gridLayout->addWidget(pushButton_8, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);
        pushButton_3->setFlat(false);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font1);
        pushButton_5->setFlat(false);

        gridLayout->addWidget(pushButton_5, 1, 3, 1, 1);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setFont(font1);
        pushButton_15->setFlat(false);

        gridLayout->addWidget(pushButton_15, 3, 1, 1, 1);

        pushButton_19 = new QPushButton(widget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);
        pushButton_19->setFont(font1);
        pushButton_19->setFlat(false);

        gridLayout->addWidget(pushButton_19, 4, 3, 1, 1);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setFont(font1);
        pushButton_11->setFlat(false);

        gridLayout->addWidget(pushButton_11, 2, 1, 1, 1);

        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setFont(font1);
        pushButton_16->setFlat(false);

        gridLayout->addWidget(pushButton_16, 3, 2, 1, 1);

        pushButton_17 = new QPushButton(widget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setFont(font1);
        pushButton_17->setFlat(false);

        gridLayout->addWidget(pushButton_17, 4, 0, 1, 2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font1);
        pushButton_2->setFlat(false);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setFont(font1);
        pushButton_13->setFlat(false);

        gridLayout->addWidget(pushButton_13, 3, 0, 1, 1);

        pushButton_18 = new QPushButton(widget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setFont(font1);
        pushButton_18->setFlat(false);

        gridLayout->addWidget(pushButton_18, 4, 2, 1, 1);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setFont(font1);
        pushButton_12->setFlat(false);

        gridLayout->addWidget(pushButton_12, 2, 3, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font1);
        pushButton_9->setFlat(false);

        gridLayout->addWidget(pushButton_9, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font1);
        pushButton_7->setFlat(false);

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font1);
        pushButton_6->setFlat(false);

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setFont(font1);
        pushButton_14->setFlat(false);

        gridLayout->addWidget(pushButton_14, 3, 3, 1, 1);


        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QWidget *calculator)
    {
        calculator->setWindowTitle(QApplication::translate("calculator", "calculator", Q_NULLPTR));
        label->setText(QApplication::translate("calculator", "0.009", Q_NULLPTR));
        btnClear->setText(QApplication::translate("calculator", "C", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("calculator", "/", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("calculator", "6", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("calculator", "9", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("calculator", "%", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("calculator", "X", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("calculator", "2", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("calculator", "=", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("calculator", "5", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("calculator", "3", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("calculator", "0", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("calculator", "+/-", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("calculator", "1", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("calculator", ".", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("calculator", "+", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("calculator", "4", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("calculator", "7", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("calculator", "8", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("calculator", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
