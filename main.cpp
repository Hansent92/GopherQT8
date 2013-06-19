#include "gopher.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gopher w;
    w.show();
    
    return a.exec();
}
