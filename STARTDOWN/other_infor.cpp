#include "other_infor.h"
#include "ui_other_infor.h"

other_infor::other_infor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::other_infor)
{
    ui->setupUi(this);
}

other_infor::~other_infor()
{
    delete ui;
}
