#include "todo_mainwindow.h"
#include "./ui_todo_mainwindow.h"

Todo_MainWindow::Todo_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Todo_MainWindow)
{
    ui->setupUi(this);
}

Todo_MainWindow::~Todo_MainWindow()
{
    delete ui;
}

