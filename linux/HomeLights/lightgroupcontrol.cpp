#include "lightgroupcontrol.h"
#include "ui_lightgroupcontrol.h"

LightGroupControl::LightGroupControl(QString groupName, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LightGroupControl)
{
    ui->setupUi(this);
    this->ui->groupName->setText(groupName);
}

LightGroupControl::~LightGroupControl()
{
    delete ui;
}
