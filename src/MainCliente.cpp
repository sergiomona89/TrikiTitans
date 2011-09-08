#include<QApplication>
#include<TableroVisual.hpp>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    TableroVisual tv;
    tv.show();

    return app.exec();
}