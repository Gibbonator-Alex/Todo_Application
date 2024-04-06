#ifndef PROJECT_PUSHBUTTON_H
#define PROJECT_PUSHBUTTON_H

#include "ui_todo_mainwindow.h"
#include "spectrum_of_tasks_frame.h"
#include <QWidget>
#include <QPushButton>
#include <vector>

class Project_PushButton : public QPushButton
{
    Q_OBJECT
private:
    int id;
    QString name;
    std::vector<Spectrum_Of_Tasks_Frame*> project_Tasks;

    Ui::Todo_MainWindow *ui;

public:
    Project_PushButton(QWidget *parent, QString text, Ui::Todo_MainWindow *ui, int id, std::vector<Spectrum_Of_Tasks_Frame*> project_Tasks = {});
    ~Project_PushButton();
    void set_ID(int &id);
    int get_ID();
    void set_Name(QString &name);
    QString get_Name();
    void set_Project_Tasks(std::vector<Spectrum_Of_Tasks_Frame*> ptf);
    std::vector<Spectrum_Of_Tasks_Frame*> get_Project_Tasks();
    void add_Project_Task(Spectrum_Of_Tasks_Frame *ptf);
    void delete_Project_Task(Spectrum_Of_Tasks_Frame *ptf);
    void show_Spec_Tasks();
    void hide_Spec_Tasks();

private:
    void create_Project();
    void connect_Signal();
    void on_clicked();

};

#endif // PROJECT_PUSHBUTTON_H
