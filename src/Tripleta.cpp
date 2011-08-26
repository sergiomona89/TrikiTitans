
#include<Tripleta.hpp>

Tripleta::Tripleta(const Tripleta &tripleta, QObject * pParent):
    QObject(pParent)
{
    this->_fila = tripleta._fila;
    this->_columna = tripleta._columna;
    this->_nroFicha = tripleta._nroFicha;
    this->_ip = tripleta._ip;
}

Tripleta& Tripleta::operator=(const Tripleta &tripleta)
{
    this->_fila = tripleta._fila;
    this->_columna = tripleta._columna;
    this->_nroFicha = tripleta._nroFicha;
    this->_ip = tripleta._ip;

    return *this;
}