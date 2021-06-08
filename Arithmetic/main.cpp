#include "mainwindow.h"
#include "plusminus.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    PlusMinus w;
    w.resize(300,190);
    w.setWindowTitle("PLUS MINUS");
    w.show();
    return app.exec();
}
