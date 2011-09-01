/**
*no se vale reproducir total ni parcialmente
*/

#ifndef MATRIZENTRIPLETAS_HPP
#define MATRIZENTRIPLETAS_HPP

#include <Tripleta.hpp>
#include <QList>
#include <iostream>

typedef QList<Tripleta> List;

class TRIKI_EXPORT MatrizEnTripletas: public QObject
{
    Q_OBJECT
private:
    List * _tripletas;

    void numeroElementos(int nroElementos);
    void asignaTripleta(Tripleta tripleta, int posicion);

public:
    MatrizEnTripletas(int filas, int columnas, QObject * pParent = 0);

    int numeroFilas(void);
    int numeroColumnas(void);
    int numeroElementos(void);
    void borraTripleta(int posicion);
    void insertaTripleta(Tripleta tripleta);
    bool existeTripleta(int fila, int columna);
    bool existeTripleta(int numFicha, QString ip);
    Tripleta tripleta(int posicion);
    Tripleta tripleta(int fila, int columna);
    int tripleta(int numFicha, QString ip);
    void muestraMatriz(void);
    virtual ~MatrizEnTripletas(void) {delete _tripletas; }
};

inline int MatrizEnTripletas::numeroFilas()
{
    Tripleta t = _tripletas->at(0);
    return t.fila();
}

inline int MatrizEnTripletas::numeroColumnas()
{
    Tripleta t = _tripletas->at(0);
    return t.columna();
}

inline void MatrizEnTripletas::numeroElementos(int nroElementos)
{
    Tripleta t = _tripletas->at(0);
    t.nroFicha(nroElementos);
    _tripletas->replace(0, t);
}

inline int MatrizEnTripletas::numeroElementos()
{
    Tripleta t = _tripletas->at(0);
    return t.nroFicha();
}

#endif // MATRIZENTRIPLETAS_HPP