#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lightgroupcontrol.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->ui->statusBar->setSizeGripEnabled(false);
    this->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    this->setFixedSize(this->maximumSize());

    this->allLightsControl = new LightGroupControl("All Lights");
    this->livingRoomControl = new LightGroupControl("Living Room");
    this->counterControl = new LightGroupControl("Counter");
    this->kitchenControl = new LightGroupControl("Kitchen");

    ui->centralWidget->layout()->addWidget(this->allLightsControl);
    ui->centralWidget->layout()->addWidget(this->livingRoomControl);
    ui->centralWidget->layout()->addWidget(this->counterControl);
    ui->centralWidget->layout()->addWidget(this->kitchenControl);
}

MainWindow::~MainWindow()
{
    delete ui;
}
