/**
*no se vale reproducir total ni parcialmente
*/

#ifndef FICHA_HPP
#define FICHA_HPP

#include<Export.hpp>
#include<QString>

class TRIKI_EXPORT Ficha
{
    
private:
    QString _ip;
    int _nroFicha;

public:
    Ficha(QString ip, int nroFicha): _ip(ip), _nroFicha(nroFicha) {}
    QString ip(void);
    int nroFicha(void);
    void ip(QString ip);
    void nroFicha(int nroFicha);
    virtual ~Ficha(void) {}
};

inline QString Ficha::ip()
{
    return _ip;
}

inline int Ficha::nroFicha()
{
    return _nroFicha;
}

inline void Ficha::ip(QString ip)
{
    _ip = ip;
}

inline void Ficha::nroFicha(int nroFicha)
{
    _nroFicha = nroFicha;
}


#endif // FICHA_HPP
