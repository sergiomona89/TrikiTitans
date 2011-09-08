#include<QApplication>
#include<Servidor.hpp>

#define PUERTO	3490

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Servidor sv;

    return app.exec();
}