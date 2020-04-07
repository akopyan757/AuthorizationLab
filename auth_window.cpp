#include "auth_window.h"
#include "ui_authorizewindow.h"

AuthWindow::AuthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AuthWindow)
{
    ui->setupUi(this);
}

AuthWindow::~AuthWindow()
{
    delete ui;
}

