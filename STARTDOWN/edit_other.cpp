#include "edit_other.h"
#include "ui_edit_other.h"
#include "fileReadWrite.h"

edit_other::edit_other(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_other)
{
    ui->setupUi(this);
}

edit_other::~edit_other()
{
    delete ui;
}

void edit_other::on_pushButton_clicked()
{
//    READWRITE::writeFile(Path, 7, ui->h1e->text());
//    READWRITE::writeFile(Path, 8, ui->h2e->text());
//    READWRITE::writeFile(Path, 9, ui->h3e->text());
//    READWRITE::writeFile(Path, 10, ui->h2e->text());
}

