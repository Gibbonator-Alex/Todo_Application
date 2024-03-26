#ifndef TASK_H
#define TASK_H

#include <QString>

class Task
{
private:
    int id;
    QString text_Content;

public:
    Task(int &id);
    Task(int &id, QString &text_Content);
    void set_ID(int &id);
    int get_ID();
    void set_Text_Content(QString &text);
    QString get_Text_Content();
};

#endif // TASK_H
