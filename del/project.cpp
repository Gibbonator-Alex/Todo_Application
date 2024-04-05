#include "project.h"

Project::Project(int &id){
    this->id = id;
    this->name = "";
}

Project::Project(int &id, QString &name){
    this->id = id;
    this->name = name;
}

Project::Project(int &id, QString &name, std::vector<Spectrum_Of_Tasks> &project_Tasks){
    this->id = id;
    this->name = name;
    this->project_Tasks = project_Tasks;
}

void Project::set_ID(int &id){
    this->id = id;
}

int Project::get_ID(){
    return this->id;
}

void Project::set_Name(QString &name){
    this->name = name;
}

QString Project::get_Name(){
    return this->name;
}

void Project::set_Project_Tasks(std::vector<Spectrum_Of_Tasks> &sot){
    this->project_Tasks = sot;
}

std::vector<Spectrum_Of_Tasks> Project::get_Project_Tasks(){
    return this->project_Tasks;
}

void Project::add_Spectrum_Of_Tasks(Spectrum_Of_Tasks &sot){
    this->project_Tasks.push_back(sot);
}

void Project::delete_Spectrum_Of_Tasks(Spectrum_Of_Tasks &sot){
    for(int i = 0; i <= project_Tasks.size(); i++)
    {
        if(sot.get_ID() == project_Tasks[i].get_ID()){
            project_Tasks.erase(project_Tasks.begin() + i);
            break;
        }
    }
}
