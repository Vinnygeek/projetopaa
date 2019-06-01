#include "telaaluno.h"
#include "ui_telaaluno.h"
#include "grade.h"
#include <iostream>
#include "grafo.h"
#include<sstream>
#include "vertice.h"
    using namespace std;

Grade gradeAluno;
Grafo grafoAluno;

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
    telaReprovadas = new TelaReprovadas(this);
    telaReprovadas->show();
}

void TelaAluno::on_pushButton_gerarXml_clicked()
{
    cout<<"Aluno->gerarXml-> Entrada efetuada"<<endl;
        gradeAluno.CarregarGradeDiscente();
        gradeAluno.atualizaAprovadas();
        gradeAluno.atualizaReprovadas();
        gradeAluno.atualizaPrerequisitos();
        gradeAluno.gerarXmlDiscente();
}

void TelaAluno::on_pushButton_gerarHistorico_clicked()
{
    cout<<"Aluno->gerarHistorico-> Entrada efetuada"<<endl;
    int _1 = 0; int _2 = 0; int _3 = 0; int _4 = 0; int _5 = 0;
    int _6 = 0; int _7 = 0; int _8 = 0; int _9 = 0; int _10 = 0;
    vector<Disciplina> gradinha = gradeAluno.getGrade();

    for(int i = 0; i < 76;i++){
        vector<string> prerequesitinho = gradinha[i].getDependencias();
        for(int j = 0; j < prerequesitinho.size();++j){
                stringstream sss;
                string s;
                sss <<gradinha[i].getCodigo() <<" -> "<<prerequesitinho[j]<<'\n';
                s = sss.str();

                cout<<"Adicionando aresta"<<s<<endl;
                grafoAluno.addAresta(s);
        }

        Vertice novoVertice;
        novoVertice.setCodigo(gradinha[i].getCodigo());

        if(gradinha[i].getSituacao() == "APR"){
            novoVertice.setColor("#50c878");
            novoVertice.setFontcolor("Black");
        }

        else if(gradinha[i].getSituacao() == "REP"){
            novoVertice.setColor("#993399");
            novoVertice.setFontcolor("lightgrey");
        }

        else{
            novoVertice.setColor("#d3d3d3");
            novoVertice.setFontcolor("black");
        }

        if(gradinha[i].getSemestre() == 1){
            stringstream ss;
            string s;
            ss <<"0," <<_1<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _1 += 2;
        }

        else if(gradinha[i].getSemestre() == 2){
            stringstream ss;
            string s;
            ss <<"2," <<_2<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _2 += 2;
        }

        else if(gradinha[i].getSemestre() == 3){
            stringstream ss;
            string s;
            ss <<"4," <<_3<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _3 += 2;
        }

        else if(gradinha[i].getSemestre() == 4){
            stringstream ss;
            string s;
            ss <<"6," <<_4<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _4 += 2;
        }

        else if(gradinha[i].getSemestre() == 5){
            stringstream ss;
            string s;
            ss <<"8," <<_5<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _5 += 2;
        }

        else if(gradinha[i].getSemestre() == 6){
            stringstream ss;
            string s;
            ss <<"10," <<_6<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _6 += 2;
        }

        else if(gradinha[i].getSemestre() == 7){
            stringstream ss;
            string s;
            ss <<"12," <<_7<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _7 += 2;
        }

        else if(gradinha[i].getSemestre() == 8){
            stringstream ss;
            string s;
            ss <<"14," <<_8<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _8 += 2;
        }

        else if(gradinha[i].getSemestre() == 9){
            stringstream ss;
            string s;
            ss <<"16," <<_9<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _9 += 2;
        }

        else if(gradinha[i].getSemestre() == 10){
            stringstream ss;
            string s;
            ss <<"18," <<_10<<'!';
            s = ss.str();
            novoVertice.setPosition(s);
            _10 += 2;
        }
            grafoAluno.addVertice(novoVertice);
    }

    grafoAluno.gerarGraphvizDiscente();
}

void TelaAluno::on_pushButton_gerarPerfil_clicked()
{
    cout<<"Aluno->GerarPerfil-> Entrada efetuada"<<endl;
}
