#include "project_pushbutton.h"

Project_PushButton::Project_PushButton(QWidget *parent, QString text, Ui::Todo_MainWindow *ui, int id, std::vector<Spectrum_Of_Tasks_Frame*> project_Tasks)
    : QPushButton(text, parent), ui(ui), id(id), project_Tasks(project_Tasks)
{
    create_Project();
    connect_Signal();
}

Project_PushButton::~Project_PushButton(){
    for(Spectrum_Of_Tasks_Frame *ptr : project_Tasks)
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

void Project_PushButton::set_Project_Tasks(std::vector<Spectrum_Of_Tasks_Frame*> ptf){
    this->project_Tasks = ptf;
}

std::vector<Spectrum_Of_Tasks_Frame*> Project_PushButton::get_Project_Tasks(){
    return this->project_Tasks;
}

void Project_PushButton::add_Project_Task(Spectrum_Of_Tasks_Frame *ptf){
    this->project_Tasks.push_back(ptf);
}

void Project_PushButton::delete_Project_Task(Spectrum_Of_Tasks_Frame *ptf){
    for(int i = 0; i <= project_Tasks.size(); i++)
    {
        if(ptf->get_ID() == project_Tasks[i]->get_ID()){
            project_Tasks.erase(project_Tasks.begin() + i);
            break;
        }
    }
}

void Project_PushButton::show_Spec_Tasks()
{
    for(Spectrum_Of_Tasks_Frame *stf : project_Tasks){
        ui->project_tasks_scrollArea_hL->addWidget(stf);
        stf->show();
    }
}

void Project_PushButton::hide_Spec_Tasks()
{
    QLayout *layout = ui->project_tasks_scrollArea_hL->layout();

    if(!layout)
        return;

    for(int i = 0; i < layout->count(); i++)
    {
        QWidget *widget = layout->itemAt(i)->widget();
        if(widget){
            ui->project_tasks_scrollArea_hL->removeWidget(widget);
            widget->hide();
        }
    }
}

void Project_PushButton::create_Project(){
    Spectrum_Of_Tasks_Frame *spec_task_frame = new Spectrum_Of_Tasks_Frame(ui->project_tasks_scrollAreaWidgetContents, "Task", 0); // ID
    project_Tasks.push_back(spec_task_frame);
}

void Project_PushButton::connect_Signal(){
    QObject::connect(this, &QPushButton::clicked, this, &Project_PushButton::on_clicked);
}

void Project_PushButton::on_clicked()
{
    hide_Spec_Tasks();
    show_Spec_Tasks();
}
