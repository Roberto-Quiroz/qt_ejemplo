#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //COMENTARIO 1
    //comenario 2
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
