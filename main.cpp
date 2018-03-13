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


   QString dateiPfad = "F:\\programming\\test.csv";                                      // Jared Pfad

//    QString dateiPfad = "C:\\Users\\folke\\OneDrive\\Documents\\Versetzungsplan.csv";     // Klaus Pfad

    CsvParsen *csvP = new CsvParsen();
    csvP->oeffneDatei(dateiPfad);

//    delete csvP;

    return a.exec();
}
