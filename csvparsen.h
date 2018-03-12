#ifndef CSVPARSEN_H
#define CSVPARSEN_H

#include <parser.h>
#include <QDebug>
#include <fstream>


class CsvParsen : public Parser
{
public:
    CsvParsen();
    virtual bool schliesseDatei();
    virtual bool oeffneDatei(QString dateiPfad);
    virtual void leseDatei(QFile & file);
    virtual void schreibeDatei();
//    void CsvParsen::leseDatei();


};

#endif // CSVPARSEN_H
