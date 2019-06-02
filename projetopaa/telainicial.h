#ifndef TELAINICIAL_H
#define TELAINICIAL_H

#include <QMainWindow>
#include "telaaluno.h"
#include "telacoordenador.h"

namespace Ui {
class TelaInicial;
}

/**
 * @brief Esta classe define os métodos para a criação da tela inicial do programa, onde o usuário poderá entrar com a opção Aluno
 * ou Coordenador.
 * @param ui Ponteiro para a tela atual onde é exibido a tela com as duas opções de seleção: Aluno e Coordenador
 * @param telaAluno Ponteiro para a tela do Aluno onde serão exibidas todas as opções para o discente.
 * @param telaCoordenador Ponteiro para a tela do Coordenador onde serão exibidas todas as opções para o mesmo.
 */
class TelaInicial : public QMainWindow
{
    Q_OBJECT

public:
    explicit TelaInicial(QWidget *parent = 0);
    ~TelaInicial();

private slots:
    void on_pushButton_Aluno_clicked();

    void on_pushButton_Coordenador_clicked();

private:
    Ui::TelaInicial *ui;
    TelaAluno *telaAluno;
    TelaCoordenador *telaCoordenador;
};

#endif // TELAINICIAL_H
