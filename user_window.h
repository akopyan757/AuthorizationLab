#ifndef USER_WINDOW_H
#define USER_WINDOW_H

#include <QMainWindow>

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = nullptr);
    ~UserWindow();

private:
    Ui::UserWindow *ui;
};

#endif // USER_WINDOW_H
