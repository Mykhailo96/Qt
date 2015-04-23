#ifndef WID3_H
#define WID3_H

#include <QDialog>
#include <QWidget>
#include<QLineEdit>
#include<QPushButton>

class Wid3 : public QDialog
{
    Q_OBJECT

public:
    QPushButton *button;
    QLineEdit *le1;
    QLineEdit *le2;
    QLineEdit *le3;
    Wid3(QWidget *parent = 0);
    ~Wid3();
public slots:
    void calc();
};

#endif // WID3_H
