#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamefield.h"
#include "console.h"
#include <QLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_game_triggered();

    void on_actionSet_ki_strength_triggered();

    void on_actionQuit_triggered();

private:
    Ui::MainWindow *ui;

    Gamefield * gamefield;
    Logger * logger;
};




#endif // MAINWINDOW_H
