#include <QCoreApplication>
#include <QDebug>
#include<QFile>
#include<QTextStream> // Create files, read and write

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream io; // input e output
    QFile file;
    file.setFileName("C:/Users/Elisabete/Desktop/Sandeison.txt"); // Create a new file
    file.open(QIODevice::ReadWrite|QIODevice::Text);//OPEN FILE , ReadWrite is reading and writing

    // Check if the file was opened

    if (!file.isOpen()){
        qDebug() << "Error: The file was not opened.";
        return 1;
    }

    // Writing in file
    io.setDevice(&file);
    io << "Text Test";

    file.flush();
    file.close(); // Closes the file


    // Read the file
    file.open(QIODevice::ReadWrite|QIODevice::Text);//OPEN FILE , ReadWrite is reading and writing

    // Check if the file was opened

    if (!file.isOpen()){
        qDebug() << "Error: The file was not opened.";
        return 1;
    }

    QString contents;
    io.setDevice(&file);
    contents =io.readAll(); // readAll entire file is read
    qDebug () << contents;
    file.flush();
    file.close(); // Closes the file





    return a.exec();
}
