/**
*no se vale reproducir total ni parcialmente
*/

#ifndef SERVIDOR_HPP
#define SERVIDOR_HPP

#include<QObject>
#include<QtNetwork>
#include <Export.hpp>

class TRIKI_EXPORT Servidor : public QObject
{
    Q_OBJECT
    
public:
    Servidor(QObject* pParent = 0);
    ~Servidor();
    
public slots:
    void aceptarConeccion();
    void iniciarLectura();
    
private:
    QTcpServer * _servidor;
    QTcpSocket * _cliente;
};

#endif // SERVIDOR_HPP
