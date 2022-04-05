#include "mainwindow.h"
#include "sys/statfs.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <unistd.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    this->move(1200,550);
    int pid = getpid();// get current pid
    ui->Tnumber->setText(QString::number(pid,10));
    QTimer*timer = new QTimer (this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerUpdate(void)
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy_MM_dd hh:mm:ss dddd");
    ui->Time->setText(str);
}
