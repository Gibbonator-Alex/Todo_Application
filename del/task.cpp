#include "task.h"

Task::Task(int &id){
    this->id = id;
    this->text_Content = "";
}

Task::Task(int &id, QString &text_Content){
    this->id = id;
    this->text_Content = text_Content;
}

void Task::set_ID(int &id){
    this->id = id;
}

int Task::get_ID(){
    return this->id;
}

void Task::set_Text_Content(QString &text){
    this->text_Content = text;
}

QString Task::get_Text_Content(){
    return this->text_Content;
}
