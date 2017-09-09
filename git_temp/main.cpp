#include "mainwindow.h"
#include <QApplication>
//hello int main qapplication w.windows

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
