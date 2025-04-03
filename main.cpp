#include "sources.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    //Создаётся корневая папка
    QDir dir;
    const QString mainfoldername = "Promts";
    dir.mkdir(mainfoldername);

    Promtainer w;
    w.show();
    return a.exec();
}   
    