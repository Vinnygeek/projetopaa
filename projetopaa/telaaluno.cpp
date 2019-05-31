#include "telaaluno.h"
#include "ui_telaaluno.h"

TelaAluno::TelaAluno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaAluno)
{
    ui->setupUi(this);
}

TelaAluno::~TelaAluno()
{
    delete ui;
}
