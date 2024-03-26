#ifndef PROJECT_H
#define PROJECT_H

#include "spectrum_of_tasks.h"
#include <QString>
#include <vector>

class Project
{
private:
    int id;
    QString name;
    std::vector<Spectrum_Of_Tasks> project_Tasks;

public:
    Project(int &id);
    Project(int &id, QString &name);
    Project(int &id, QString &name, std::vector<Spectrum_Of_Tasks> &project_Tasks);
    void set_ID(int &id);
    int get_ID();
    void set_Name(QString &name);
    QString get_Name();
    void set_Project_Tasks(std::vector<Spectrum_Of_Tasks> &sot);
    std::vector<Spectrum_Of_Tasks> get_Project_Tasks();
    void add_Spectrum_Of_Tasks(Spectrum_Of_Tasks &sot);
    void delete_Spectrum_Of_Tasks(Spectrum_Of_Tasks &sot);
};

#endif // PROJECT_H
