#include "TcpServer.h"

TcpServer::TcpServer(QWidget *parent,Qt::WindowFlags f)
	: QDialog(parent)
{
	setWindowTitle(tr("TCP Server"));
	contentListWidget = new QListWidget;
	port = 9999;
	portLabel = new QLabel(QStringLiteral("¶Ë¿Ú£º"));
	portLineEdit = new QLineEdit;
	portLineEdit->setText(QString::number(port));
	createBtn = new QPushButton(QStringLiteral("¿ªÆô¶Ë¿Ú¼àÌý"));
	connect(createBtn, SIGNAL(clicked()), this, SLOT(slotCreateServer()));
	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(contentListWidget, 0, 0, 1, 2);
	mainLayout->addWidget(portLabel,1, 0);
	mainLayout->addWidget(portLineEdit,1, 1);
	mainLayout->addWidget(createBtn, 2, 0, 1, 2);
}
void TcpServer::slotCreateServer()
{
	server=new Server(this,port);
	connect(server, SIGNAL(updateServer(QString, int)), this, SLOT(updateServer(QString, int)));
}
void TcpServer::updateServer(QString msg, int length)
{
	contentListWidget->addItem(msg.left(length));
}
