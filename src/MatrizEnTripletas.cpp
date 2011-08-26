/**
*no se vale reproducir total ni parcialmente
*/

#include <MatrizEnTripletas.hpp>

MatrizEnTripletas::MatrizEnTripletas(int filas, int columnas)
{
    _tripletas = new QVector<Tripleta>;
    Tripleta * tripleta = new Tripleta(filas, columnas, 0, "");
    _tripletas->append(* tripleta);
    tripleta = new Tripleta(filas + 1, columnas + 1, 0, "");
    _tripletas->append(* tripleta);
    delete tripleta;
}

