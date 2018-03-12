#ifndef DATENVERWALTUNG_H
#define DATENVERWALTUNG_H

#include <QMainWindow>

class Datenverwaltung : public QMainWindow
{
    Q_OBJECT
public:
    explicit Datenverwaltung(QWidget *parent = nullptr);

    void eintragErstellen();
    void eintragSuchen();
    void eintragEntfernen();
    void eintragSortieren();
    void tabelleAnlegen();
    void eintragEditieren();
    void fehlerHandhabung();

signals:

public slots:
};

#endif // DATENVERWALTUNG_H
