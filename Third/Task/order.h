#ifndef ORDER_H
#define ORDER_H

#include <QString>

class Order
{
public:
    Order();

    Order(QString name, QString address, QString date, QString status);

    QString getName() const;

    QString getAddress() const;

    QString getDate() const;

    QString getStatus() const;

    QString toString() {
        return QString("id: %1 \n").arg(id)
                + QString("name: %1 \n").arg(name)
                + QString("address: %1 \n").arg(address)
                + QString("date: %1 \n").arg(date)
                + QString("status: %1 \n").arg(status);

    }

    int getId() const;

    void setStatus(const QString &value);

private:
    static int objectCreateCount;

    int id;
    QString name;
    QString address;
    QString date;
    QString status;

};

#endif // ORDER_H
