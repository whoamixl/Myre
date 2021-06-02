#include "myre.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Myre w;
    w.show();
    return a.exec();
}
