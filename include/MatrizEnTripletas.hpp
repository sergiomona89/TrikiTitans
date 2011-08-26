/**
*no se vale reproducir total ni parcialmente
*/

#ifndef MATRIZENTRIPLETAS_HPP
#define MATRIZENTRIPLETAS_HPP

#include <Tripleta.hpp>
#include <QVector>

class TRIKI_EXPORT MatrizEnTripletas
{
private:
    QVector<Tripleta> * _tripletas;
    
    void numeroElementos(int nroElementos);
    void asignaTripleta(Tripleta * tripleta, int posicion);
    
public:
    MatrizEnTripletas(int filas, int columnas);
    int numeroFilas(void);
    int numeroColumnas(void);
    int numeroElementos(void);
    void borraTripleta(int posicion);
    void insertaTripleta(Tripleta * tripleta);
    bool existeTripleta(int fila, int columna);
    Tripleta * tripleta(int posicion);
    Tripleta * tripleta(int fila, int columna);
    void muestraMatriz(void);
    virtual ~MatrizEnTripletas(void) {delete _tripletas; }
    
};

#endif // MATRIZENTRIPLETAS_HPP
