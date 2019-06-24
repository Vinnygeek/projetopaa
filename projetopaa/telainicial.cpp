#include "telainicial.h"
#include "ui_telainicial.h"


TelaInicial::TelaInicial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaInicial)
{
    ui->setupUi(this);
    QPixmap bkgnd("/home/vinicius/git_workspace/projetopaa/projetopaa/images/unifei2.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
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
