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
    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(ui->collection_menu_scrollArea_vL->layout());
    Collection_Frame *cf = new Collection_Frame(ui->collection_menu_scrollArea_vL->parentWidget(), ui, 0); // ID
    layout->insertWidget(ui->collection_menu_scrollArea_vL->indexOf(ui->collection_menu_above_vS), cf);
}
