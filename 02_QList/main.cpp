#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList <int> l;
    l.append(1);
    l.append(2);

    qDebug() << l;

    l << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8;
    qDebug() << l;

    // sum of the values ​​of the list
    int sum = 0;
    QList <int> ::Iterator i;
    for(i = l.begin(); i != l.end(); i++){
        sum+= *i;
    }

    // 2 form sum of the values ​​of the list

    qDebug() << sum;


    int sum2=0, sum3=0;

    for( int i = 0; i <  l.size(); i++){
        sum2 += l.at(i);
        sum3 += l[i];
    }

    qDebug() << sum2;
    qDebug() << sum3;


    QList<QString> L1; // or QStringList L1;
    L1 << "Hello" << "My" << "Name";
    qDebug() << L1;




    return a.exec();
}
