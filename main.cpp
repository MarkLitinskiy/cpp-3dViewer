
#include <QApplication>

#include "view/mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Model model;
    Controller *controller = nullptr;
    controller->getInstance(&model);
    MainWindow view(controller);
    view.show();
    return a.exec();

}
