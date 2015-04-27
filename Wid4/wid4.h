#ifndef WID4_H
#define WID4_H

#include <QDialog>
#include <QTimer>
#include <QRadioButton>

class Wid4 : public QDialog
{
    Q_OBJECT

public:
    Wid4(QWidget *parent = 0);
    ~Wid4();
private:
    QRadioButton *rbutton1;
    QRadioButton *rbutton2;
    QRadioButton *rbutton3;
    QTimer *timer;
    int i;
private slots:
    void StartClicked();
    void StopClicked();
    void Action();
};

#endif // WID4_H
