#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qwidget.h>
#include <QString>

#include <QApplication>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_lcdNumber_overflow()
{

}

void MainWindow::on_pushButton_clicked()
{
     ui->lcdNumber->display(ui->lcdNumber->value()*10+1);
}
void MainWindow::on_pushButton_2_clicked()
{
     ui->lcdNumber->display(ui->lcdNumber->value()*10+2);
}
void MainWindow::on_pushButton_3_clicked()
{
     ui->lcdNumber->display(ui->lcdNumber->value()*10+3);
}

void MainWindow::on_pushButton_4_clicked()
{
     ui->lcdNumber->display(ui->lcdNumber->value()*10+4);
}

void MainWindow::on_pushButton_5_clicked()
{
     ui->lcdNumber->display(ui->lcdNumber->value()*10+5);
}

void MainWindow::on_pushButton_6_clicked()
{
     ui->lcdNumber->display(ui->lcdNumber->value()*10+6);
}

void MainWindow::on_pushButton_7_clicked()
{
     ui->lcdNumber->display(ui->lcdNumber->value()*10+7);
}

void MainWindow::on_pushButton_8_clicked()
{
     ui->lcdNumber->display(ui->lcdNumber->value()*10+8);

}

void MainWindow::on_pushButton_9_clicked()
{
     ui->lcdNumber->display(ui->lcdNumber->value()*10+9);

}

void MainWindow::on_pushButton_11_clicked()
{

     ui->lcdNumber->display(ui->lcdNumber->value()*10);
}

//plus

void MainWindow::on_pushButton_13_clicked()
{
    taczka.x = ui->lcdNumber->value();
    ui->lcdNumber->display(0);
    taczka.z =1;
}
//minus

void MainWindow::on_pushButton_14_clicked()
{
    taczka.x = ui->lcdNumber->value();
    ui->lcdNumber->display(0);
    taczka.z =2;


}
//sub
void MainWindow::on_pushButton_15_clicked()
{

    taczka.x = ui->lcdNumber->value();
    ui->lcdNumber->display(0);
    taczka.z =3;

}
//div
void MainWindow::on_pushButton_16_clicked()
{

    taczka.x = ui->lcdNumber->value();
    ui->lcdNumber->display(NULL);
    taczka.z =4;

}

void MainWindow::on_pushButton_12_clicked()
{


    taczka.y = ui->lcdNumber->value();

    if( taczka.z==1)
         taczka.c =taczka.x +taczka.y ;
    if( taczka.z==2)
         taczka.c =taczka.x -taczka.y ;
    if( taczka.z==3)
         taczka.c= taczka.x*taczka.y ;
    if( taczka.z==4)
         taczka.c= taczka.x/taczka.y ;

    ui->lcdNumber->display( taczka.c);
taczka.y =0;
taczka.x =0;
 taczka.y = ui->lcdNumber->value();
}






void MainWindow::on_pushButton_10_clicked()
{
      ui->lcdNumber->display(NULL);
      (ui->lcdNumber->value()*0);
}
