#ifndef MESSAGEBOXANDINPUTCONTROL_H
#define MESSAGEBOXANDINPUTCONTROL_H

#include <QString>

class MessageBoxAndInputControl
{
public:
    MessageBoxAndInputControl();

    static void showMessage(QString title, QString text);
};

#endif // MESSAGEBOXANDINPUTCONTROL_H
