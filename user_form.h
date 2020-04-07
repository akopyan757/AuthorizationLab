#ifndef USER_FORM_H
#define USER_FORM_H

#include <QWidget>

#include "user_view.h"

namespace Ui {
class UserForm;
}

class UserForm : public QWidget, public IUserView
{
    Q_OBJECT

public:
    explicit UserForm(QWidget *parent = nullptr);
    ~UserForm();

private:
    Ui::UserForm *ui;
};

#endif // USER_FORM_H
