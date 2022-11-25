#include "boutonpoussoir.h"
#include "digicode.h"
#include "porte.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    digicode w;
    Porte s;
    BoutonPoussoir b;
    w.show();
    s.show();
    b.show();
    return a.exec();
}
