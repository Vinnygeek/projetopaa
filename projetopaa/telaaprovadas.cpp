#include "telaaprovadas.h"
#include "ui_telaaprovadas.h"

TelaAprovadas::TelaAprovadas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaAprovadas)
{
    ui->setupUi(this);
}

TelaAprovadas::~TelaAprovadas()
{
    delete ui;
}
