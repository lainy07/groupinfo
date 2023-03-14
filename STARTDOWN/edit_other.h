#ifndef EDIT_OTHER_H
#define EDIT_OTHER_H

#include <QDialog>

namespace Ui {
class edit_other;
}

class edit_other : public QDialog
{
    Q_OBJECT

public:
    explicit edit_other(QWidget *parent = nullptr);
    ~edit_other();
    QString Path;

private slots:
    void on_pushButton_clicked();

private:
    Ui::edit_other *ui;
};

#endif // EDIT_OTHER_H
