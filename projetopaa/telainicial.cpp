#include "telainicial.h"
#include "ui_telainicial.h"


TelaInicial::TelaInicial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaInicial)
{
    ui->setupUi(this);
}

TelaInicial::~TelaInicial()
{
    delete ui;
}

void TelaInicial::on_pushButton_Aluno_clicked()
{
    telaAluno = new TelaAluno(this);
    telaAluno->show();
}

void TelaInicial::on_pushButton_Coordenador_clicked()
{
    telaCoordenador = new TelaCoordenador(this);
    telaCoordenador->show();
}
