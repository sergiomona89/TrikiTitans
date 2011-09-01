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
};

#endif // TABLEROVISUAL_HPP
