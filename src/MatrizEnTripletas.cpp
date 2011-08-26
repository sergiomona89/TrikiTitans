/**
*no se vale reproducir total ni parcialmente
*/

#include <MatrizEnTripletas.hpp>

MatrizEnTripletas::MatrizEnTripletas(int filas, int columnas, QObject * pParent):
    QObject(pParent)
{
    _tripletas = new List;
    
    Tripleta tripleta1(filas, columnas, 0, "");
    Tripleta tripleta2(filas + 1, columnas + 1, 0, "");

    _tripletas->append(tripleta1);
    _tripletas->append(tripleta2);
}

void MatrizEnTripletas::asignaTripleta(Tripleta * tripleta, int posicion)
{
    _tripletas->append(_tripletas->last());
    for(int i = _tripletas->count() - 2; i > posicion; i--)
    {
	_tripletas->insert(i, _tripletas->at(i - 1));
    }
    _tripletas->insert(posicion, * tripleta);
    
}