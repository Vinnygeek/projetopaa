#ifndef TELACOORDENADOR_H
#define TELACOORDENADOR_H

#include <QDialog>

namespace Ui {
class TelaCoordenador;
}

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
