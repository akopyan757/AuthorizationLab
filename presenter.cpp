#include <QList>

#include "presenter.h"
#include "user_view.h"
#include "auth_view.h"
#include "app_view.h"
#include "logging_categories.h"

Presenter::Presenter(QObject *parent): QObject(parent)
{
}

void Presenter::setupApp(IAppView *app) {
    if (appView != nullptr)
        return;
    appView = app;

    qInfo(logInfo()) << "SETUP APP";
}

void Presenter::setupAuthView(IAuthView *view) {
    if (authView != nullptr)
        return;
    authView = view;

    qInfo(logInfo()) << "SETUP AUTH VIEW";

    QObject *view_obj = dynamic_cast<QObject*>(view);
    QObject::connect(view_obj, SIGNAL(onUserAuthorized()), this, SLOT(openUserView()));
}

void Presenter::setupUserView(IUserView *view) {
    if (userView != nullptr)
        return;
    userView = view;

    qInfo(logInfo()) << "SETUP USER VIEW";
}

void Presenter::openUserView() {
    qInfo(logInfo()) << "OPEN USER VIEW";
    appView->openUserForm();
}
