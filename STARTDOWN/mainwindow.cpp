#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "first_info.h"
#include "fileReadWrite.h"

#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_View_clicked()
{
    QStringList list;
    QString path;
    if (ui->luisrdbtn->isChecked()){
        path = "gabrielTxt.txt";
    } else if(ui->janrdbtn->isChecked()){
        path = "eslabraTxt.txt";
    } else if(ui->cedrdbtn->isChecked()){
        path = "santosTxt.txt";
    } else if(ui->lainrdbtn->isChecked()){
        path = "labradorTxt.txt";
    } else if(ui->sheynrdbtn->isChecked()){
        path = "calisayTxt.txt";
    }
    list = READWRITE::readFile(path);
    FIRST_INFO info;
    info.Name = list.at(0);
    info.Age = list.at(1);
    info.Nickname = list.at(2);
    info.City = list.at(3);
    info.Birthday = list.at(4);
    info.Course = list.at(5);
    info.School = list.at(6);
    info.hobby1 = list.at(7);
    info.hobby2 = list.at(8);
    info.hobby3 = list.at(9);
    info.motto = list.at(10);
    info.Path = path;
    info.update();
    info.setModal(true);
    info.exec();
}

