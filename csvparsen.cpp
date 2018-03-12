#include "csvparsen.h"
#include <istream>
#include <QFile>


CsvParsen::CsvParsen()
{
}

void CsvParsen::leseDatei(QFile *file)
{
    qDebug() << "Hallo";
}

void CsvParsen::schreibeDatei()
{
}

//bool CsvParsen::oeffneDatei(std::string dateiPfad)
//{
//    qDebug() << "Hallo";
//    std::fstream *fs = new std::fstream();
//    fs->open(dateiPfad, std::fstream::in);//std::ios_base::in);
//    if (fs->is_open())
//    {
//        leseDatei(fs);
//        qDebug() << "yes";
//    }

//    fs->close();
//}

bool CsvParsen::oeffneDatei(std::string dateiPfad)
{
    QFile *file("C:/Users/folke/OneDrive/Documents/Versetzungsplan.csv");

    if(file->open(stderr, QIODevice::ReadOnly))
    {
        qDebug() << "yes";
        leseDatei(file);
    }

    file->close();
}

bool CsvParsen::schliesseDatei()
{
}
