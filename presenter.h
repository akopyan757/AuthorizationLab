#ifndef PRESENTER_H
#define PRESENTER_H

#include <QObject>

class IUserView;
class IAuthView;
class IAppView;

template <typename T> class QList;

class Presenter : public QObject
{
    Q_OBJECT

public:
    explicit Presenter(QObject *parent = nullptr);

    void setupApp(IAppView *app);
    void setupUserView(IUserView* view);
    void setupAuthView(IAuthView* view);

signals:
    void onUserAuthorized();

private:
    IAppView *appView = nullptr;
    IUserView *userView = nullptr;
    IAuthView *authView = nullptr;

private slots:
    void openUserView();
};

#endif // PRESENTER_H
