#include <QCoreApplication>
#include <QFileInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFileInfo information;

    information.setFile("C:/Users/Elisabete/Desktop/Sandeison.txt"); // SEARCH THE FILE INFO

    // Name of file
    qDebug () << information.fileName();

    // ADDRESS FILE
     qDebug () << information.filePath();

    // FILE SIZE
      qDebug () << information.size();

    // IF THERE FILE
     qDebug () << information.exists();

    // EXTENT OF FILE
     qDebug () << information.suffix();


    return a.exec();
}
