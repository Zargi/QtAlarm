#include "mainwindow.h"
#include "radioscreen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RadioScreen radioScreen;
    MainWindow mainScreen;
    mainScreen.setRadioScreen(&radioScreen);

    mainScreen.show();

    return a.exec();
}
