#ifndef FIRST_INFO_H
#define FIRST_INFO_H

#include <QDialog>

namespace Ui {
class FIRST_INFO;
}

class FIRST_INFO : public QDialog
{
    Q_OBJECT

public:
    explicit FIRST_INFO(QWidget *parent = nullptr);
    ~FIRST_INFO();
    void update();
    QString Name;
    QString Age;
    QString Nickname;
    QString City;
    QString Birthday;
    QString Course;
    QString School;
    QString hobby1;
    QString hobby2;
    QString hobby3;
    QString motto;
    QString Path;

private slots:

    void on_otherbtn_clicked();

private:

    Ui::FIRST_INFO *ui;
};

#endif // FIRST_INFO_H
