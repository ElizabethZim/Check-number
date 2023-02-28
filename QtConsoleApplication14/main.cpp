#include "window.h"
#include <QMainWindow>
#include <QtGui/QtGui>
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    window w;
    w.show();
    return a.exec();
}