#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class LightGroupControl;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    LightGroupControl *allLightsControl;
    LightGroupControl *livingRoomControl;
    LightGroupControl *counterControl;
    LightGroupControl *kitchenControl;
};

#endif // MAINWINDOW_H
