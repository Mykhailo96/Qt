#include "wid4.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

Wid4::Wid4(QWidget *parent)
    : QDialog(parent)
{
    rbutton1 = new QRadioButton("Green");
    rbutton2 = new QRadioButton("Yellow");
    rbutton3 = new QRadioButton("Red");
    rbutton3->setChecked(true);

    QVBoxLayout *v1 = new QVBoxLayout;
    v1->addWidget(rbutton1);
    v1->addWidget(rbutton2);
    v1->addWidget(rbutton3);

    QPushButton *pbutton1 = new QPushButton("Start");
    QPushButton *pbutton2 = new QPushButton("Stop");
    QVBoxLayout *v2 = new QVBoxLayout;
    v2->addWidget(pbutton1);
    v2->addWidget(pbutton2);

    QHBoxLayout *h = new QHBoxLayout;
    h->addLayout(v1);
    h->addLayout(v2);

    setGeometry(583, 284, 200 , 200);
    setLayout(h);

    connect(pbutton1, SIGNAL(clicked()), SLOT(StartClicked()));
    connect(pbutton2, SIGNAL(clicked()), SLOT(StopClicked()));

    i = 3;
}

void  Wid4::StartClicked()
{
    timer = new QTimer;
    timer->start(1000);
    connect(timer, SIGNAL(timeout()), SLOT(Action()));
}

void Wid4::StopClicked()
{
    timer->stop();
}

void Wid4::Action()
{
    if(rbutton1->isChecked())
    {
        rbutton2->setChecked(true);
        i = 1;
    }
    else if(rbutton2->isChecked())
    {
        if(i == 1)
        {
            rbutton3->setChecked(true);
        }
        else
        {
            rbutton1->setChecked(true);
        }
    }
    else
    {
        rbutton2->setChecked(true);
        i = 3;
    }
}

Wid4::~Wid4()
{

}
