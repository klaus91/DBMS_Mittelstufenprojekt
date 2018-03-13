#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTreeView>
#include <QFileSystemModel>
#include <QDirModel>
#include <QDebug>
#include <QString>
#include <QStandardItemModel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_datenverwaltung = new Datenverwaltung();

    connect(ui->sucheButton, SIGNAL(clicked()), m_datenverwaltung, SLOT(eintragSuchen()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/******************************************************************************
 * Funktion zum Anzeigen des Verzeichnisbaums in Form eines TreeViews
 ******************************************************************************/
void MainWindow::showDirectory()
{
    QFileSystemModel *model = new QFileSystemModel;

    QString mPath = "C:/";

    model->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs | QDir::Files);

    model->setRootPath(mPath);

    model->setReadOnly(true);

    ui->myTreeView->setModel(model);
}

/******************************************************************************
 * Funktion zum Anzeigen des Inhalts einer Datei im TableView
 ******************************************************************************/
void MainWindow::showTable()
{
//    QAbstractTableModel *model = new QAbstractTableModel;
    QStandardItemModel *model = new QStandardItemModel;

}
