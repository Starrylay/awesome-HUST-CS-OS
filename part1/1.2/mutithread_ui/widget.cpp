#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QApplication>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <time.h>
#define BUFFER_SIZE 1024


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->move(100,240);
    int pid = getpid();
    ui->COPY->setText(QString::number(pid,10));
    ui->pushButton_3->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    int from_fd,to_fd;
    int bytes_read,bytes_write;
    char buffer[BUFFER_SIZE];
    ui->pushButton->setEnabled(false);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_2->setEnabled(false);

    QString from_name = ui->textEdit->toPlainText();
    QString to_name = ui->textEdit_2->toPlainText();
    QString tip_message = "";
    QString huiche ="\n";

    ui->textEdit_3->setPlainText(tip_message);
    if((from_fd=open(from_name.toLatin1().data(),O_RDONLY))==-1){
        ui->textEdit_3->setPlainText((tip_message+=from_name+=huiche+=(QString)strerror(errno)+=huiche));//"From File Open Error!"
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
        //return;
    }
    else ui->textEdit_3->setPlainText((tip_message+="Source File Open Success!\n"));

    if((to_fd=open(to_name.toLatin1().data(),O_WRONLY|O_CREAT,0777))==-1){
        ui->textEdit_3->setPlainText((tip_message+=huiche+=(QString)strerror(errno)+=huiche));//+="To File Open Error!\n"
        ::close(from_fd);
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
       // return;
    }
    else ui->textEdit_3->setPlainText((tip_message+="Target File Open Success!\n"));

    int file_size = lseek(from_fd, 0, SEEK_END);
    int sumread =0;
    cancel_flag = false;
    lseek(from_fd, 0, SEEK_SET);
    /* 拷贝文件 */
    while((bytes_read=read(from_fd,buffer,BUFFER_SIZE))>0)
    {
        if(cancel_flag) break;
            char *ptr=buffer;
            sumread += bytes_read;
            while((bytes_write=write(to_fd,ptr,bytes_read))>0)//yi zhi xie
            {
                if(bytes_write==bytes_read) break;//zhe yi lun xie wan cheng
                else if(bytes_write>0){
                    ptr+=bytes_write;
                    bytes_read-=bytes_write;
                }
            }
            if((bytes_write==-1)&&(errno!=EINTR)){// xie shi bai
                ::close(from_fd);
                ::close(to_fd);
                ui->textEdit_3->setPlainText((tip_message+="WRITE REEOR!\n"));//du de guo cheng shi bai
                ui->pushButton->setEnabled(true);
                ui->pushButton_2->setEnabled(true);
                break;
            }
        ui->progressBar->setValue(sumread/(file_size)*100);
    }
    if((bytes_read==-1)&&(errno!=EINTR)) {//du shi bai
        ::close(from_fd);
        ::close(to_fd);
        ui->textEdit_3->setPlainText((tip_message+="READ REEOR!\n"));//du de guo cheng shi bai
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
    }
    ::close(from_fd);
    ::close(to_fd);

    if(cancel_flag) ui->textEdit_3->setPlainText((tip_message+="Copy Cancel!\n"));
    else if(bytes_read==-1||bytes_write==-1)
        ui->textEdit_3->setPlainText((tip_message+="Copy Error!\n"));
    else ui->textEdit_3->setPlainText((tip_message+="Copy Success!\n"));
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
}
void Widget::on_pushButton_2_clicked()
{
    exit(0);
}
void Widget::on_pushButton_3_clicked()
{
    cancel_flag = true;
    ui->pushButton_3->setEnabled(false);
    ui->pushButton->setEnabled(true);
}
