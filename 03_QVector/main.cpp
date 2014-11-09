#include <QCoreApplication>
#include <QVector>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector <int> v;

    v << 1 << 2 << 3 << 4 << 5 ;
    qDebug () << v;
    return a.exec();
}
