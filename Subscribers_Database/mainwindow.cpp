#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("mydb.db3");
    query = new QSqlQuery(database);
    if (database.open())
    {
        if(!database.tables().contains("subscribers"))
        {
            query->clear();
            query->exec("CREATE TABLE subscribers("
                        "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                        "surname VARCHAR(100), "
                        "duration REAL, "
                        "cost REAL)");
            qDebug() << query->lastError().text();
            query->clear();
            query->exec("INSERT INTO subscribers (surname, duration, cost) VALUES "
                        "('Ivanov', 45, 1.75), "
                        "('Petrov', 50, 1.5),"
                        "('Sidorov', 25, 0.8), "
                        "('Romanov', 27.5, 0.75), "
                        "('Kozlov', 15.5, 1.2);");
            MSG.setText("Таблица subscribers не найдена");
            MSG.setInformativeText("Таблица создана автоматически");
            MSG.setIcon(QMessageBox::Information);
            MSG.exec();
        }
        model = new QSqlTableModel(this, database);
        model->setTable("subscribers");
        model->select();
        model->setEditStrategy(QSqlTableModel::OnFieldChange);
        ui->tableView->setModel(model);
    }
        else
    {
        MSG.setText("Невозможно открыть базу данных");
        MSG.setInformativeText(database.lastError().text());
        MSG.setIcon(QMessageBox::Critical);
        MSG.exec();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addButton_clicked()
{

}

void MainWindow::on_deleteButton_clicked()
{

}

void MainWindow::on_selectAllButton_clicked()
{

}

void MainWindow::on_selectAllPriceButton_clicked()
{

}

void MainWindow::on_selectPriceButton_clicked()
{

}
