#include "authorizewindow.h"
#include "ui_authorizewindow.h"

AuthorizeWindow::AuthorizeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AuthorizeWindow)
{
    ui->setupUi(this);
}

AuthorizeWindow::~AuthorizeWindow()
{
    delete ui;
}

