#include <QCoreApplication>
#include <QFile>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFile file;
    file.setFileName("C:/Users/Elisabete/Desktop/Sandeison.txt");// File name

    //Check if file exists
    if (!file.exists()){
        qDebug() << "Error when selecting the file ";
        return 1;
    }

    // Open file

    // QIODevice - Input and output device; ReadOnly - read only -
    file.open(QIODevice::ReadOnly | QIODevice :: Text);

    //Check if file is open
    if (!file.isOpen()){
        qDebug() << "Error opening file";
        return 2;
    }

    // Read the file
    QByteArray contents;

    contents = file.readAll();
    qDebug () << contents;

    file.close();







    //  Writing in FILE

    // FILE WAS CLOSED AS WE HAVE TO OPEN AGAIN


    QFile file2;
    file2.setFileName("C:/Users/Elisabete/Desktop/Sandeison.txt");// File name

    //Check if file exists
    if (!file2.exists()){
        qDebug() << "Error when selecting the file ";
        return 1;
    }

    // Open file

    // QIODevice - Input and output device; ReadOnly - read only -
    file2.open(QIODevice::WriteOnly | QIODevice :: Text);

    //Check if file is open
    if (!file2.isOpen()){
        qDebug() << "Error opening file";
        return 2;
    }

     // Write to file
    QByteArray contents2 = "Modifying the file";
    file2.write(contents2);
    file2.flush();
    file2.close(); // Closes the file



    return a.exec();
}
