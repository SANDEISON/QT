#include <QCoreApplication>
#include <QDebug>
#include <QString>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    qDebug() << "Hello world !!! "; // Print function

    int x = 13;
    double y = 3.1416;
    char z = 'S';
    QString contains;

    contains = QString("%1 %2 %3").arg(x).arg(y).arg(z);

    qDebug() << contains;

    qDebug() << " convert string of c ++  to QT";
    string s = " Original C ++ ";
    QString qs = s.c_str();
    qDebug() << qs;

    qDebug() << " convert string of QT to C++ ";
    QString qs2 = " Original QT ";
    string  s2 = qs2.toStdString();
    qDebug() << s2.c_str();

    // Search word in text
    QString name = "Sandeison Silva Fernandes";
    qDebug() << name.contains("Silva");


    //Starts with
     qDebug() << name.startsWith("Silva");

    //Informs paosição letter
     int index = name.indexOf('S');
     qDebug() << index;

    // Checks what is in position

     qDebug() << name.at(2);


    // number of characters
     int cont = name.count('a');
     qDebug() << cont;


    // concatenating the end

     qDebug() << name.append(" HADASSA");


     //clean the name

     name.clear();
     qDebug() << name;

    return a.exec();
}
