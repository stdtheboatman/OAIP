#include "order.h"

int Order::objectCreateCount = 0;

Order::Order() {
    id = -993;
    name = "ZXC";
    address = "Mid";
    date = "Shadow Fiend";
    status = "let me die";
}

Order::Order(QString name, QString address, QString date, QString status) {
    this->id = objectCreateCount++;
    this->name = name;
    this->address = address;
    this->date = date;
    this->status = status;
}

QString Order::getName() const
{
    return name;
}

QString Order::getAddress() const
{
    return address;
}

QString Order::getDate() const
{
    return date;
}

QString Order::getStatus() const
{
    return status;
}

int Order::getId() const
{
    return id;
}

void Order::setStatus(const QString &value)
{
    status = value;
}
