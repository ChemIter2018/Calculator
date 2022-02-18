#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QWidget {
Q_OBJECT

public:
    __attribute__((unused)) double x{}, y{};
    __attribute__((unused)) char strOperator{};
    explicit calculator(QWidget *parent = nullptr);
    ~calculator() override;
    static double calculatorResult(double x, double y, char strOperator);

private:
    Ui::calculator *ui;

public slots:
    void btnClear();
    void btnOne();
    void btnTwo();
    void btnThree();
    void btnFour();
    void btnFive();
    void btnSix();
    void btnSeven();
    void btnEight();
    void btnNine();
    void btnZero();
    void btnPoint();
    void btnPlus();
    void btnMinus();
    void btnMultiply();
    void btnDivide();
    void btnPercent();
    void btnEqual();
    void btnNP();
};


#endif //CALCULATOR_CALCULATOR_H
