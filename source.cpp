#include "source.h"

source::source(QObject *parent) : QObject(parent)
{

}

void source::test()
{
   //void mySignal(QString message);
   emit mySignal("Hello world !");
}
