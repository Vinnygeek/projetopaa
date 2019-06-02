#ifndef TELAAPROVADAS_H
#define TELAAPROVADAS_H

#include <QDialog>

namespace Ui {
class TelaAprovadas;
}

/**
 * @brief Esta classe define os métodos para a criação da tela onde o aluno apontará as disciplinas aprovadas.
 * @param ui Ponteiro para a tela atual onde é exibido a tela com todas as disciplinas do curso para o aluno selecionar os componentes
 * em que foi aprovado.
 */
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
