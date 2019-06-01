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
void Grade::CarregarGradeDiscente(){

    QFile gradeCurricularXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/disciplinas.xml");// grade curricular.
        if(!gradeCurricularXML.open(QIODevice::ReadOnly | QIODevice::Text)){
            qDebug()<<"Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/disciplinas.xml";
        }else{
            if(QDDDisciplinas.setContent(&gradeCurricularXML)){
                qDebug()<<"Failed to load document of file /home/vinicius/Desktop/testeinterface/xmlFiles/disciplinas.xml";
            }
        }
        //get the root element
        QDomElement root = QDDDisciplinas.firstChildElement();
        //List elements And save them in a vector:
            QString tagname = QString::fromStdString("DISCIPLINA");
            QString attribute1 = QString::fromStdString("CODIGO");
            QString attribute2 = QString::fromStdString("SITUACAO");
            QString attribute3 = QString::fromStdString("SEMESTRE");
            QString attribute4 = QString::fromStdString("REPINDEX");
            QString attribute5 = QString::fromStdString("CARGA");
            QDomNodeList items = root.elementsByTagName(tagname);//Processndo a variável root.
            for(int i = 0; i < items.count();i++){//Laço para percorrer todos os itens passados por root(esses itens ).
                QDomNode itemnode = items.at(i);//Recupera o i-ésimo item presente no arquivo XML passado por root.
                if(itemnode.isElement()){//Verifica se a i-ésima disciplina de fato é um ítem processável.
                    QDomElement itemele = itemnode.toElement(); //Converte a i-ésima disciplina para o formato aceito pela implementação.
                    double Repindex = itemele.attribute(attribute4).toDouble(); //Recupera a informação do índice de reprovação da i-ésima disciplina do arquivo XML.
                    double Carga = itemele.attribute(attribute5).toDouble(); //Recupera a informação da carga horária da i-ésima disciplina do arquivo XML.
                    string Codigo = itemele.attribute(attribute1).toStdString(); //Recupera a informação do código da i-ésima disciplina do arquivo XML(ECOI022,FISI01, etc).
                    int Semestre = itemele.attribute(attribute3).toInt();  //Recupera a informação do semestre regular da i-ésima disciplina do arquivo XML.
                    string Situacao = itemele.attribute(attribute2).toStdString(); //Recupera a informação da situação da i-ésima disciplina do arquivo XML(Aprovada, reprovada).
                    Disciplina thisDisciplina("",Codigo,Semestre,Situacao,Carga,Repindex); //Utiliza o método construtor para criar a i-ésima disciplina com os parametros recém definidos.
                    grade.push_back(thisDisciplina); //Adiciona a disciplina na grade.
                    qDebug()<<itemele.attribute(attribute1); //Imprime o código da disciplina adicionada na grade.
                    qDebug()<<itemele.attribute(attribute2); //Imprime situação da disciplina.
                    qDebug()<<itemele.attribute(attribute3); //Imprime o semestre regular da disciplina.
                    qDebug()<<itemele.attribute(attribute4); //Imprime o índice de reprovação da disciplina.
                }
            }

        //Print them
        /*for(unsigned long i = 0; i < 76;i++){ //Ao todo são 76 disciplinas do curso de Engenharia de Computação
            cout<<grade[i].getCodigo()<<" "<<grade[i].getSemestre()<<" "<< //Imprime o código e o semestre regular da i-ésima disciplina processada
            grade[i].getSituacao()<<" "<<grade[i].getRepIndex()<<" "<<grade[i].getCarga()<<endl; //Imprime a situação, o índice de reprovação e a carga horária da i-ésima disciplina processada
            vector<string> prerequisites = grade[i].getDependencias(); //recupera o vetor com todos os prerequisitos da i-ésima disciplina processada
            for(unsigned long j = 0; j < prerequisites.size(); j++){
                cout<<"      prerequisites"<<" "<<prerequisites[j]<<endl; //Imprime todos os pre-requisitos da i-ésima disciplina processada
            }
        }*/
        gradeCurricularXML.close();; //Fechando o arquivo(discilinas.xml)

}

void Grade::atualizaPrerequisitos(){
    cout<<"Entrando em atualizar Prerequisitos-----------------------------------------------"<<endl;

    QFile prerequisitosXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/dependencias.xml");
    if(!prerequisitosXML.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/dependencias.xml";
    }else{
        if(QDDDependencias.setContent(&prerequisitosXML))
            qDebug()<<"Failed to load document of file /home/vinicius/Desktop/testeinterface/xmlFiles/dependencias.xml";
        }

    cout<<"Apos abrir o arquivo-----------------------------------------------------------------"<<endl;
     QDomElement root = QDDDependencias.firstChildElement();
     QDomNodeList items = root.elementsByTagName("DISCIPLINA");//Processndo a variável root.
    for(int i = 0; i < items.count();i++){//Laço para percorrer todos os itens passados por root(esses itens ).
        QDomNode itemnode = items.at(i);//Recupera o i-ésimo item presente no arquivo XML passado por root.
        if(itemnode.isElement()){//Verifica se a i-ésima disciplina de fato é um ítem processável.
            QDomElement itemele = itemnode.toElement(); //Converte a i-ésima disciplina para o formato aceito pela implementação.
            string Codigo = itemele.attribute("CODIGO").toStdString(); //Recupera informação do código da i-ésima disciplina que que possui dependência.
            string Dep1 = itemele.attribute("DEP1").toStdString(); //Recupera a informação da primeira dependência da i-ésima disciplina do arquivo XML.
            string Dep2 = itemele.attribute("DEP2").toStdString(); //Recupera a informação da segunda dependência da i-ésima disciplina do arquivo XML.
            string Dep3 = itemele.attribute("DEP3").toStdString(); //Recupera a informação da terceira dependência da i-ésima disciplina do arquivo XML.
            string Dep4 = itemele.attribute("DEP4").toStdString(); //Recupera a informação da quarta dependência da i-ésima disciplina do arquivo XML.
            bool chave = true; //Encerra o loop abaixo quando o pre-requisito for adicionado

            for(unsigned long j = 0; j < 76 && chave; j++){ //Ao todo são 75 disciplinas do curso de Engenharia de Computação
                if(grade[j].getCodigo() == Codigo){
                    if(Dep1 != "NIL"){
                        grade[j].addDependencias(Dep1);
                        cout<<"Adicionando dependencia"<<Dep1<<endl;
                    }

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
    prerequisitosXML.close();
}

void Grade::atualizaAprovadas(){
    QFile aprovadasXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/aprovadas.xml");
    if(!aprovadasXML.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/dependencias.xml";
    }else{
        if(QDDAprovadas.setContent(&aprovadasXML))
            qDebug()<<"Failed to load document of file /home/vinicius/Desktop/testeinterface/xmlFiles/dependencias.xml";
        }

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
    aprovadasXML.close();
}

void Grade::atualizaReprovadas(){
    QFile reprovadasXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/reprovadas.xml");
    if(!reprovadasXML.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/dependencias.xml";
    }else{
        if(QDDReprovadas.setContent(&reprovadasXML))
            qDebug()<<"Failed to load document of file /home/vinicius/Desktop/testeinterface/xmlFiles/dependencias.xml";
        }

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
    reprovadasXML.close();
}

void Grade::gerarXmlDiscente(){
    QDomDocument xmlGradeAluno;
    cout<<"Document4 criado"<<endl;
    QDomElement root = xmlGradeAluno.createElement("DISCIPLINAS");
    cout<<"Root criado"<<endl;
    cout<<root.isDocumentType()<<endl;
    xmlGradeAluno.appendChild(root);
    cout<<"primeira parada";
    for(unsigned long j = 0; j < 76; j++){
        cout<<"dentro do laço"<<endl;
        vector<string> dep = grade[j].getDependencias();
        QDomElement node = xmlGradeAluno.createElement("DISCIPLINA");
        QString codigo = QString::fromStdString(grade[j].getCodigo());
        QString situacao = QString::fromStdString(grade[j].getSituacao());
        int semestre = grade[j].getSemestre();
        double repindex = grade[j].getRepIndex();
        node.setAttribute("CODIGO",codigo);
        node.setAttribute("PERIODO",semestre);
        node.setAttribute("SITUACAO",situacao);
        node.setAttribute("REPINDEX",repindex);
     root.appendChild(node);
    }

        // Criando um novo arquivo xml onde sera gravado a grade do aluno.
                QFile file("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/gradeAluno.xml");
                if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
                    qDebug()<< "Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/aprovadas.xml for writing";
                }
                else{
                    QTextStream stream(&file);
                    stream << xmlGradeAluno.toString();
                    file.close();
                    qDebug() << "Finished";
                }
            file.close();
}//fim da função

void Grade::gerarXmlCoordenador(){
    QDomDocument xmlGradeCoordenador;
    cout<<"Document4 criado"<<endl;
    QDomElement root = xmlGradeCoordenador.createElement("DISCIPLINAS");
    cout<<"Root criado"<<endl;
    cout<<root.isDocumentType()<<endl;
    xmlGradeCoordenador.appendChild(root);
    cout<<"primeira parada";
    for(unsigned long j = 0; j < 76; j++){
        cout<<"dentro do laço"<<endl;
        vector<string> depes = grade[j].getDependencias();
        QDomElement node = xmlGradeCoordenador.createElement("DISCIPLINA");
        QString codigo = QString::fromStdString(grade[j].getCodigo());
        int semestre = grade[j].getSemestre();
        double repindex = grade[j].getRepIndex();
        node.setAttribute("REPINDEX",repindex);
        node.setAttribute("CODIGO",codigo);
        node.setAttribute("PERIODO",semestre);
        if(depes.size() > 0 && depes[0]!="NILL"){
            QString dp1 = QString::fromStdString(depes[0]);
            node.setAttribute("DP1",dp1);
        }
        //Replicar a condição acima para outras dependências sem quebrar o programa.
     root.appendChild(node);
    }

// Criando um novo arquivo xml onde sera gravado a grade do aluno.
        QFile file("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/gradeCoord.xml");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
            qDebug()<< "Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/aprovadas.xml for writing";
        }
        else{
            QTextStream stream(&file);
            stream << xmlGradeCoordenador.toString();
            file.close();
            qDebug() << "Finished";
        }
    file.close();
}

vector<Disciplina> Grade::getGrade(){
    return grade;
}
