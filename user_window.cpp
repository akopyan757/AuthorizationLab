#include "user_window.h"
#include "ui_user_window.h"

UserWindow::UserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);
}

UserWindow::~UserWindow()
{
    delete ui;
}
