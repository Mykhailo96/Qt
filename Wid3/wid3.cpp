#include "wid3.h"
#include<QHBoxLayout>
#include<QVBoxLayout>

/*int calc(int a, int b)
{
    a = le1.;
}*/

Wid3::Wid3(QWidget *parent)
    : QDialog(parent)
{
    le1 = new QLineEdit(this);
    le2 = new QLineEdit(this);
    le3 = new QLineEdit(this);
    button = new QPushButton("-/=", this);
    connect(button, SIGNAL(clicked()), this, SLOT(calc()));

    QHBoxLayout *h1 = new QHBoxLayout;
    h1->addWidget(le1);
    h1->addWidget(le2);

    QHBoxLayout *h2 = new QHBoxLayout;
    h2->addWidget(le3);
    h2->addWidget(button);

    QVBoxLayout *v = new QVBoxLayout;
    v->addLayout(h1);
    v->addLayout(h2);
    setLayout(v);
}


Wid3::~Wid3()
{

}

void Wid3::calc()
{
    int a = le1->text().toInt();
    int b = le2->text().toInt();
    int c = a - b;
    QString riz;
    riz.setNum(c);
    le3->setText(riz);
}
