
#ifndef EXPORT_HPP
#define ESPORT_HPP
#define PUERTO			quint16(3490)
#define VERSION			QDataStream::Qt_4_0
#include<QDataStream>

//enum peticion {
//    primerPrueba //primer prueba;
//};

#ifdef __WIN32
#  ifdef triki_EXPORTS
#    define TRIKI_EXPORT	__declspec( dllexport )
#  else
#    define TRIKI_EXPORT	__declspec( dllimport )
#  endif
#else
#  define TRIKI_EXPORT
#endif

#endif
