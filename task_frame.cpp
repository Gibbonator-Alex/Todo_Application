#include "task_frame.h"

Task_Frame::Task_Frame(int &id, QString &text_Content){
    this->id = id;
    this->text_Content = text_Content;
}

void Task_Frame::set_ID(int &id){
    this->id = id;
}

int Task_Frame::get_ID(){
    return this->id;
}

void Task_Frame::set_Text_Content(QString &text){
    this->text_Content = text;
}

QString Task_Frame::get_Text_Content(){
    return this->text_Content;
}
