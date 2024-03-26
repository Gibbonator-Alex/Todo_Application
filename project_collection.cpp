#include "project_collection.h"

Project_Collection::Project_Collection(int &id){
    this->id = id;
    this->name = "";
}

Project_Collection::Project_Collection(int &id, QString &name){
    this->id = id;
    this->name = name;
}

Project_Collection::Project_Collection(int &id, QString &name, std::vector<Project> &project_Collection){
    this->id = id;
    this->name = name;
    this->project_Collection = project_Collection;
}

void Project_Collection::set_ID(int &id){
    this->id = id;
}

int Project_Collection::get_ID(){
    return this->id;
}

void Project_Collection::set_Name(QString &name){
    this->name = name;
}

QString Project_Collection::get_Name(){
    return this->name;
}

void Project_Collection::set_Project_Collection(std::vector<Project> &project_Collection){
    this->project_Collection = project_Collection;
}

std::vector<Project> Project_Collection::get_Project_Collection(){
    return this->project_Collection;
}

void Project_Collection::add_Project(Project &project){
    this->project_Collection.push_back(project);
}

void Project_Collection::delete_Project(Project &project){
    for(int i = 0; i <= project_Collection.size(); i++)
    {
        if(project.get_ID() == project_Collection[i].get_ID()){
            project_Collection.erase(project_Collection.begin() + i);
            break;
        }
    }
}
