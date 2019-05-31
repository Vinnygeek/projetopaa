#include "telaaprovadas.h"
#include "ui_telaaprovadas.h"
#include <QList>
#include <QCheckBox>
#include <QGroupBox>
#include <QtXml/QtXml>
#include <QtDebug>
#include <QtCore>


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

void TelaAprovadas::on_pushButton_OK_clicked()
{
    QDomDocument document;
    QDomElement root = document.createElement("DISCIPLINAS");
    document.appendChild(root);

    QListIterator<QObject *> i(ui->groupBox->children());
        while (i.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","1");
                    root.appendChild(node);
                }
        }

    QListIterator<QObject *> j(ui->groupBox_2->children());
        while (j.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( j.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","2");
                    root.appendChild(node);
                }
        }

    QListIterator<QObject *> k(ui->groupBox_3->children());
        while (k.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( k.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","3");
                    root.appendChild(node);
                }
        }

    QListIterator<QObject *> m(ui->groupBox_4->children());
        while (m.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( m.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","4");
                    root.appendChild(node);
                }
        }

    QListIterator<QObject *> n(ui->groupBox_5->children());
        while (n.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( n.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","5");
                    root.appendChild(node);
                }
        }

    QListIterator<QObject *> o(ui->groupBox_6->children());
        while (o.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( o.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","6");
                    root.appendChild(node);
                }
        }

    QListIterator<QObject *> p(ui->groupBox_7->children());
        while (p.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( p.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","7");
                    root.appendChild(node);
                }
        }

    QListIterator<QObject *> q(ui->groupBox_8->children());
        while (q.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( q.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","8");
                    root.appendChild(node);
                }
        }

    QListIterator<QObject *> r(ui->groupBox_9->children());
        while (r.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( r.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","9");
                    root.appendChild(node);
                }
        }

    QListIterator<QObject *> s(ui->groupBox_10->children());
        while (s.hasNext())
        {
            QCheckBox* b = qobject_cast<QCheckBox*>( s.next() );
                if(b->isChecked()){
                    QDomElement node = document.createElement("DISCIPLINA");
                    node.setAttribute("CODIGO",b->text());
                    node.setAttribute("PERIODO","10");
                    root.appendChild(node);
                }
        }

// Criando um novo arquivo xml onde seram guardado os dados das disciplinas aprovadas pelos discentes(Grade do aluno)
        QFile file("/home/vinicius/git_workspace/projetopaa/projetopaa/xml/aprovadas.xml");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
            qDebug()<< "Failed to open file /home/vinicius/git_workspace/projetopaa/projetopaa/xml/aprovadas.xml for writing";
        }
        else{
            QTextStream stream(&file);
            stream << document.toString();
            file.close();
            qDebug() << "Finished";
        }
    file.close();
//O trecho abaixo carrega a página e o fonte onde os dados gerados seram processados.

    hide();
    //statistics = new Statistics(this);
    //statistics->show();

}

void TelaAprovadas::on_pushButton_CANCELA_clicked()
{

}

void TelaAprovadas::on_checkBox_TODAS1_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS1->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS1->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}

void TelaAprovadas::on_checkBox_TODAS2_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox_2->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS2->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS2->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}

void TelaAprovadas::on_checkBox_TODAS3_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox_3->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS3->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS3->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}

void TelaAprovadas::on_checkBox_TODAS4_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox_4->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS4->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS4->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}

void TelaAprovadas::on_checkBox_TODAS5_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox_5->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS5->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS5->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}

void TelaAprovadas::on_checkBox_TODAS6_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox_6->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS6->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS6->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}

void TelaAprovadas::on_checkBox_TODAS7_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox_7->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS7->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS7->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}

void TelaAprovadas::on_checkBox_TODAS8_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox_8->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS8->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS8->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}

void TelaAprovadas::on_checkBox_TODAS9_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox_9->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS9->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS9->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}

void TelaAprovadas::on_checkBox_TODAS10_stateChanged(int arg1)
{
    QListIterator<QObject *> i(ui->groupBox_10->children());
            while (i.hasNext())
            {
                QCheckBox* b = qobject_cast<QCheckBox*>( i.next() );
                if (!ui->checkBox_TODAS10->isChecked() && b->isChecked()) {
                    b->click();
                }else if(ui->checkBox_TODAS10->isChecked() && !b->isChecked()){
                    b->click();
                }
            }
}
