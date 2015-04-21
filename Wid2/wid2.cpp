#include "wid2.h"
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QPushButton>
#include<QLineEdit>
#include<QCheckBox>
#include<QScrollBar>
#include<QSlider>

Wid2::Wid2(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *button = new QPushButton(this);
    button->setText("Button");
    QLineEdit *ledit = new QLineEdit(this);
    ledit->setText("Line");
    QCheckBox *box = new QCheckBox(this);
    QString s = "qwe";

    connect(button, SIGNAL(clicked()), ledit, SLOT(clear()));
    connect(button, SIGNAL(clicked()), box, SLOT(toggle()));
    connect(box, SIGNAL(toggled(bool)), ledit, SLOT(setVisible(bool)));

    QHBoxLayout *h1 = new QHBoxLayout;
    h1->addWidget(button);
    h1->addWidget(ledit);
    h1->addWidget(box);

    QScrollBar * bar = new QScrollBar(this);
    QSlider * slider = new QSlider(this);

    connect(bar, SIGNAL(sliderMoved(int)), slider, SLOT(setValue(int)));
    connect(slider, SIGNAL(sliderMoved(int)), bar, SLOT(setValue(int)));

    QHBoxLayout *h2 = new QHBoxLayout;
    h2->addWidget(bar);
    h2->addWidget(slider);

    QVBoxLayout *v = new QVBoxLayout;
    v->addLayout(h1);
    v->addLayout(h2);

    setGeometry(488, 234, 300, 300);
    setLayout(v);

}

Wid2::~Wid2()
{

}
