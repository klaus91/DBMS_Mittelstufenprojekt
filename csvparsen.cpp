#include "csvparsen.h"

CsvParsen::CsvParsen()
{
}

void CsvParsen::leseDatei(QFile &file)
{
    qDebug() << "leseDatei called";

    QTextStream in(&file);

    QList<QStringList> lines;

    while (!in.atEnd())
    {
        QString line = in.readLine();
        if (line.contains(";"))             // TODO mit ; getrennte Elemente trennen und in String[][] Schreiben ?!
        {
            QStringList columns(line.split(";",QString::SkipEmptyParts));
            lines.append(columns);

            qDebug() << "lines.count() = " << lines.count();

//----------- >> Kein funktioneller Code ab hier -----------------------------

            qDebug() << "columns = " << columns;
            qDebug() << "columns[0] = " << columns[0];

            qDebug() << "columns.count() = " << columns.count();
        }
    }
}

void CsvParsen::schreibeDatei()
{
}

bool CsvParsen::oeffneDatei(QString dateiPfad)
{
    QFile file(dateiPfad);

    if(file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Success: File opened!";
        leseDatei(file);
    }
    else
    {
        qDebug() << "Error: File not found!";
        return false;
    }
    file.close();
    return true;
}

bool CsvParsen::schliesseDatei()
{
    return true;
}
