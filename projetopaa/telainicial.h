#ifndef TELAINICIAL_H
#define TELAINICIAL_H

#include <QMainWindow>
#include "telaaluno.h"
#include "telacoordenador.h"

namespace Ui {
class TelaInicial;
}

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
