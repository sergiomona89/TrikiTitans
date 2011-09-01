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
    Tablero(const Tablero &tablero, QObject* parent = 0);
    Tablero(void): _tablero(3,3) {}
    void insertarFicha(int fila, int columna, QString ip);
    void moverFicha(int fila, int columna, int numFicha, QString ip);
    bool ganar(QString ip);
};

#endif // TABLERO_HPP
