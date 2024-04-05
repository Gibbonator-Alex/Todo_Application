#include "spectrum_of_tasks.h"

Spectrum_Of_Tasks::Spectrum_Of_Tasks(int &id){
    this->id = id;
    this->name = name;
}

Spectrum_Of_Tasks::Spectrum_Of_Tasks(int &id, QString &name){
    this->id = id;
    this->name = name;
}

Spectrum_Of_Tasks::Spectrum_Of_Tasks(int &id, QString &name, std::vector<Task> &tasks){
    this->id = id;
    this->name = name;
    this->tasks = tasks;
}

void Spectrum_Of_Tasks::set_ID(int &id){
    this->id = id;
}

int Spectrum_Of_Tasks::get_ID(){
    return this->id;
}

void Spectrum_Of_Tasks::set_Name(QString &name){
    this->name = name;
}

QString Spectrum_Of_Tasks::get_Name(){
    return this->name;
}

void Spectrum_Of_Tasks::set_Tasks(std::vector<Task> &tasks){
    this->tasks = tasks;
}

std::vector<Task> Spectrum_Of_Tasks::get_Tasks(){
    return this->tasks;
}

void Spectrum_Of_Tasks::add_Task(Task &task){
    this->tasks.push_back(task);
}

void Spectrum_Of_Tasks::delete_Task(Task &task){
    for(int i = 0; i <= tasks.size(); i++)
    {
        if(task.get_ID() == tasks[i].get_ID()){
            tasks.erase(tasks.begin() + i);
            break;
        }
    }
}
