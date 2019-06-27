#include "gradeperfil.h"

GradePerfil::GradePerfil()
{

}

void GradePerfil::CarregarGradePerfil(){

    QFile gradeCurricularXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/situacao.xml");// grade curricular.
        if(!gradeCurricularXML.open(QIODevice::ReadOnly | QIODevice::Text)){
            qDebug()<<"Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/situacao.xml";
        }else{
            if(QDDDisciplinas.setContent(&gradeCurricularXML)){
                qDebug()<<"Failed to load document of file /home/vinicius/Desktop/testeinterface/xmlFiles/situacao.xml";
            }
        }
        //get the root element
        QDomElement root = QDDDisciplinas.firstChildElement();
        //List elements And save them in a vector:
            QString tagname = QString::fromStdString("DISCIPLINA");
            QString attribute1 = QString::fromStdString("CODIGO");
            QString attribute2 = QString::fromStdString("APROVACOES");
            QString attribute3 = QString::fromStdString("REPROVACOES");
            QString attribute4 = QString::fromStdString("POSICAO");
            QDomNodeList items = root.elementsByTagName(tagname);//Processando a variável root.
            for(int i = 0; i < items.count();i++){//Laço para percorrer todos os itens passados por root(esses itens ).
                QDomNode itemnode = items.at(i);//Recupera o i-ésimo item presente no arquivo XML passado por root.
                if(itemnode.isElement()){//Verifica se a i-ésima disciplina de fato é um ítem processável.
                    QDomElement itemele = itemnode.toElement(); //Converte a i-ésima disciplina para o formato aceito pela implementação.
                    string Codigo = itemele.attribute(attribute1).toStdString(); //Recupera a informação do código da i-ésima disciplina do arquivo XML(ECOI022,FISI01, etc).
                    int Aprovadas = itemele.attribute(attribute2).toInt();  //Recupera a informação da qtd de vezes em que a disciplina foi aprovada.
                    int Reprovadas = itemele.attribute(attribute3).toInt(); //Recupera a informação da qtd de vezes em que a disciplina foi reprovada.
                    string Posicao = itemele.attribute(attribute4).toStdString(); //Recupera a informacao da posicao da disciplina no grafo
                    DisciplinaPerfil thisDisciplina(Codigo,Aprovadas,Reprovadas,Posicao); //Utiliza o método construtor para criar a i-ésima disciplina com os parametros recém definidos.
                    grade.push_back(thisDisciplina); //Adiciona a disciplina na grade.
                    qDebug()<<itemele.attribute(attribute1); //Imprime o código da disciplina adicionada na grade.
                    qDebug()<<itemele.attribute(attribute2); //Imprime a qtd de aprovacoes.
                    qDebug()<<itemele.attribute(attribute3); //Imprime a qtd de reprovacoes
                    qDebug()<<itemele.attribute(attribute4); //Imprime a qtd de reprovacoes
                }
            }

        //Print them
        cout<<"------Testando a geracao do Perfil-----"<<endl;
        for(unsigned long i = 0; i < 76;i++){ //Ao todo são 76 disciplinas do curso de Engenharia de Computação
            cout<<grade[i].getCodigo()<<" "<<grade[i].getNumAprovadas()<<" "<< //Imprime o código e a qtd de aprovadas
            grade[i].getNumReprovadas()<<endl; //Imprime a qtd de reprovacoes
        }
        gradeCurricularXML.close();; //Fechando o arquivo(situacao.xml)
}

void GradePerfil::atualizaAprovadas(){
    QFile aprovadasXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/aprovadas.xml");
    if(!aprovadasXML.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/aprovadas.xml";
    }else{
        if(QDDAprovadas.setContent(&aprovadasXML))
            qDebug()<<"Failed to load document of file /home/vinicius/Desktop/testeinterface/xmlFiles/aprovadas.xml";
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
                        grade[j].incAprovadas();
                        chave = false;
                    }
                }
            }
        }
    aprovadasXML.close();
}

void GradePerfil::atualizaReprovadas(){
    QFile reprovadasXML("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/reprovadas.xml");
    if(!reprovadasXML.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/reprovadas.xml";
    }else{
        if(QDDReprovadas.setContent(&reprovadasXML))
            qDebug()<<"Failed to load document of file /home/vinicius/Desktop/testeinterface/xmlFiles/reprovadas.xml";
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
                    grade[j].incReprovadas();
                    chave = false;
                }
            }
        }
    }
    reprovadasXML.close();
}

void GradePerfil::gerarXmlPerfil(){
    QDomDocument xmlGradeAluno;
    cout<<"Document4 criado"<<endl;
    QDomElement root = xmlGradeAluno.createElement("DISCIPLINAS");
    cout<<"Root criado"<<endl;
    cout<<root.isDocumentType()<<endl;
    xmlGradeAluno.appendChild(root);
    cout<<"primeira parada";
    for(unsigned long j = 0; j < 76; j++){
        cout<<"dentro do laço"<<endl;
        QDomElement node = xmlGradeAluno.createElement("DISCIPLINA");
        QString codigo = QString::fromStdString(grade[j].getCodigo());
        int aprovadas = grade[j].getNumAprovadas();
        int reprovadas = grade[j].getNumReprovadas();
        QString posicao = QString::fromStdString(grade[j].getPosicao());
        node.setAttribute("CODIGO",codigo);
        node.setAttribute("APROVACOES",aprovadas);
        node.setAttribute("REPROVACOES",reprovadas);
        node.setAttribute("POSICAO",posicao);
     root.appendChild(node);
    }

        // Criando um novo arquivo xml onde sera gravado a grade do aluno.
                QFile file("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/situacao.xml");
                if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
                    qDebug()<< "Failed to open file /home/vinicius/Desktop/testeinterface/xmlFiles/situacao.xml for writing";
                }
                else{
                    QTextStream stream(&file);
                    stream << xmlGradeAluno.toString();
                    file.close();
                    qDebug() << "Finished";
                }
            file.close();
}

vector<DisciplinaPerfil> GradePerfil::getGrade(){return grade;}
