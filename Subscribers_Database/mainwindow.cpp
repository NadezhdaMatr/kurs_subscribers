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
    if (database.open())    //Пробуем открыть БД
    {
        if(!database.tables().contains("subscribers"))  //Если основной таблицы нет, то создаем ее и заполняем данными
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
    delete model;
    delete query;
    delete ui;
}

void MainWindow::on_addButton_clicked() //Добавление записи
{
    query->prepare("INSERT INTO subscribers (surname, duration, cost) "
                       "VALUES (:surname, :dur, :price)");
    query->bindValue(":surname", ui->surnameEdit->text());
    query->bindValue(":dur", ui->durationEdit->text());
    query->bindValue(":price", ui->priceEdit->text());
    query->exec();
    model->setFilter("");
    model->select();
}

void MainWindow::on_deleteButton_clicked()  //Удаление записи
{
    query->prepare("DELETE FROM subscribers WHERE id=:ID");
    query->bindValue(":ID", ui->idEdit->text());
    query->exec();
    model->select();
}

void MainWindow::on_selectAllButton_clicked()   //Фильтр: вывести все
{
    model->setFilter("");
    model->select();
}

void MainWindow::on_selectAllPriceButton_clicked() //Фильтр: Если стоимость всех разговоров больше 50
{
    model->setFilter("cost*duration > 50.0");
    model->select();
}

void MainWindow::on_selectPriceButton_clicked() //Фильтр: Если цена минуты разговора больше 1
{
    model->setFilter("cost > 1.0");
    model->select();
}
