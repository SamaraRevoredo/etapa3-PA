#include <QMouseEvent>
#include <QtDebug>
#include <vector>
#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    brush.setColor(Qt::white);
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(Qt::black);
    pen.setWidth(2);
    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());
    painter.drawPoint(dir_x,dir_y);

}

void Plotter::set_dir_x(int x)
{
    dir_x = x;
    repaint();
}

void Plotter::set_dir_y(int y)
{
    dir_y = y;
    repaint();
}

void Plotter::clicado(bool click)
{
    faca = click;
}
