#ifndef SPECTRUM_OF_TASKS_FRAME_H
#define SPECTRUM_OF_TASKS_FRAME_H

#include "task_frame.h"
#include <QFrame>
#include <QVBoxLayout>
#include <QLineEdit>


class Spectrum_Of_Tasks_Frame : public QFrame
{
    Q_OBJECT

private:
    int id;
    QString name;
    std::vector<Task_Frame*> tasks;

    QVBoxLayout *layout;
    QLineEdit *task;

public:
    Spectrum_Of_Tasks_Frame(QWidget *parent, QString name, int id, std::vector<Task_Frame*> tasks = {});
    ~Spectrum_Of_Tasks_Frame();

    void set_ID(int &id);
    int get_ID();
    void set_Name(QString &name);
    QString get_Name();
    void set_Tasks(std::vector<Task_Frame*> tasks);
    std::vector<Task_Frame*> get_Tasks();
    void add_Task(Task_Frame *task);
    void delete_Task(Task_Frame *task);

private:
    void set_Layout();
    void create_Widgets();

};

#endif // SPECTRUM_OF_TASKS_FRAME_H
