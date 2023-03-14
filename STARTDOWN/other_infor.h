#ifndef OTHER_INFOR_H
#define OTHER_INFOR_H

#include <QDialog>

namespace Ui {
class other_infor;
}

class other_infor : public QDialog
{
    Q_OBJECT

public:
    explicit other_infor(QWidget *parent = nullptr);
    ~other_infor();

private:
    Ui::other_infor *ui;
};

#endif // OTHER_INFOR_H
