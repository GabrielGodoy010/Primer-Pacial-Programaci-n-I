#include <iostream>
using namespace std;

class estudiante{
    protected: string nombre, apellido;

    protected: estudiante(){
    }
    estudiante(string nom, string ape){
        nombre=nom;
        apellido=ape;
    }

    void mostrar();
};
