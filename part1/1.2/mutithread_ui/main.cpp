#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include "res_pro.h"
#include "res_disk.h"
#include "res_mem.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "widget.h"
int main(int argc, char *argv[])
{
    int pid;
    if((pid = fork()) == 0){
        QApplication a(argc,argv);
        res_pro w;
        w.setWindowTitle("CPU Monitor");
        w.show();
        a.exec();
        exit(0);
    }
    if((pid = fork()) == 0){
        QApplication a(argc,argv);
        res_disk w;
        w.setWindowTitle("DISK Monitor");
        w.show();
        a.exec();
        exit(0);
    }
    if((pid = fork()) == 0){
        QApplication a(argc,argv);
        res_mem w;
        w.setWindowTitle("MEM Monitor");
        w.show();
        a.exec();
        exit(0);
    }
    if((pid = fork()) == 0){
        QApplication a(argc, argv);
        MainWindow w;
        w.setWindowTitle("Time Monitor");
        w.show();
        a.exec();
        exit(0);

    }
    QApplication a(argc,argv);
    Widget w;
    w.setWindowTitle("COPY PROCESS");
    w.show();
    return a.exec();
}
