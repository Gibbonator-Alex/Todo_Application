#include "todo_mainwindow.h"
#include "./ui_todo_mainwindow.h"

Todo_MainWindow::Todo_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Todo_MainWindow)
{
    ui->setupUi(this);
    //Get the VLayout from the collection_scrollArea to dynamically create new Widgets and add it to the collection_scrollArea Layout
    collection_menu_layout = qobject_cast<QVBoxLayout*>(ui->collection_menu_scrollArea_vL->layout());
}

Todo_MainWindow::~Todo_MainWindow()
{
    for (QWidget* ptr : collection_Widgets)
        delete ptr;

    delete collection_menu_layout;
    delete ui;
}

//Create a new Collection Frame to show on the sidebar
void Todo_MainWindow::on_add_Collection_pushButton_clicked()
{
    Collection_Frame *cf = new Collection_Frame(ui->collection_menu_scrollArea_vL->parentWidget(), ui, 0); // ID
    collection_menu_layout->insertWidget(ui->collection_menu_scrollArea_vL->indexOf(ui->collection_menu_above_vS), cf);

    collection_Widgets.push_back(cf);
}
