/**/

#ifndef TABLERO_HPP
#define TABLERO_HPP

#include<QObject>
#include<MatrizEnTripletas.hpp>

class TRIKI_EXPORT Tablero: public QObject
{
    Q_OBJECT

private:
    MatrizEnTripletas _tablero;
    
public:
    Tablero(QObject* parent = 0): QObject(parent), _tablero(3,3) {}
    bool insertarFicha(int fila, int columna, int numFicha, QString ip);
    bool moverFicha(int fila, int columna, int numFicha, QString ip);
    bool ganar(QString ip);
};

#endif // TABLERO_HPP
