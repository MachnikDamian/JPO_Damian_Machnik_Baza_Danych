#include "mainwindow.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <QMessageBox>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
