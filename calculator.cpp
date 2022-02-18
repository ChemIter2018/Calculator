// You may need to build the project (run Qt uic code generator) to get "ui_calculator.h" resolved

#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent) :
        QWidget(parent), ui(new Ui::calculator) {
    ui->setupUi(this);
    connect(ui->btnClear, SIGNAL(clicked()),this, SLOT(btnClear()));
    connect(ui->btn1, SIGNAL(clicked()), this,SLOT(btnOne()));
    connect(ui->btn2, SIGNAL(clicked()), this,SLOT(btnTwo()));
    connect(ui->btn3, SIGNAL(clicked()), this,SLOT(btnThree()));
    connect(ui->btn4, SIGNAL(clicked()), this,SLOT(btnFour()));
    connect(ui->btn5, SIGNAL(clicked()), this,SLOT(btnFive()));
    connect(ui->btn6, SIGNAL(clicked()), this,SLOT(btnSix()));
    connect(ui->btn7, SIGNAL(clicked()), this,SLOT(btnSeven()));
    connect(ui->btn8, SIGNAL(clicked()), this,SLOT(btnEight()));
    connect(ui->btn9, SIGNAL(clicked()), this,SLOT(btnNine()));
    connect(ui->btn0, SIGNAL(clicked()), this,SLOT(btnZero()));
    connect(ui->btnPoint, SIGNAL(clicked()), this,SLOT(btnPoint()));
    connect(ui->btnNP, SIGNAL(clicked()), this,SLOT(btnNP()));
    connect(ui->btnPercent, SIGNAL(clicked()), this,SLOT(btnPercent()));
    connect(ui->btnPlus, SIGNAL(clicked()), this,SLOT(btnPlus()));
    connect(ui->btnMinus, SIGNAL(clicked()), this,SLOT(btnMinus()));
    connect(ui->btnMultiply, SIGNAL(clicked()), this,SLOT(btnMultiply()));
    connect(ui->btnDivide, SIGNAL(clicked()), this,SLOT(btnDivide()));
    connect(ui->btnEqual, SIGNAL(clicked()), this,SLOT(btnEqual()));
}

calculator::~calculator() {
    delete ui;
}

void calculator::btnClear() {
    ui->label->setText("");
}

void calculator::btnOne() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "1");
}

void calculator::btnTwo() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "2");
}

void calculator::btnThree() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "3");
}

void calculator::btnFour() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "4");
}


void calculator::btnFive() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "5");
}

void calculator::btnSix() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "6");
}

void calculator::btnSeven() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "7");
}

void calculator::btnEight() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "8");
}

void calculator::btnNine() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "9");
}

void calculator::btnZero() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + "0");
}

void calculator::btnPoint() {
    QString strLabel = ui->label->text();
    ui->label->setText(strLabel + ".");
}

void calculator::btnNP() {
    QString strLabel = ui->label->text();
    if(strLabel[0] == "-") {
        ui->label->setText(strLabel.right(strLabel.length() - 1));
    }
    else{
        ui->label->setText("-" + strLabel);
    }
}

void calculator::btnPercent() {
    QString strLabel = ui->label->text();
    calculator::x = strLabel.toDouble();
    calculator::strOperator = '%';
    double calculatorResult = calculator::calculatorResult(calculator::x, 0.0, calculator::strOperator);
    ui->label->setText(QString::number(calculatorResult));
}

void calculator::btnPlus() {
    QString strLabel = ui->label->text();
    calculator::x = strLabel.toDouble();
    calculator::strOperator = '+';
    calculator::btnClear();
}

void calculator::btnMinus() {
    QString strLabel = ui->label->text();
    calculator::x = strLabel.toDouble();
    calculator::strOperator = '-';
    calculator::btnClear();
}

void calculator::btnMultiply() {
    QString strLabel = ui->label->text();
    calculator::x = strLabel.toDouble();
    calculator::strOperator = 'x';
    calculator::btnClear();
}

void calculator::btnDivide() {
    QString strLabel = ui->label->text();
    calculator::x = strLabel.toDouble();
    calculator::strOperator = '/';
    calculator::btnClear();
}

void calculator::btnEqual() {
    QString strLabel = ui->label->text();
    calculator::y = strLabel.toDouble();
    double calculatorResult = calculator::calculatorResult(calculator::x, calculator::y, calculator::strOperator);
    ui->label->setText(QString::number(calculatorResult));
}



double calculator::calculatorResult(double x, double y, char strOperator) {
    switch (strOperator) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case 'x':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return x / 100.0;
        default:
            return 0.0;
    }
}
