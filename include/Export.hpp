
#ifndef EXPORT_HPP
#define ESPORT_HPP

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
