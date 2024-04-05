#include "project_task_frame.h"

Project_Task_Frame::Project_Task_Frame(QWidget *parent)
    : QFrame(parent)
{
    set_Layout();
    create_Widgets();
}

void Project_Task_Frame::set_Layout(){
    layout = new QVBoxLayout(this);
    setLayout(layout);

    setMinimumSize(QSize(200,200));
}

void Project_Task_Frame::create_Widgets(){
    task = new QLineEdit(this);
    layout->addWidget(task);
}
