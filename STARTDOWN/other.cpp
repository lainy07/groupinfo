#include "other.h"
#include "ui_other.h"

other::other(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::other)
{
    ui->setupUi(this);
}

other::~other()
{
    delete ui;
}
