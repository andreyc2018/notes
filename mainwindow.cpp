#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "renderarea.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    renderArea = new RenderArea(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
