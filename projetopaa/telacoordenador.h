#ifndef TELACOORDENADOR_H
#define TELACOORDENADOR_H

#include <QDialog>
#include "grade.h"

namespace Ui {
class TelaCoordenador;
}

/**
 * @brief Esta classe define os métodos para a criação da tela onde o coordenador poderá efetuar suas funções.
 * @param ui Ponteiro para a tela atual onde é exibido a tela com as opções do coordenador.
 */
class TelaCoordenador : public QDialog
{
    Q_OBJECT

public:
    explicit TelaCoordenador(QWidget *parent = 0);
    ~TelaCoordenador();

private slots:
    void on_pushButton_gerarXml_clicked();

    void on_pushButton_indiceDeReprovacoes_clicked();

    void on_pushButton_situacaoDosDiscentes_clicked();

private:
    Ui::TelaCoordenador *ui;
};

#endif // TELACOORDENADOR_H
