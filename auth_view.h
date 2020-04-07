#ifndef AUTH_VIEW_H
#define AUTH_VIEW_H

class IAuthView
{
public: // signals
    virtual void onUserAuthorized() = 0;
};

#endif // AUTH_VIEW_H
