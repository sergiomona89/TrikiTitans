/**
*no se vale reproducir total ni parcialmente
*/

#include <Servidor.hpp>

Servidor::Servidor(QObject* pParent): QObject(pParent)
{
    _servidor = new QTcpServer(this);
    
    connect(_servidor, SIGNAL(newConnection()), this, SLOT(aceptarConeccion()));

    _servidor->listen(QHostAddress::Any, PUERTO);
}

Servidor::~Servidor()
{
    _servidor->close();
}

void Servidor::aceptarConeccion()
{
    _cliente = _servidor->nextPendingConnection();
    
    connect(_cliente, SIGNAL(readyRead()), this, SLOT(iniciarLectura()));
}

void Servidor::iniciarLectura()
{
    QDataStream in(_cliente);
    in.setVersion(VERSION);
    QString p;
    in >> p;

    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(VERSION);
    out << p;
    out.device()->seek(0);
    _cliente->write(block);
    _cliente->flush();
}