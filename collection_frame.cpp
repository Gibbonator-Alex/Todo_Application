#include "collection_frame.h"

Collection_Frame::Collection_Frame(QWidget *parent, Ui::Todo_MainWindow *ui, int collection_id)
    : QFrame(parent), ui(ui), prjct_coll(collection_id, COLLECTION_STANDARD_TEXT)
{
    set_Layout();
    create_Widgets();
    connect_Signal();
}
Collection_Frame::~Collection_Frame(){
    delete frame_layout;
    delete add_Project_PushButton;
    delete collection;
    delete add_Project_Frame;
}

void Collection_Frame::set_Layout(){
    frame_layout = new QVBoxLayout(this);
    setLayout(frame_layout);
}

void Collection_Frame::create_Widgets(){
    collection = new QLineEdit(this);
    collection->setText(COLLECTION_STANDARD_TEXT);

    add_Project_Frame = new QFrame(this);
    QHBoxLayout *l = new QHBoxLayout(add_Project_Frame);

    add_Project_PushButton = new QPushButton(ADD_PROJECT_PUSHBUTTON_TEXT, add_Project_Frame);
    add_Project_PushButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    l->addWidget(add_Project_PushButton);

    frame_layout->addWidget(collection);
    frame_layout->addWidget(add_Project_Frame);
}

void Collection_Frame::connect_Signal(){
    QObject::connect(add_Project_PushButton, &QPushButton::clicked, this, &Collection_Frame::create_Project);
}

void Collection_Frame::create_Project(){
    QString buttonTxt = tr("%1: %2").arg(PROJECT_STANDARD_TEXT).arg(frame_layout->count() -1);
    QPushButton *project = new QPushButton(buttonTxt, this);
    frame_layout->insertWidget(frame_layout->indexOf(add_Project_Frame), project);
}
