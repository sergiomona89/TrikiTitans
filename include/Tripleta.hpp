/**
*no se vale reproducir total ni parcialmente
*/

#ifndef TRIPLETA_HPP
#define TRIPLETA_HPP

#include <Ficha.hpp>

class TRIKI_EXPORT Tripleta
{
private:
    int _fila;
    int _columna;
    Ficha * _ficha;

public:
    Tripleta(int fila, int columna, Ficha * ficha = 0): _fila(fila), _columna(columna), _ficha(ficha) {}
    int fila(void);
    int columna(void);
    Ficha * ficha(void);
    void fila(int fila);
    void columna(int columna);
    void ficha(Ficha * ficha);
    virtual ~Tripleta(void) { delete _ficha; }
};

inline int Tripleta::fila()
{
    return _fila;
}

inline int Tripleta::columna()
{
    return _columna;
}

inline Ficha * Tripleta::ficha()
{
    return _ficha;
}

inline void Tripleta::fila(int fila)
{
    _fila = fila;
}

inline void Tripleta::columna(int columna)
{
    _columna = columna;
}

inline void Tripleta::ficha(Ficha * ficha)
{
    _ficha = ficha;
}

#endif // TRIPLETA_HPP
