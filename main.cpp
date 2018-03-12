#include "mainwindow.h"
#include <QApplication>

#include "parser.h"
#include "csvparsen.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.showDirectory();


//    CsvParsen csvP;
//    csvP.leseDatei();

    CsvParsen * csvP = new CsvParsen();
//    csvP->oeffneDatei("C:\\Users\\folke\\OneDrive\\Documents\\Versetzungsplan.csv");
    csvP->oeffneDatei("C:/Users/folke/OneDrive/Documents/Versetzungsplan.csv");
//    Parser p = new Parser();
//    p.leseDatei();

//    delete csvP;
    return a.exec();
}
