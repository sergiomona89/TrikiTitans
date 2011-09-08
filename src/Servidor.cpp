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
    QDataStream entrada(_cliente);
    entrada.setVersion(VERSION);
    char * p;
    entrada >> p;
    
    const char * p2 = p;
    _cliente->write(p2);
}