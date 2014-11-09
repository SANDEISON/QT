#include <QCoreApplication>
#include <QDir>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDir Directorio;
    Directorio.setPath("C:/Users/Elisabete/Downloads/Logica");


    int cont;
    cont = Directorio.count();
    // Searching files in the directory

    for(int i = 2; i < cont; i++){

        qDebug() << Directorio[i];
    }


    return a.exec();
}
