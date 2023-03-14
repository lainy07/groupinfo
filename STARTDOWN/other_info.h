#ifndef OTHER_INFO_H
#define OTHER_INFO_H

#include <QDialog>

namespace Ui {
class other_info;
}

class other_info : public QDialog
{
    Q_OBJECT

public:
    explicit other_info(QWidget *parent = nullptr);
    ~other_info();
    void update();
    QString hobby1;
    QString hobby2;
    QString hobby3;
    QString motto;
    QString Path;

private slots:
    void on_pushButton_clicked();

private:
    Ui::other_info *ui;
};

#endif // OTHER_INFO_H
