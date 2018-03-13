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
    m_exportDialog = new ExportDialog();

    connect(ui->sucheButton, SIGNAL(clicked()), m_datenverwaltung, SLOT(eintragSuchen()));
    connect(ui->neueTabelleButton, SIGNAL(clicked()), m_datenverwaltung, SLOT(tabelleAnlegen()));
    connect(ui->loescheTabelleButton, SIGNAL(clicked()), m_datenverwaltung, SLOT(tabelleLoeschen()));
    connect(ui->neueZeileButton, SIGNAL(clicked()), m_datenverwaltung, SLOT(zeileAnlegen()));
    connect(ui->neueSpalteButton, SIGNAL(clicked()), m_datenverwaltung, SLOT(spalteAnlegen()));
    connect(ui->loescheZeileButton, SIGNAL(clicked()), m_datenverwaltung, SLOT(zeileLoeschen()));
    connect(ui->loescheSpalteButton, SIGNAL(clicked()), m_datenverwaltung, SLOT(spalteLoeschen()));
    connect(ui->exportiereTabelleButton,SIGNAL(clicked()), m_exportDialog, SLOT(showExportDialog()));
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
