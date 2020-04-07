#include "app_window.h"
#include "presenter.h"

#include "logging_categories.h"

#include <QApplication>

static AppWindow *w = nullptr;
static Presenter *pr = nullptr;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    w = new AppWindow();
    pr = new Presenter();

    qInfo(logInfo()) << "START APP";

    pr->setupApp(w);
    pr->setupAuthView(w->authForm);
    pr->setupUserView(w->userForm);

    w->show();
    return a.exec();
}
