#include "todo_mainwindow.h"
#include "./ui_todo_mainwindow.h"

Todo_MainWindow::Todo_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Todo_MainWindow)
{
    ui->setupUi(this);
    collection_menu_layout = qobject_cast<QVBoxLayout*>(ui->collection_menu_scrollArea_vL->layout());
}

Todo_MainWindow::~Todo_MainWindow()
{
    for (QWidget* ptr : collection_Widgets)
        delete ptr;

    delete collection_menu_layout;
    delete ui;
}
void Todo_MainWindow::on_add_Collection_pushButton_clicked()
{
    Collection_Frame *cf = new Collection_Frame(ui->collection_menu_scrollArea_vL->parentWidget(), ui, 0); // ID
    collection_menu_layout->insertWidget(ui->collection_menu_scrollArea_vL->indexOf(ui->collection_menu_above_vS), cf);

    collection_Widgets.push_back(cf);
}
