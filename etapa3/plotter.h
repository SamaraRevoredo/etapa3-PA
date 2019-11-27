#ifndef PLOTTER_H
#define PLOTTER_H

#include <Escultor3D.h>
#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    int dir_x,dir_y;
    bool faca;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

public slots:
    void set_dir_x(int x);
    void set_dir_y(int y);
    void clicado(bool click);
};

#endif // PLOTTER_H
