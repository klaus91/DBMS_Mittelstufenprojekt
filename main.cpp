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

//    QString dateiPfad = "F:\\programming\\test.csv";
//    QString dateiPfad = "C:\\Users\\folke\\OneDrive\\Documents\\DBMS_cutlinetest.csv";

//    QString dateiPfad = "C:\\Users\\folke\\OneDrive\\Documents\\DBMS_cutline\\test.csv";
    QString dateiPfad = "C:\\Users\\folke\\OneDrive\\Documents\\Versetzungsplan.csv";

//    QString dateiPfad = "C://Users//folke//OneDrive//Documents//DBMS_cutlinetest//test.csv";


    CsvParsen *csvP = new CsvParsen();
//    csvP->oeffneDatei("C:\\Users\\folke\\OneDrive\\Documents\\Versetzungsplan.csv");
    csvP->oeffneDatei(dateiPfad);
//    Parser p = new Parser();
//    p.leseDatei();

//    delete csvP;
    return a.exec();
}
