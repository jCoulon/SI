#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QDesktopWidget dw;
    //Créationzea
    MainWindow f;
    f.show();

    return app.exec();
}
