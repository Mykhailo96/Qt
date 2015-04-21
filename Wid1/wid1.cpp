#include "wid1.h"
#include<QPushButton>
Wid1::Wid1(QWidget *parent) : QWidget(parent)
{
    QPushButton *button = new QPushButton(this);
    button->setGeometry(125, 125, 50 ,50);
    button->setText( "Close" );
    connect(button, SIGNAL(clicked()), this, SLOT(close()));
    setGeometry(200, 200, 300, 300);
}

Wid1::~Wid1()
{
}

