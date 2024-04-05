#ifndef TASK_FRAME_H
#define TASK_FRAME_H

#include <QString>
#include <QFrame>

class Task_Frame : public QFrame
{
    Q_OBJECT

private:
    int id;
    QString text_Content;

public:
    Task_Frame(int id, QString text_Content);
    void set_ID(int &id);
    int get_ID();
    void set_Text_Content(QString &text);
    QString get_Text_Content();
};

#endif // TASK_FRAME_H
