#include "project_pushbutton.h"

Project_PushButton::Project_PushButton(QWidget *parent, QString text, Ui::Todo_MainWindow *ui, int id, std::vector<Project_Task_Frame*> project_Tasks)
    : QPushButton(text, parent), ui(ui), id(id), project_Tasks(project_Tasks)
{
    create_Project();
    connect_Signal();
}

Project_PushButton::~Project_PushButton(){
    for(Project_PushButton *ptr : project_Tasks)
        delete ptr;
}

void Project_PushButton::set_ID(int &id){
    this->id = id;
}

int Project_PushButton::get_ID(){
    return this->id;
}

void Project_PushButton::set_Name(QString &name){
    setText(name);
}

QString Project_PushButton::get_Name(){
    return this->text();
}

void Project_PushButton::set_Project_Tasks(std::vector<Project_Task_Frame*> ptf){
    this->project_Tasks = ptf;
}

std::vector<Project_Task_Frame*> Project_PushButton::get_Project_Tasks(){
    return this->project_Tasks;
}

void Project_PushButton::add_Project_Task(Project_Task_Frame *ptf){
    this->project_Tasks.push_back(ptf);
}

void Project_PushButton::delete_Project_Task(Project_Task_Frame *ptf){
    for(int i = 0; i <= project_Tasks.size(); i++)
    {
        if(ptf->get_ID() == project_Tasks[i]->get_ID()){
            project_Tasks.erase(project_Tasks.begin() + i);
            break;
        }
    }
}

void Project_PushButton::create_Project(){
    Project_Task_Frame *prjct_frame = new Project_Task_Frame(ui->project_tasks_scrollAreaWidgetContents);
    ui->project_tasks_scrollArea_hL->addWidget(prjct_frame);
}

void Project_PushButton::connect_Signal(){

}
