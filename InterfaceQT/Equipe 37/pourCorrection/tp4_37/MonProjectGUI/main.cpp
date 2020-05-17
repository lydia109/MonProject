#include "monprojectgui.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MonProjectGUI w;
    w.show();
    return a.exec();
}
