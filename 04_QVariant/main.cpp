#include <QCoreApplication>
#include <QVariant>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVariant v;
    v.setValue <int>(5);
    qDebug() << v;
    double x = v.value<double>();
    qDebug() << x;

    QList< QVariant> V2;
    V2<< 3<< "Hello" << 10.5 << 4 << "sandeison";
    qDebug() << V2;
    return a.exec();
}
