#include "telacoordenador.h"
#include "ui_telacoordenador.h"
#include <iostream>
#include "grafo.h"
#include<sstream>
#include "vertice.h"
#include "grade.h"

Grade gradeCoord;
Grafo grafoCoord;
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
    cout<<"Aluno->gerarXml-> Entrada efetuada"<<endl;
        gradeCoord.CarregarGradeDiscente();
        gradeCoord.atualizaPrerequisitos();
        gradeCoord.gerarXmlCoordenador();
}

void TelaCoordenador::on_pushButton_indiceDeReprovacoes_clicked()
{
    cout<<"Coordenador->indice de Reprovacoes-> Entrada efetuada"<<endl;
    cout<<"Aluno->gerarHistorico-> Entrada efetuada"<<endl;
    int _1 = 0; int _2 = 0; int _3 = 0; int _4 = 0; int _5 = 0;
    int _6 = 0; int _7 = 0; int _8 = 0; int _9 = 0; int _10 = 0;
    vector<Disciplina> gradinha = gradeCoord.getGrade();

    for(int i = 0; i < 76;i++){
        vector<string> prerequesitinho = gradinha[i].getDependencias();
        for(int j = 0; j < prerequesitinho.size();++j){
                stringstream sss;
                Aresta s;
                sss <<gradinha[i].getCodigo() <<" -> "<<prerequesitinho[j]<<'\n';
                s.setInfo(sss.str());

                grafoCoord.addAresta(s);
        }

        Vertice novoVertice;
        novoVertice.setCodigo(gradinha[i].getCodigo());

        double repindice = gradinha[i].getRepIndex();
        if(repindice < 15){
            novoVertice.setColor("#53c4c9");
            novoVertice.setFontcolor("Black");
        }

        else if(repindice < 30 && repindice >= 15){
            novoVertice.setColor("#c7dece");
            novoVertice.setFontcolor("black");
        }

        else if(repindice < 45 && repindice >= 30){
            novoVertice.setColor("#ffffff");
            novoVertice.setFontcolor("black");
        }

        else if(repindice < 60 && repindice >= 45){
            novoVertice.setColor("#f0db0b");
            novoVertice.setFontcolor("black");
        }

        else if(repindice < 75 && repindice >= 60){
            novoVertice.setColor("#f0670b");
            novoVertice.setFontcolor("black");
        }

        else if(repindice < 90 && repindice >= 75){
            novoVertice.setColor("#ff0000");
            novoVertice.setFontcolor("lightgrey");
        }

        else{ //Maiores do que 90
            novoVertice.setColor("#000000");
            novoVertice.setFontcolor("lightgrey");
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
            grafoCoord.addVertice(novoVertice);
    }

    grafoCoord.gerarGraphvizCoord();
}

void TelaCoordenador::on_pushButton_situacaoDosDiscentes_clicked()
{
    cout<<"Coordenador->situacao dos Discentes-> Entrada efetuada"<<endl;
}
