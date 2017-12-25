#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_selectAllButton_clicked();
    void on_selectAllPriceButton_clicked();
    void on_selectPriceButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase database;
    QSqlQuery *query;
    QSqlTableModel *model;
    QMessageBox MSG;
};

#endif // MAINWINDOW_H
