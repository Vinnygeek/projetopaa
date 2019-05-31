#ifndef TELAALUNO_H
#define TELAALUNO_H

#include <QDialog>
#include "telaaprovadas.h"
#include "telareprovadas.h"
#include "disciplina.h"

namespace Ui {
class TelaAluno;
}

class TelaAluno : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAluno(QWidget *parent = 0);
    ~TelaAluno();

private slots:
    void on_pushButton_addAprovadas_clicked();

    void on_pushButton_addReprovadas_clicked();

    void on_pushButton_gerarXml_clicked();

    void on_pushButton_gerarHistorico_clicked();

    void on_pushButton_gerarPerfil_clicked();

private:
    Ui::TelaAluno *ui;
    TelaAprovadas *telaAprovadas;
    TelaReprovadas *telaReprovadas;
};

#endif // TELAALUNO_H
