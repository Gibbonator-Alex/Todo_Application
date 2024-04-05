#include "collection_frame.h"

Collection_Frame::Collection_Frame(QWidget *parent, Ui::Todo_MainWindow *ui, int id, std::vector<Project_PushButton*> projects)
    : QFrame(parent), ui(ui), id(id), projects(projects)
{
    set_Layout();
    add_Widgets();
    connect_Signal();
}

Collection_Frame::~Collection_Frame(){
    for(Project_Task_Frame *ptr : projects)
        delete ptr;

    delete frame_layout;
    delete add_Project_PushButton;
    delete collection;
    delete add_Project_Frame;
}

void Collection_Frame::set_ID(int &id){
    this->id = id;
}

int Collection_Frame::get_ID(){
    return this->id;
}

void Collection_Frame::set_Name(QString &name){
    collection->setText(name);
}

QString Collection_Frame::get_Name(){
    return collection->text();
}

void Collection_Frame::set_Project_Collection(std::vector<Project_PushButton*> projects){
    this->projects = projects;
}

std::vector<Project_PushButton*> Collection_Frame::get_Projects(){
    return this->projects;
}

void Collection_Frame::add_Project(Project_PushButton *project){
    projects.push_back(project);
}

void Collection_Frame::delete_Project(Project_PushButton *project){
    for(int i = 0; i <= projects.size(); i++)
    {
        if(project->get_ID() == projects[i]->get_ID()){
            projects.erase(projects.begin() + i);
            break;
        }
    }
}

void Collection_Frame::set_Layout(){
    frame_layout = new QVBoxLayout(this);
    setLayout(frame_layout);
}

void Collection_Frame::add_Widgets(){
    collection = new QLineEdit(this);
    collection->setText(name);

    add_Project_Frame = new QFrame(this);
    QHBoxLayout *l = new QHBoxLayout(add_Project_Frame);

    add_Project_PushButton = new QPushButton(ADD_PROJECT_PUSHBUTTON_TEXT, add_Project_Frame);
    add_Project_PushButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    l->addWidget(add_Project_PushButton);

    frame_layout->addWidget(collection);
    frame_layout->addWidget(add_Project_Frame);
}

void Collection_Frame::connect_Signal(){
    QObject::connect(add_Project_PushButton, &QPushButton::clicked, this, &Collection_Frame::create_Project);
}

void Collection_Frame::create_Project(){
    QString buttonTxt = tr("%1: %2").arg(PROJECT_STANDARD_TEXT).arg(frame_layout->count() - 1);
    Project_PushButton *prjct_PushButton = new Project_PushButton(this, buttonTxt, ui, 0); // ID

    frame_layout->insertWidget(frame_layout->indexOf(add_Project_Frame), prjct_PushButton);
}


