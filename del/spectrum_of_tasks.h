#ifndef SPECTRUM_OF_TASKS_H
#define SPECTRUM_OF_TASKS_H

#include "task.h"
#include <QString>
#include <vector>

class Spectrum_Of_Tasks
{
private:
    int id;
    QString name;
    std::vector<Task> tasks;

public:
    Spectrum_Of_Tasks(int &id);
    Spectrum_Of_Tasks(int &id, QString &name);
    Spectrum_Of_Tasks(int &id, QString &name, std::vector<Task> &tasks);
    void set_ID(int &id);
    int get_ID();
    void set_Name(QString &name);
    QString get_Name();
    void set_Tasks(std::vector<Task> &tasks);
    std::vector<Task> get_Tasks();
    void add_Task(Task &task);
    void delete_Task(Task &task);
};

#endif // SPECTRUM_OF_TASKS_H
