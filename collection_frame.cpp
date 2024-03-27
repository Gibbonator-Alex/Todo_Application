#include "collection_frame.h"

Collection_Frame::Collection_Frame(QWidget *parent, Ui::Todo_MainWindow *ui)
    : QFrame(parent), ui(ui)
{
    set_Layout();
    create_Widgets();
    connect_Signal();
}
Collection_Frame::~Collection_Frame(){
    delete frame_layout;
    delete add_Project_PushButton;
    delete collection;
}

void Collection_Frame::set_Layout(){
    frame_layout = new QVBoxLayout(this);
    setLayout(frame_layout);
}

void Collection_Frame::create_Widgets(){
    collection = new QLineEdit(this);
    collection->setText("Collection");

    QFrame *add_Project_Frame = new QFrame(this);
    QHBoxLayout *l = new QHBoxLayout(add_Project_Frame);

    add_Project_PushButton = new QPushButton("Add Project", add_Project_Frame);
    l->addWidget(add_Project_PushButton);

    frame_layout->addWidget(collection);
    frame_layout->addWidget(add_Project_Frame);
}

void Collection_Frame::connect_Signal(){
    QObject::connect(add_Project_PushButton, &QPushButton::clicked, this, &Collection_Frame::create_Project);
}

void Collection_Frame::create_Project(){
    qDebug() << "Project created!";
}
