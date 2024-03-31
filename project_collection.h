#ifndef PROJECT_COLLECTION_H
#define PROJECT_COLLECTION_H

#include "project.h"
#include <QString>
#include <vector>


class Project_Collection
{
private:
    int id;
    QString name;
    std::vector<Project> project_Collection;

public:
    Project_Collection(int &id);
    Project_Collection(int &id, const QString &name);
    Project_Collection(int &id, QString &name, std::vector<Project> &project_Collection);
    void set_ID(int &id);
    int get_ID();
    void set_Name(QString &name);
    QString get_Name();
    void set_Project_Collection(std::vector<Project> &project_Collection);
    std::vector<Project> get_Project_Collection();
    void add_Project(Project &project);
    void delete_Project(Project &project);
};

#endif // PROJECT_COLLECTION_H
