/********************************************************************************
** Form generated from reading UI file 'TcpServer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpServerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TcpServerClass)
    {
        if (TcpServerClass->objectName().isEmpty())
            TcpServerClass->setObjectName(QStringLiteral("TcpServerClass"));
        TcpServerClass->resize(600, 400);
        menuBar = new QMenuBar(TcpServerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TcpServerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TcpServerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TcpServerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TcpServerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TcpServerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TcpServerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TcpServerClass->setStatusBar(statusBar);

        retranslateUi(TcpServerClass);

        QMetaObject::connectSlotsByName(TcpServerClass);
    } // setupUi

    void retranslateUi(QMainWindow *TcpServerClass)
    {
        TcpServerClass->setWindowTitle(QApplication::translate("TcpServerClass", "TcpServer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TcpServerClass: public Ui_TcpServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
