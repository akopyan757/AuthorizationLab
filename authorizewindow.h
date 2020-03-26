#ifndef AUTHORIZEWINDOW_H
#define AUTHORIZEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class AuthorizeWindow; }
QT_END_NAMESPACE

class AuthorizeWindow : public QMainWindow
{
    Q_OBJECT

public:
    AuthorizeWindow(QWidget *parent = nullptr);
    ~AuthorizeWindow();

private:
    Ui::AuthorizeWindow *ui;
};
#endif // AUTHORIZEWINDOW_H
