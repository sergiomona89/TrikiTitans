
#ifndef CLASEA_HPP
#define CLASEA_HPP

#include<QObject>

#include<Export.hpp>

class TRIKI_EXPORT ClaseA: public QObject
{
	Q_OBJECT
public:
	ClaseA(QObject * pParent = 0): QObject(pParent) {};
};

#endif
