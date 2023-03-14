#include "other_info.h"
#include "ui_other_info.h"
#include "edit_other.h"

other_info::other_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::other_info)
{
    ui->setupUi(this);
}

other_info::~other_info()
{
    delete ui;
}

void other_info::update(){
    ui->h1->setText(hobby1);
    ui->h2->setText(hobby2);
    ui->h3->setText(hobby3);
    ui->motto->setText(motto);
}

void other_info::on_pushButton_clicked()
{
    edit_other edit;
    edit.Path = this->Path;
    edit.setModal(true);
    edit.exec();
}

