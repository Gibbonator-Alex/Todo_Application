#ifndef TODO_MAINWINDOW_H
#define TODO_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Todo_MainWindow; }
QT_END_NAMESPACE

class Todo_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Todo_MainWindow(QWidget *parent = nullptr);
    ~Todo_MainWindow();

private:
    Ui::Todo_MainWindow *ui;
};
#endif // TODO_MAINWINDOW_H
