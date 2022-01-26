#include <QApplication>
#include "calculator.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    calculator cal;
    cal.show();
    return QApplication::exec();
}
