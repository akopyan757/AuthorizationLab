#include "app_window.h"
#include "ui_app_window.h"
#include "user_view.h"

AppWindow::AppWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AppWindow)
{
    ui->setupUi(this);
}

AppWindow::~AppWindow()
{
    delete ui;
}

void AppWindow::openAuthForm()
{
    authForm = new AuthForm();
    ui->layout->insertWidget(0, authForm);
}

void AppWindow::openUserForm()
{
    QWidget *widget = ui->layout->itemAt(0)->widget();
    if (widget != nullptr)
        delete widget;
    userForm = new UserForm();
    ui->layout->insertWidget(0, userForm);
}
