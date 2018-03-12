#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <QFile>
#include <QString>
#include <QTextStream>


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
