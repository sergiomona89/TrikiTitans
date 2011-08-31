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

void MatrizEnTripletas::asignaTripleta(Tripleta tripleta, int posicion)
{
    _tripletas->append(_tripletas->last());
    for(int i = _tripletas->count() - 2; i > posicion; i--)
    {
	_tripletas->replace(i, _tripletas->at(i - 1));
    }
    _tripletas->replace(posicion, tripleta);
    
}

void MatrizEnTripletas::borraTripleta(int posicion)
{
    _tripletas->removeAt(posicion);
    numeroElementos(numeroElementos() - 1);
}

void MatrizEnTripletas::insertaTripleta(Tripleta tripleta)
{
    int n = numeroElementos();
    std::cout << n << std::endl;
    int i = 1;
    Tripleta t2 = _tripletas->at(i);
    while ((i <= n) && (t2.fila() < tripleta.fila()))
    {
	i++;
	t2 = _tripletas->at(i);
    }
    
    while ((i <= n) && (t2.fila() == tripleta.fila()) && (t2.columna() < tripleta.columna()))
    {
	i++;
	t2 = _tripletas->at(i);
    }
    
    asignaTripleta(tripleta, i);
    numeroElementos(n + 1);
}

bool MatrizEnTripletas::existeTripleta(int fila, int columna)
{
    bool existe = false;
    for (int i = 1; i < _tripletas->count(); i++)
    {
	Tripleta t = _tripletas->at(i);
	if (t.fila() == fila && t.columna() == columna)
	{
	    existe = true;
	    return existe;
	}
    }
    return existe;
}

Tripleta MatrizEnTripletas::tripleta(int posicion)
{
    return _tripletas->at(posicion);
    
}

Tripleta MatrizEnTripletas::tripleta(int fila, int columna)
{
    if (existeTripleta(fila, columna))
    {
	for (int i = 1; i <= _tripletas->count(); i++)
	{
	    Tripleta t = _tripletas->at(i);
	    if (t.fila() == fila && t.columna() == columna)
	    {
		return t;
	    }
	}
    }
}

void MatrizEnTripletas::muestraMatriz(void)
{
    for (int j = 0; j < numeroElementos() + 2; j++)
    {
	Tripleta t = _tripletas->at(j);
	std::cout << t.fila() << " " << t.columna() << " " << t.nroFicha() << std::endl;
    }
}