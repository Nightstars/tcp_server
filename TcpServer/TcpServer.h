#pragma once

#include <QDialog>
#include <QListWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushbutton>
#include <QGridLayout>
#include <QtWidgets/QDialog>
#include "server.h"
class TcpServer : public QDialog
{
	Q_OBJECT

public:
	TcpServer(QWidget *parent =Q_NULLPTR,Qt::WindowFlags f=0);
public slots:
	void slotCreateServer();
	void updateServer(QString, int);
private:
	QListWidget * contentListWidget;
	QLabel *portLabel;
	QLineEdit * portLineEdit;
	QPushButton *createBtn;
	QGridLayout *mainLayout;
	int port;
	Server *server;
};
