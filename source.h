#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>

class source : public QObject
{
    Q_OBJECT
public:
    explicit source(QObject *parent = nullptr);
    void test();
//signal is like a switch for a light bulb and the slot is like the light bulb
signals:
    void mySignal(QString message);
public slots:
};

#endif // SOURCE_H
