#include "telacoordenador.h"
#include "ui_telacoordenador.h"

TelaCoordenador::TelaCoordenador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaCoordenador)
{
    ui->setupUi(this);
}

TelaCoordenador::~TelaCoordenador()
{
    delete ui;
}
