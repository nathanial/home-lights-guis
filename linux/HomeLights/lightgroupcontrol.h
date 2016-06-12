#ifndef LIGHTGROUPCONTROL_H
#define LIGHTGROUPCONTROL_H

#include <QWidget>

namespace Ui {
    class LightGroupControl;
}


class LightGroupControl : public QWidget
{
    Q_OBJECT

public:
    explicit LightGroupControl(QString groupName, QWidget *parent = 0);
    ~LightGroupControl();

private:
    Ui::LightGroupControl *ui;
};

#endif // LIGHTGROUPCONTROL_H
