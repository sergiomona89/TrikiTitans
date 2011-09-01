/**/

#include <Tablero.hpp>

bool Tablero::insertarFicha(int fila, int columna, int numFicha, QString ip)
{
    if (!_tablero.existeTripleta(fila, columna)) 
    {
	Tripleta ficha(fila,columna, numFicha, ip);
	_tablero.insertaTripleta(ficha);
	return true;
    }
    return false;
}

bool Tablero::moverFicha(int fila, int columna, int numFicha, QString ip)
{
    if (!_tablero.existeTripleta(fila, columna)) 
    {
	int posAnt = _tablero.tripleta(numFicha, ip);
	_tablero.borraTripleta(posAnt);
	Tripleta ficha(fila,columna, numFicha, ip);
	_tablero.insertaTripleta(ficha);
	return true;
    }
    return false;
}

bool Tablero::ganar(QString ip)
{
    MatrizEnTripletas matriz(3,3);
    for (int i = 1; i <= _tablero.numeroElementos(); i++)
    {
	Tripleta tripleta = _tablero.tripleta(i);
	if (tripleta.ip() == ip)
	{
	    matriz.insertaTripleta(tripleta);
	}
    }
    if (matriz.numeroElementos() < 3)
	return false;
    bool triqui = false;
    int cons = matriz.tripleta(1).columna();
    for(int i = 1; i <= matriz.numeroElementos(); i++)
    {
	Tripleta tripleta = matriz.tripleta(i);
	if(tripleta.fila() == i && tripleta.columna() == cons)
	    triqui = true;
	else
	    triqui = false;
    }
    if (triqui)
	return triqui;
    cons = matriz.tripleta(1).fila();
    for (int i = 1; i <= matriz.numeroElementos(); i++)
    {
	Tripleta tripleta = matriz.tripleta(i);
	if (tripleta.columna() == i && tripleta.fila() == cons)
	    triqui = true;
	else
	    triqui = false;
    }
    if (triqui)
	return triqui;
    for (int i = 1; i <= matriz.numeroElementos(); i++)
    {
	Tripleta tripleta = matriz.tripleta(i);
	if (tripleta.columna() == tripleta.fila())
	    triqui = true;
	else
	    triqui = false;
    }
    if (triqui)
	return triqui;
    for (int i = 1; i <= matriz.numeroElementos(); i++)
    {
	Tripleta tripleta = matriz.tripleta(i);
	if (tripleta.fila() == i && tripleta.columna() == matriz.numeroElementos() + 1 - i)
	    triqui = true;
	else
	    triqui = false;
    }
    return triqui;
}