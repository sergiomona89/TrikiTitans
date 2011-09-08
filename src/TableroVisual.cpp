/**
*no se vale reproducir total ni parcialmente
*/

#include <TableroVisual.hpp>

TableroVisual::TableroVisual(QWidget * parent) : QWidget(parent)
{
    setupUi(this);
    
    connect(pruebaPushButton, SIGNAL(clicked(void)), this, SLOT(prueba(void)));
    
    _cliente = new Cliente(this);
    _cliente->conectar("200.24.17.47", PUERTO);
}

TableroVisual::~TableroVisual()
{
    delete _cliente;
}

void TableroVisual::prueba()
{
    QString pp = "exito";
    
    if(_cliente->estado() == "conectado")
    {
	QByteArray bloque;
        QDataStream salida(&bloque, QIODevice::WriteOnly);
        salida.setVersion(VERSION);
        salida << pp;
        salida.device()->seek(0);
        _cliente->cliente()->write(bloque);
        _cliente->cliente()->flush();
        connect(_cliente->cliente(), SIGNAL(readyRead()), this, SLOT(iniciarLectura()));
    }
}

void TableroVisual::iniciarLectura()
{
    QDataStream in(_cliente->cliente());
    in.setVersion(VERSION);
    QString pupu;
    in >> pupu;
    
    pruebaLabel->setText(pupu);
    
}


