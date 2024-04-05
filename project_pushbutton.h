#ifndef PROJECT_PUSHBUTTON_H
#define PROJECT_PUSHBUTTON_H

#include "ui_todo_mainwindow.h"
#include "project_task_frame.h"
#include "config.h"
#include <QWidget>
#include <QPushButton>
#include <vector>

class Project_PushButton : public QPushButton
{
    Q_OBJECT
private:
    int id;
    QString name;
    std::vector<Project_Task_Frame*> project_Tasks;

    Ui::Todo_MainWindow *ui;

public:
    Project_PushButton(QWidget *parent, QString text, Ui::Todo_MainWindow *ui, int id, std::vector<Project_Task_Frame*> project_Tasks = {});
    ~Project_PushButton();
    void set_ID(int &id);
    int get_ID();
    void set_Name(QString &name);
    QString get_Name();
    void set_Project_Tasks(std::vector<Project_Task_Frame*> ptf);
    std::vector<Project_Task_Frame*> get_Project_Tasks();
    void add_Project_Task(Project_Task_Frame *ptf);
    void delete_Project_Task(Project_Task_Frame *ptf);

private:
    void create_Project();
    void connect_Signal();

};

#endif // PROJECT_PUSHBUTTON_H
