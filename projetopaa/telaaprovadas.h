#ifndef TELAAPROVADAS_H
#define TELAAPROVADAS_H

#include <QDialog>

namespace Ui {
class TelaAprovadas;
}

class TelaAprovadas : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAprovadas(QWidget *parent = 0);
    ~TelaAprovadas();

private slots:
    void on_pushButton_OK_clicked();

    void on_pushButton_CANCELA_clicked();

    void on_checkBox_TODAS1_stateChanged(int arg1);

    void on_checkBox_TODAS2_stateChanged(int arg1);

    void on_checkBox_TODAS3_stateChanged(int arg1);

    void on_checkBox_TODAS4_stateChanged(int arg1);

    void on_checkBox_TODAS5_stateChanged(int arg1);

    void on_checkBox_TODAS6_stateChanged(int arg1);

    void on_checkBox_TODAS7_stateChanged(int arg1);

    void on_checkBox_TODAS8_stateChanged(int arg1);

    void on_checkBox_TODAS9_stateChanged(int arg1);

    void on_checkBox_TODAS10_stateChanged(int arg1);

private:
    Ui::TelaAprovadas *ui;
};

#endif // TELAAPROVADAS_H
