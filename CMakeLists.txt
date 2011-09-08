
PROJECT(TrikiTitans)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

FIND_PACKAGE(Qt4 REQUIRED QtNetwork QtCore QtGui)

INCLUDE( ${QT_USE_FILE} )

INCLUDE_DIRECTORIES( ${QT_INCLUDES} ${CMAKE_BINARY_DIR} include )

ADD_DEFINITIONS( -Wall )

SET( TRIKITITANS_HDRS
include/Export.hpp
)

set( TRIKITITANS_MOC_HDRS
include/ClaseA.hpp
include/Tripleta.hpp
include/MatrizEnTripletas.hpp
include/Tablero.hpp 
include/TableroVisual.hpp
include/Cliente.hpp
include/Servidor.hpp
)

SET( TRIKITITANS_SRCS
src/Servidor.cpp
src/Cliente.cpp
src/TableroVisual.cpp
src/Tablero.cpp 
src/MatrizEnTripletas.cpp 
src/Tripleta.cpp
src/ClaseA.cpp
)

SET(TRIKITITANS_UIS
ui/TableroVisual.ui
)

QT4_WRAP_UI( TRIKITITANS_HDRS_UIS
${TRIKITITANS_UIS}
)

QT4_WRAP_CPP( TRIKITITANS_MOC_SRCS
${TRIKITITANS_MOC_HDRS}
)

add_library ( triki SHARED
${TRIKITITANS_HDRS_UIS}
${TRIKITITANS_HDRS}
${TRIKITITANS_MOC_SRCS}
${TRIKITITANS_SRCS}
)

ADD_EXECUTABLE(cliente src/MainCliente.cpp)
ADD_EXECUTABLE(servidor src/MainServidor.cpp)

TARGET_LINK_LIBRARIES( cliente triki ${QT_LIBRARIES} )
TARGET_LINK_LIBRARIES( servidor triki ${QT_LIBRARIES} )
