#ifndef PROJECT_TASKS_FRAME_H
#define PROJECT_TASKS_FRAME_H

#include <QFrame>
#include <QVBoxLayout>
#include <QLineEdit>

class Project_Task_Frame : public QFrame
{
    Q_OBJECT

private:
    QVBoxLayout *layout;
    QLineEdit *task;

public:
    Project_Task_Frame(QWidget *parent);

private:
    void set_Layout();
    void create_Widgets();

};

#endif // PROJECT_TASKS_FRAME_H
