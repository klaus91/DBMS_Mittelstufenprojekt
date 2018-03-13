#include "mainwindow.h"


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

/*
 * Hier handelt es sich um einen Versuch auf die QList zuzugreifen, die die
 * Zeilen der eingelesenen CSV-Datei enthält.
 */

/******************************************************************************

    QList<QStringList> CsvParsen::*pLines = &CsvParsen::m_table;

//    CsvParsen::m_table

    qDebug() << "pLines = " << pLines;

    qDebug() << CsvParsen::m_table.count();

    for (int i = 0; i <= 5; ++i)
    {
        qDebug << CsvParsen::m_table[i];
    }

    const int l = CsvParsen::m_table.count();
    qDebug() << "m_table.count() = " << l;

******************************************************************************/
    QStandardItemModel *model = new QStandardItemModel(2, 3, this);

    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Column1 Header")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Column2 Header")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Column3 Header")));

    ui->myTableView->setModel(model);
}
