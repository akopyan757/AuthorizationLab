#ifndef APP_VIEW_H
#define APP_VIEW_H

class IAppView
{
public:
    virtual void openAuthForm() = 0;
    virtual void openUserForm() = 0;
};

#endif // APP_VIEW_H
