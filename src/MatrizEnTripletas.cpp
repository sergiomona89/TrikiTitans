/**
*no se vale reproducir total ni parcialmente
*/

#include <MatrizEnTripletas.hpp>

MatrizEnTripletas::MatrizEnTripletas(int filas, int columnas)
{
    _tripletas = new QVector<Tripleta>;
    Tripleta * tripleta = new Tripleta();//corregir la estructura de la tripleta 
					 //ya que necesito llevar un conteo de ellas. y no tengo ese campo
					 //quedaria posiblemente como cuarteta.
}

