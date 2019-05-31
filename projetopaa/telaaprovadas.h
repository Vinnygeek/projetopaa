#ifndef TELAAPROVADAS_H
#define TELAAPROVADAS_H

#include <QDialog>

namespace Ui {
class TelaAprovadas;
}

class TelaAprovadas : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAprovadas(QWidget *parent = 0);
    ~TelaAprovadas();

private:
    Ui::TelaAprovadas *ui;
};

#endif // TELAAPROVADAS_H
