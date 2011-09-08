/**
*no se vale reproducir total ni parcialmente
*/

#include <Cliente.hpp>

Cliente::Cliente(QObject * pParent) : QObject(pParent)
{
    _estadosServidor [0] = "conectado";
    _estadosServidor [1] = "desconectado";
    _estadosServidor [2] = "enEspera";
    
    _cliente = new QTcpSocket(this);
    
    connect(_cliente, SIGNAL(connected()), this, SLOT(empezarTransferencia()));
    
    _estado = _estadosServidor[1];
}

Cliente::~Cliente()
{
    _cliente->close();
}

void Cliente::conectar(QString ipServidor, quint16 puerto)
{
    QHostAddress ip(ipServidor);
    _cliente->connectToHost(ip, puerto);
}

void Cliente::enviar(const char * dato)
{
    _cliente->write(dato);
}

void Cliente::empezarTransferencia()
{
    _estado = _estadosServidor[0];
}

void Cliente::esperarTransferencia()
{
    _estado = _estadosServidor[2];
}