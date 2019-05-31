#ifndef TELAALUNO_H
#define TELAALUNO_H

#include <QDialog>

namespace Ui {
class TelaAluno;
}

class TelaAluno : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAluno(QWidget *parent = 0);
    ~TelaAluno();

private:
    Ui::TelaAluno *ui;
};

#endif // TELAALUNO_H
