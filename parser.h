#ifndef PARSER_H
#define PARSER_H

#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>


class Parser
{
public:
    Parser();

    virtual bool oeffneDatei(QString dateiPfad) = 0;
    virtual bool schliesseDatei() = 0;
    virtual void leseDatei(QFile & file) = 0;
    virtual void schreibeDatei() = 0;
};

#endif // PARSER_H
