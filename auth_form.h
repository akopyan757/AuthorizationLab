#ifndef AUTH_FORM_H
#define AUTH_FORM_H

#include <QWidget>
#include "auth_view.h"

namespace Ui {
class AuthForm;
}

class AuthForm : public QWidget, public IAuthView
{
    Q_OBJECT

public:
    explicit AuthForm(QWidget *parent = nullptr);
    ~AuthForm();

signals:
    void onUserAuthorized();

private:
    Ui::AuthForm *ui;
};

#endif // AUTH_FORM_H
