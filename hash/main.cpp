#include "hash.h"

#include <QApplication>
#include <QHash>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // hash w;
  //  w.show();

    QHash<int, QString> Hash;

        Hash.insert(1,"A");
        Hash.insert(2,"B");

        Hash[3] = "C";

        foreach(int i, Hash.keys())

            qDebug() << Hash[i];

        QHashIterator<int, QString> iter(Hash);

        while(iter.hasNext())
        {
            iter.next();
            qDebug() << iter.key() << " : " << iter.value();
        }


    return a.exec();
}
