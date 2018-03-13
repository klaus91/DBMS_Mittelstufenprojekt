#ifndef CSVPARSEN_H
#define CSVPARSEN_H

#include <parser.h>


class CsvParsen : public Parser
{
public:
    CsvParsen();
    virtual bool schliesseDatei();
    virtual bool oeffneDatei(QString dateiPfad);
    virtual void leseDatei(QFile & file);
    virtual void schreibeDatei();

};

#endif // CSVPARSEN_H
