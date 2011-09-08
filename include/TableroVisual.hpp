/**
*no se vale reproducir total ni parcialmente
*/

#ifndef TABLEROVISUAL_HPP
#define TABLEROVISUAL_HPP

#include <Tablero.hpp>
#include <QWidget>
#include "ui_TableroVisual.h"

class TRIKI_EXPORT TableroVisual : public QWidget, Ui::TableroVisual
{
    Q_OBJECT
    
public:
    TableroVisual(QWidget* parent = 0);
    ~TableroVisual();
    
public slots:
    void prueba();
    void iniciarLectura();
    
private:
    Cliente * _cliente;
};

#endif // TABLEROVISUAL_HPP
