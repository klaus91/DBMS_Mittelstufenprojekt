#ifndef EXPORTDIALOG_H
#define EXPORTDIALOG_H

#include <QDialog>


namespace Ui {
class ExportDialog;
}

class ExportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExportDialog(QWidget *parent = 0);

    ~ExportDialog();

signals:

public slots:

    void showExportDialog();

protected:

private:
    Ui::ExportDialog *ui;
};

#endif // EXPORTDIALOG_H
