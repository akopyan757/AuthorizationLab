#include "auth_form.h"
#include "ui_auth_form.h"

AuthForm::AuthForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthForm)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SIGNAL(onUserAuthorized()));
}

AuthForm::~AuthForm()
{
    delete ui;
}
