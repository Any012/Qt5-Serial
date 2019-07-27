#include <QApplication>

#include "serial.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Serial widget;
    widget.resize(100, 480);
    widget.show();
    return app.exec();
}