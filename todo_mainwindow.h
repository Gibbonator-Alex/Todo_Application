#ifndef TODO_MAINWINDOW_H
#define TODO_MAINWINDOW_H

#include "collection_frame.h"
#include <QMainWindow>
#include <QFrame>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class Todo_MainWindow; }
QT_END_NAMESPACE

class Todo_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Todo_MainWindow(QWidget *parent = nullptr);
    ~Todo_MainWindow();

private slots:
    void on_add_Collection_pushButton_clicked();

private:
    Ui::Todo_MainWindow *ui;
};
#endif // TODO_MAINWINDOW_H
