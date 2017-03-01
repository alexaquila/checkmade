#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <QLayout>

using namespace std ;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    this->logger = Logger::getInstance();

    ui->setupUi(this);
    this->gamefield = new Gamefield();
    this->setCentralWidget(this->gamefield);

}

MainWindow::~MainWindow()
{
    delete ui;
  //  delete gamefield;
}

void MainWindow::on_actionNew_game_triggered()
{
    logger->putTxt("Populate");

}

void MainWindow::on_actionSet_ki_strength_triggered()
{
    logger->putTxt("See about that");


}

void MainWindow::on_actionQuit_triggered()
{
    QCoreApplication::quit();
}
