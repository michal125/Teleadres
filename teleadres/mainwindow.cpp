#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QString>
#include <QRegExp>
#include<iostream>
#include <QMessageBox>
#include <QtWidgets>
#include <regexpdialog.h>


using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("AdressBook");
}

MainWindow::~MainWindow()
{

    delete ui;
}



void MainWindow::on_saveButton_clicked()
{
QString file_name = QFileDialog::getSaveFileName(this,
                                                 ("Zapisz jako"), "",
                                                 ("Address Book (*.txt);;All Files (*)"));
 }

void MainWindow::on_loadButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this,
                                                     ("Otwórz"));
}


/*RegExpDialog::RegExpDialog(QWidget *parent){

}*/
