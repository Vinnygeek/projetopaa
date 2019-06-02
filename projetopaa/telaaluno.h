#ifndef TELAALUNO_H
#define TELAALUNO_H

#include <QDialog>
#include "telaaprovadas.h"
#include "telareprovadas.h"
#include "disciplina.h"


namespace Ui {
class TelaAluno;
}

/**
 * @brief Esta classe servirá como estrutura de dados e Engine(máquina)para representar e gerar a tela de opções do discente.
 * @param ui Ponteiro para a tela atual onde é exibido as opções do discente.
 * @param telaAprovadas Ponteiro para a tela onde o discente poderá definir as disciplinas em que obteve aprovação.
 * @param telaReprovadas Ponteiro para a tela onde o discente poderá definir as disciplinas em que obteve aprovação.
 */
class TelaAluno : public QDialog
{
    Q_OBJECT

public:
    /**
      @brief Construtor sem parâmetros.
    **/
    explicit TelaAluno(QWidget *parent = 0);
    ~TelaAluno();

private slots:

    void on_pushButton_addAprovadas_clicked();

    void on_pushButton_addReprovadas_clicked();

    void on_pushButton_gerarXml_clicked();

    void on_pushButton_gerarHistorico_clicked();

    void on_pushButton_gerarPerfil_clicked();

private:
    Ui::TelaAluno* ui;
    TelaAprovadas* telaAprovadas;
    TelaReprovadas* telaReprovadas;
};

#endif // TELAALUNO_H
