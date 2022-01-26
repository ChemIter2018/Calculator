// You may need to build the project (run Qt uic code generator) to get "ui_calculator.h" resolved

#include "calculator.h"
#include "ui_calculator.h"


calculator::calculator(QWidget *parent) :
        QWidget(parent), ui(new Ui::calculator) {
    ui->setupUi(this);
}

calculator::~calculator() {
    delete ui;
}

