#include <QCoreApplication>
#include<QDebug>
#include<QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDate date(2014,11,01);
    QTime time(02,40,20);

    QDateTime datetime(date,time);
    qDebug () << datetime;

    qDebug () << QDateTime::currentDateTime();
    qDebug () << QDate::currentDate();
    qDebug () << QTime::currentTime();

    return a.exec();
}
