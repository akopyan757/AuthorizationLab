#include "app_window.h"
#include "ui_app_window.h"

AppWindow::AppWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AppWindow)
{
    ui->setupUi(this);
    ui->layout->addWidget(authForm);
}

AppWindow::~AppWindow()
{
    delete ui;
}

void AppWindow::openUserForm() const
{
    authForm->setHidden(true);
    ui->layout->addWidget(userForm);
}
