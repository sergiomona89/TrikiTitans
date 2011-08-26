/**
*no se vale reproducir total ni parcialmente
*/

#ifndef TRIPLETA_HPP
#define TRIPLETA_HPP

#include<Export.hpp>
#include<QObject>
#include<QString>

class TRIKI_EXPORT Tripleta: public QObject
{
    Q_OBJECT
private:
    int _fila;
    int _columna;
    int _nroFicha;
    QString _ip;

public:
    Tripleta(const Tripleta &tripleta, QObject * pParent = 0);
    Tripleta(int fila, int columna, int nroFicha = 0, QString ip = QString(""), QObject * pParent = 0): QObject(pParent), _fila(fila), _columna(columna), _nroFicha(nroFicha), _ip(ip) {};

    int fila(void);
    int columna(void);
    QString ip(void);
    int nroFicha(void);
    void ip(QString ip);
    void nroFicha(int nroFicha);
    void fila(int fila);
    void columna(int columna);

    Tripleta& operator=(const Tripleta &tripleta);
};

inline int Tripleta::fila()
{
    return _fila;
}

inline int Tripleta::columna()
{
    return _columna;
}

inline QString Tripleta::ip()
{
    return _ip;
}

inline int Tripleta::nroFicha()
{
    return _nroFicha;
}

inline void Tripleta::ip(QString ip)
{
    _ip = ip;
}

inline void Tripleta::nroFicha(int nroFicha)
{
    _nroFicha = nroFicha;
}

inline void Tripleta::fila(int fila)
{
    _fila = fila;
}

inline void Tripleta::columna(int columna)
{
    _columna = columna;
}

#endif // TRIPLETA_HPP
