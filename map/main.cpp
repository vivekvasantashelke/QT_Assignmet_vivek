#include "map.h"

#include <QApplication>
#include <QMap>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
  //  map w;
  //  w.show();

    QMap<int, QString> Map;

       Map.insert(1,"A");
       Map.insert(2,"B");
       Map[3] = "C";

       foreach(int i, Map.keys()) qDebug() << Map[i];

       QMapIterator<int, QString> iter(Map);

       while(iter.hasNext())
       {
           iter.next();
           qDebug() << iter.key() << " : " << iter.value();
       }


    return a.exec();
}
