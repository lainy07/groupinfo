#include "first_info.h"
#include "ui_first_info.h"
#include "other_info.h"

FIRST_INFO::FIRST_INFO(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FIRST_INFO)
{
    ui->setupUi(this);
}

FIRST_INFO::~FIRST_INFO()
{
    delete ui;
}

void FIRST_INFO::update(){
    ui->namelbl->setText(Name);
    ui->agelbl->setText(Age);
    ui->Nicknamelbl->setText(Nickname);
    ui->citylbl->setText(City);
    ui->bdaylbl->setText(Birthday);
    ui->courselbl->setText(Course);
    ui->schoollbl->setText(School);
}

void FIRST_INFO::on_otherbtn_clicked()
{
    other_info info;
    info.hobby1 = this->hobby1;
    info.hobby2 = this->hobby2;
    info.hobby3 = this->hobby3;
    info.motto = this->motto;
    info.Path = this->Path;
    info.update();
    info.setModal(true);
    info.exec();
}

