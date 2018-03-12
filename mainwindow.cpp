#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTreeView>
#include <QFileSystemModel>
#include <QDirModel>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
