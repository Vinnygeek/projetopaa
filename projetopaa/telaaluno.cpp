#include "telaaluno.h"
#include "ui_telaaluno.h"
#include <iostream>
    using namespace std;

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

void TelaAluno::on_pushButton_addAprovadas_clicked()
{
    cout<<"Aluno->addAprovadas-> Entrada efetuada"<<endl;
    telaAprovadas = new TelaAprovadas(this);
    telaAprovadas->show();
}

void TelaAluno::on_pushButton_addReprovadas_clicked()
{
    cout<<"Aluno->addReprovadas-> Entrada efetuada"<<endl;
}

void TelaAluno::on_pushButton_gerarXml_clicked()
{
    cout<<"Aluno->gerarXml-> Entrada efetuada"<<endl;
}

void TelaAluno::on_pushButton_gerarHistorico_clicked()
{
    cout<<"Aluno->gerarHistorico-> Entrada efetuada"<<endl;
}

void TelaAluno::on_pushButton_gerarPerfil_clicked()
{
    cout<<"Aluno->GerarPerfil-> Entrada efetuada"<<endl;
}
