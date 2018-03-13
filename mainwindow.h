#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
<<<<<<< .mine
#include "ui_mainwindow.h"
#include <QTreeView>
#include <QFileSystemModel>
#include <QDirModel>
#include <QDebug>
#include <QString>
#include <QStandardItemModel>
#include "csvparsen.h"
||||||| .r5
=======
#include "datenverwaltung.h"
#include "exportdialog.h"
>>>>>>> .r7


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
    ExportDialog        *m_exportDialog;
};

#endif // MAINWINDOW_H
