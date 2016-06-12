#include "inlinecolorpicker.h"
#include "ui_inlinecolorpicker.h"
#include <QPainter>
#include <QColor>
#include <algorithm>
#include <QTimer>
#include <QDebug>

static int findHue(int red, int green, int blue){
    int max = std::max(std::max(red, green), blue);
    int min = std::min(std::min(red, green), blue);
    if(red >= green && red >= blue){
        return (red-green)/(max-min);
    } else if(green >= red && green >= blue){
        return (green-red)/(max-min);
    } else if(blue >= red && blue >= green){
        return (red-green)/(max-min);
    } else {
        throw "Unknown FindHue";
    }
}

InlineColorPicker::InlineColorPicker(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InlineColorPicker)
{
    ui->setupUi(this);
}

InlineColorPicker::~InlineColorPicker()
{
    delete ui;
}

void InlineColorPicker::paintEvent(QPaintEvent *e){
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing, true);
    QPen pen1(QColor(0,0,0));
    p.setPen(pen1);
    p.drawRect(0,0,this->size().width(), this->size().height());

    QRect myRect(1,1, this->size().width()-2, this->size().height()-2);
    QLinearGradient gradient(myRect.topLeft(), myRect.topRight());

    gradient.setColorAt(0, QColor(255,0,0));
    gradient.setColorAt(0.17, QColor(255,255,0));
    gradient.setColorAt(0.34, QColor(0,255,0));
    gradient.setColorAt(0.50, QColor(0,255,255));
    gradient.setColorAt(0.66, QColor(0,0,255));
    gradient.setColorAt(0.82, QColor(255,0,255));
    gradient.setColorAt(1.0, QColor(255,0,0));

    p.fillRect(myRect,gradient);

    p.setRenderHint(QPainter::Antialiasing, true);

    p.setPen(QPen(QColor(0,0,0), 0.5));
    p.drawEllipse(x,y,14,14);

    p.setPen(QPen(QColor(255,255,255)));
    p.drawEllipse(x+1,y+1,12,12);

    p.setPen(QPen(QColor(100,100,100)));
    p.setBrush(QBrush(QColor(255,255,255,100)));
    p.drawEllipse(x+2,y+2,10,10);
}
