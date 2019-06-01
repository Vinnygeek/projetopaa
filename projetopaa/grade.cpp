#include "grade.h"

Grade::Grade(){
}
//QFile disciplinaXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/aprovadas.xml");
//QFile prerequisitosXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/dependencias.xml");
//QFile aprovadasXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/aprovadas.xml");
//QFile reprovadasXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/reprovadas.xml");

//virtual void Grade::gerarGrade(){cout<<"Virtual member called";} //Gera o arquivo em xml com a grade curricular, deve ser chamada por último

//virtual void Grade::carregarGrade(){cout<<"Virtual member called";} // Carrega os dados do arquivo disciplinas.xml

//virtual void Grade::gerarGrafo(){}

void Grade::atualizaPrerequisitos(){
     QDomElement root = QDDDependencias.firstChildElement();
     QDomNodeList items = root.elementsByTagName("DISCIPLINA");//Processndo a variável root.
    for(int i = 0; i < items.count();i++){//Laço para percorrer todos os itens passados por root(esses itens ).
        QDomNode itemnode = items.at(i);//Recupera o i-ésimo item presente no arquivo XML passado por root.
        if(itemnode.isElement()){//Verifica se a i-ésima disciplina de fato é um ítem processável.
            QDomElement itemele = itemnode.toElement(); //Converte a i-ésima disciplina para o formato aceito pela implementação.
            string Codigo = itemele.attribute("COIDGO").toStdString(); //Recupera informação do código da i-ésima disciplina que que possui dependência.
            string Dep1 = itemele.attribute("DEP1").toStdString(); //Recupera a informação da primeira dependência da i-ésima disciplina do arquivo XML.
            string Dep2 = itemele.attribute("DEP2").toStdString(); //Recupera a informação da segunda dependência da i-ésima disciplina do arquivo XML.
            string Dep3 = itemele.attribute("DEP3").toStdString(); //Recupera a informação da terceira dependência da i-ésima disciplina do arquivo XML.
            string Dep4 = itemele.attribute("DEP4").toStdString(); //Recupera a informação da quarta dependência da i-ésima disciplina do arquivo XML.
            bool chave = true; //Encerra o loop abaixo quando o pre-requisito for adicionado
            for(unsigned long j = 0; j < 76 && chave; j++){ //Ao todo são 75 disciplinas do curso de Engenharia de Computação
                if(grade[j].getCodigo() == Codigo){
                    if(Dep1 != "NIL")
                        grade[j].addDependencias(Dep1);

                    if(Dep2 != "NIL")
                        grade[j].addDependencias(Dep2);

                    if(Dep3 != "NIL")
                        grade[j].addDependencias(Dep3);

                    if(Dep4 != "NIL")
                        grade[j].addDependencias(Dep4);
                    chave = false;
                }
            }
        }
    }
}

void Grade::atualizaAprovadas(){
        QDomElement root = QDDAprovadas.firstChildElement();
        QDomNodeList items = root.elementsByTagName("DISCIPLINA");//Processndo a variável root.
        for(int i = 0; i < items.count();i++){//Laço para percorrer todos os itens passados por root(esses itens ).
            QDomNode itemnode = items.at(i);//Recupera o i-ésimo item presente no arquivo XML passado por root.
            if(itemnode.isElement()){//Verifica se a i-ésima disciplina de fato é um ítem processável.
                QDomElement itemele = itemnode.toElement(); //Converte a i-ésima disciplina para o formato aceito pela implementação.
                string Codigo = itemele.attribute("CODIGO").toStdString(); //Recupera informação do código da i-ésima disciplina aprovada.
                bool chave = true; //Encerra o loop abaixo quando o pre-requisito for adicionado
                for(unsigned long j = 0; j < 76 && chave; j++){ //Ao todo são 75 disciplinas do curso de Engenharia de Computação
                    if(grade[j].getCodigo() == Codigo){
                        cout<<grade[j].getCodigo()<<" = "<<Codigo<<endl;
                        grade[j].setSituacao("APR");
                        chave = false;
                    }
                }
            }
        }
}

void Grade::atualizaReprovadas(){
    QDomElement root = QDDReprovadas.firstChildElement();
    QDomNodeList items = root.elementsByTagName("DISCIPLINA");//Processndo a variável root.
    for(int i = 0; i < items.count();i++){//Laço para percorrer todos os itens passados por root(esses itens ).
        QDomNode itemnode = items.at(i);//Recupera o i-ésimo item presente no arquivo XML passado por root.
        if(itemnode.isElement()){//Verifica se a i-ésima disciplina de fato é um ítem processável.
            QDomElement itemele = itemnode.toElement(); //Converte a i-ésima disciplina para o formato aceito pela implementação.
            string Codigo = itemele.attribute("CODIGO").toStdString(); //Recupera informação do código da i-ésima disciplina aprovada.
            bool chave = true; //Encerra o loop abaixo quando o pre-requisito for adicionado
            for(unsigned long j = 0; j < 76 && chave; j++){ //Ao todo são 75 disciplinas do curso de Engenharia de Computação
                if(grade[j].getCodigo() == Codigo){
                    cout<<grade[j].getCodigo()<<" = "<<Codigo<<endl;
                    grade[j].setSituacao("REP");
                    chave = false;
                }
            }
        }
    }
}
