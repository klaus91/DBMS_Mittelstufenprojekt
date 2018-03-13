#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "datenverwaltung.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void showDirectory();
    void showTable();

    ~MainWindow();

protected:

private:
    Ui::MainWindow      *ui;
    Datenverwaltung     *m_datenverwaltung;
};

#endif // MAINWINDOW_H
