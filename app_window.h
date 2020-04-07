#ifndef APP_WINDOW_H
#define APP_WINDOW_H

#include <QMainWindow>

#include "auth_form.h"
#include "user_form.h"
#include "app_view.h"

namespace Ui {
class AppWindow;
}

class AppWindow : public QMainWindow, public IAppView
{
    Q_OBJECT

public:
    explicit AppWindow(QWidget *parent = nullptr);
    ~AppWindow();

    AuthForm *authForm = nullptr;
    UserForm *userForm = nullptr;

public:
    void openAuthForm() override;
    void openUserForm() override;

private:
    Ui::AppWindow *ui;
};

#endif // APP_WINDOW_H
