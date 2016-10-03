#include "mainwindow.h"
#include <QApplication>

#include <cubo.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Cubo c1, c2, c3, c4, c5;

    //std::vector< std::vector<double> >

    return a.exec();
}
