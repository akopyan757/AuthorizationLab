#include "authorizewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AuthorizeWindow w;
    w.show();
    return a.exec();
}
