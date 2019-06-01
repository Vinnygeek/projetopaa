#include "telacoordenador.h"
#include "ui_telacoordenador.h"
#include <iostream>
    using namespace std;

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

void TelaCoordenador::on_pushButton_gerarXml_clicked()
{
    cout<<"Coordenador->gerar Xml-> Entrada efetuada"<<endl;
    Grade gradeCoord;
    cout<<"Aluno->gerarXml-> Entrada efetuada"<<endl;
        gradeCoord.CarregarGradeDiscente();
        gradeCoord.atualizaPrerequisitos();
        gradeCoord.gerarXmlCoordenador();
}

void TelaCoordenador::on_pushButton_indiceDeReprovacoes_clicked()
{
    cout<<"Coordenador->indice de Reprovacoes-> Entrada efetuada"<<endl;
}

void TelaCoordenador::on_pushButton_situacaoDosDiscentes_clicked()
{
    cout<<"Coordenador->situacao dos Discentes-> Entrada efetuada"<<endl;
}
