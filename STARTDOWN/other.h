#ifndef OTHER_H
#define OTHER_H

#include <QDialog>

namespace Ui {
class other;
}

class other : public QDialog
{
    Q_OBJECT

public:
    explicit other(QWidget *parent = nullptr);
    ~other();

private:
    Ui::other *ui;
};

#endif // OTHER_H
