#include "todo_mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Todo_MainWindow w;
    w.show();
    return a.exec();
}
