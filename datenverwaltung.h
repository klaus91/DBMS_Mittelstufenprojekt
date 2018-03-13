#ifndef DATENVERWALTUNG_H
#define DATENVERWALTUNG_H

#include <QMainWindow>
#include <QDebug>


class Datenverwaltung : public QMainWindow
{
    Q_OBJECT
public:
    explicit Datenverwaltung(QWidget *parent = nullptr);

    void eintragErstellen();
    void eintragEntfernen();
    void eintragSortieren();
    void tabelleAnlegen();
    void eintragEditieren();
    void fehlerHandhabung();

signals:

public slots:

    void eintragSuchen();

protected:

private:

};

#endif // DATENVERWALTUNG_H
