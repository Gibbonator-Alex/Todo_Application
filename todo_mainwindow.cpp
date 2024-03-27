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
void Todo_MainWindow::on_add_Collection_pushButton_clicked()
{
    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(ui->verticalLayout->layout());
    Collection_Frame *cf = new Collection_Frame(ui->verticalLayout->parentWidget(), ui);
    layout->insertWidget(ui->verticalLayout->indexOf(ui->verticalSpacer_2), cf);
}

