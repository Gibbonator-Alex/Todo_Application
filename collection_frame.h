#ifndef COLLECTION_FRAME_H
#define COLLECTION_FRAME_H

#include "ui_todo_mainwindow.h"
#include <QObject>
#include <QWidget>
#include <QFrame>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

class Collection_Frame : public QFrame
{
    Q_OBJECT
private:
     Ui::Todo_MainWindow *ui;
     QVBoxLayout *frame_layout;
     QPushButton *add_Project_PushButton;
     QLineEdit *collection;

public:
    Collection_Frame(QWidget *parent, Ui::Todo_MainWindow *ui);
    ~Collection_Frame();

private:
    void set_Layout();
    void create_Widgets();
    void connect_Signal();
    void create_Project();
};

#endif // COLLECTION_FRAME_H
