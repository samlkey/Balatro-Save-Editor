#include "mainwindow.h"
#include "jkrreader.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //Reader .jkr
    JkrReader r;


    w.show();
    return a.exec();
}
