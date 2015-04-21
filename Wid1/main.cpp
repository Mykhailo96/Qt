#include "wid1.h"
#include <QApplication>
#include<QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Wid1 w;
    w.show();
    return a.exec();
}
