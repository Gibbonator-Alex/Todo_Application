#include "spectrum_of_tasks_frame.h"

Spectrum_Of_Tasks_Frame::Spectrum_Of_Tasks_Frame(QWidget *parent, QString name, int id, std::vector<Task_Frame*> tasks)
    : QFrame(parent), name(name), id(id), tasks(tasks)
{
    set_Layout();
    create_Widgets();
}

Spectrum_Of_Tasks_Frame::~Spectrum_Of_Tasks_Frame()
{
    for(Task_Frame *ptr : tasks)
        delete ptr;

    delete layout;
    delete task;
}

void Spectrum_Of_Tasks_Frame::set_ID(int &id){
    this->id = id;
}

int Spectrum_Of_Tasks_Frame::get_ID(){
    return this->id;
}

void Spectrum_Of_Tasks_Frame::set_Name(QString &name){
    this->name = name;
}

QString Spectrum_Of_Tasks_Frame::get_Name(){
    return this->name;
}

void Spectrum_Of_Tasks_Frame::set_Tasks(std::vector<Task_Frame*> tasks){
    this->tasks = tasks;
}

std::vector<Task_Frame*> Spectrum_Of_Tasks_Frame::get_Tasks(){
    return this->tasks;
}

void Spectrum_Of_Tasks_Frame::add_Task(Task_Frame *task){
    this->tasks.push_back(task);
}

void Spectrum_Of_Tasks_Frame::delete_Task(Task_Frame *task){
    for(int i = 0; i <= tasks.size(); i++)
    {
        if(task->get_ID() == tasks[i]->get_ID()){
            tasks.erase(tasks.begin() + i);
            break;
        }
    }
}

void Spectrum_Of_Tasks_Frame::set_Layout(){
    layout = new QVBoxLayout(this);
    setLayout(layout);

    setMinimumSize(QSize(200,200));
}

void Spectrum_Of_Tasks_Frame::create_Widgets(){
    task = new QLineEdit(this);
    layout->addWidget(task);
}
