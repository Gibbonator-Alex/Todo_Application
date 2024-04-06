#ifndef COLLECTION_FRAME_H
#define COLLECTION_FRAME_H

#include "ui_todo_mainwindow.h"
#include "project_pushbutton.h"
#include <QObject>
#include <QWidget>
#include <QFrame>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <vector>

class Collection_Frame : public QFrame
{
    Q_OBJECT
private:
    int id;
    QString name = "Collection";
    std::vector<Project_PushButton*> projects;

    Ui::Todo_MainWindow *ui;
    QVBoxLayout *frame_layout;
    QFrame *add_Project_Frame;
    QPushButton *add_Project_PushButton;
    QLineEdit *collection;


public:
    Collection_Frame(QWidget *parent, Ui::Todo_MainWindow *ui, int id, std::vector<Project_PushButton*> projects = {});
    ~Collection_Frame();

    void set_ID(int &id);
    int get_ID();
    void set_Name(QString &name);
    QString get_Name();
    void set_Project_Collection(std::vector<Project_PushButton*> projects);
    std::vector<Project_PushButton*> get_Projects();
    void add_Project(Project_PushButton *project);
    void delete_Project(Project_PushButton *project);

private:
    void set_Layout();
    void add_Widgets();
    void connect_Signal();
    void create_Project();
};

#endif // COLLECTION_FRAME_H
