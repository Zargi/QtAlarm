#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "radioscreen.h"

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

void MainWindow::setRadioScreen(RadioScreen* radioScreen){
    this->mRadioScreen = radioScreen;
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_pushButtonRadio_released()
{
    this->hide();
    mRadioScreen->show();
}
