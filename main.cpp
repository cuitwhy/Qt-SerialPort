/*******************************
 *串口助手程序
 *Qt5.8 Creator
 *作者：Why
 *项目地址：https://github.com/cuitwhy/Qt-SerialPort
 * ******************************/
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Qt-SerialPort");
    w.show();

    return a.exec();
}
