#include <iostream>

using namespace std;

#include <ClaseA.hpp>
#include <MatrizEnTripletas.hpp>

int main(){
    cout << "hola mundo!!!" << endl;
    MatrizEnTripletas * m = new MatrizEnTripletas(5,5);
    m->muestraMatriz();
    cout << "hola mundo!!!" << endl;
    Tripleta * t = new Tripleta(1,5);
    m->insertaTripleta(*t);
    m->muestraMatriz();
    cout << "hola mundo!!!" << endl;
    t = new Tripleta(1,3);
    m->insertaTripleta(*t);
    m->muestraMatriz();
    cout << "hola mundo!!!" << endl;
    t = new Tripleta(1,4);
    m->insertaTripleta(*t);
    m->muestraMatriz();
    cout << "hola mundo!!!" << endl;    
    m->borraTripleta(1);
    m->muestraMatriz();
    cout << "hola mundo!!!" << endl;    
    m->borraTripleta(1);
    m->muestraMatriz();
    cout << "hola mundo!!!" << endl;
    t = new Tripleta(1,4);
    m->insertaTripleta(*t);
    m->muestraMatriz();
    return 0;
}
