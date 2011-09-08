/**
*no se vale reproducir total ni parcialmente
*/

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include<QObject>
#include<QtNetwork>
#include <Export.hpp>

class TRIKI_EXPORT Cliente: public QObject
{
    Q_OBJECT

public:
    Cliente(QObject * pParent = 0);
    ~Cliente();
    void conectar(QString ipServidor, quint16 puerto);
    void enviar(const char * dato);
    
    QString estado(void) const;
    QTcpSocket * cliente(void) const;
    
public slots:
    void empezarTransferencia(void);
    void esperarTransferencia(void);
    
private:
    QTcpSocket * _cliente;
    QString _estadosServidor[3];
    QString _estado;
};

inline QString Cliente::estado() const
{
    return _estado;
}

inline QTcpSocket * Cliente::cliente() const
{
    return _cliente;
}

#endif // CLIENTE_HPP
