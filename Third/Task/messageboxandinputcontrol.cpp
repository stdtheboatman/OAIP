#include "messageboxandinputcontrol.h"
#include <QMessageBox>

MessageBoxAndInputControl::MessageBoxAndInputControl() {

}

void MessageBoxAndInputControl::showMessage(QString title, QString text) {
    QMessageBox msgBox;
    msgBox.setText(text);
    msgBox.setWindowTitle(title);
    msgBox.exec();
}
