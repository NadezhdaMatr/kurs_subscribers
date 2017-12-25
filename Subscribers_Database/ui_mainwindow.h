/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *surnameEdit;
    QLineEdit *durationEdit;
    QLineEdit *priceEdit;
    QPushButton *addButton;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *idEdit;
    QPushButton *deleteButton;
    QPushButton *selectAllButton;
    QPushButton *selectPriceButton;
    QPushButton *selectAllPriceButton;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(711, 439);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 420, 375));
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setDefaultSectionSize(100);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 10, 171, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 35, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(450, 75, 171, 31));
        label_3->setWordWrap(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(580, 75, 121, 31));
        label_4->setWordWrap(true);
        surnameEdit = new QLineEdit(centralWidget);
        surnameEdit->setObjectName(QStringLiteral("surnameEdit"));
        surnameEdit->setGeometry(QRect(450, 50, 250, 20));
        durationEdit = new QLineEdit(centralWidget);
        durationEdit->setObjectName(QStringLiteral("durationEdit"));
        durationEdit->setGeometry(QRect(450, 100, 120, 20));
        priceEdit = new QLineEdit(centralWidget);
        priceEdit->setObjectName(QStringLiteral("priceEdit"));
        priceEdit->setGeometry(QRect(580, 100, 120, 20));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(450, 130, 251, 25));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(450, 175, 151, 16));
        label_6->setFont(font);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 200, 161, 21));
        QFont font1;
        font1.setPointSize(10);
        label_7->setFont(font1);
        idEdit = new QLineEdit(centralWidget);
        idEdit->setObjectName(QStringLiteral("idEdit"));
        idEdit->setGeometry(QRect(580, 200, 120, 20));
        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(450, 230, 251, 25));
        selectAllButton = new QPushButton(centralWidget);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));
        selectAllButton->setGeometry(QRect(450, 300, 251, 25));
        selectPriceButton = new QPushButton(centralWidget);
        selectPriceButton->setObjectName(QStringLiteral("selectPriceButton"));
        selectPriceButton->setGeometry(QRect(450, 360, 251, 25));
        selectAllPriceButton = new QPushButton(centralWidget);
        selectAllPriceButton->setObjectName(QStringLiteral("selectAllPriceButton"));
        selectAllPriceButton->setGeometry(QRect(450, 330, 251, 25));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(450, 270, 191, 21));
        label_8->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        surnameEdit->raise();
        tableView->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        durationEdit->raise();
        priceEdit->raise();
        addButton->raise();
        label_6->raise();
        label_7->raise();
        idEdit->raise();
        deleteButton->raise();
        selectAllButton->raise();
        selectPriceButton->raise();
        selectAllPriceButton->raise();
        label_8->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 711, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Employee Database", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", Q_NULLPTR));
        surnameEdit->setText(QString());
        durationEdit->setText(QString());
        priceEdit->setText(QString());
        addButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\320\230\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200 (ID):", Q_NULLPTR));
        idEdit->setText(QString());
        deleteButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        selectAllButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\320\265", Q_NULLPTR));
        selectPriceButton->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \321\200\320\260\320\267\320\263\320\276\320\262\320\276\321\200\320\260 > 1.00", Q_NULLPTR));
        selectAllPriceButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \321\200\320\260\320\267\320\263\320\276\320\262\320\276\321\200\320\276\320\262 > 50.00", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\320\260\321\206\320\270\321\217 \320\267\320\260\320\277\320\270\321\201\320\265\320\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
