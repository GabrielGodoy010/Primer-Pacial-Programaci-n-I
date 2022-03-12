#include "estudiante.cpp"
#include <iostream>
#include <stdio.h>
using namespace std;
class Estudiantes:estudiante{
	
    //atributo
    private: string asignatura;
    int codigo;
    int nota1,nota2,nota3,nota4;
    float promedio;
    
    //constructor
    public: Estudiantes(){
    }
    Estudiantes(string nom, string ape, int cod, string curso, int n1, int n2, int n3, int n4): estudiante(nom, ape){
        codigo = cod;
        asignatura = curso;
        nota1 = n1;
        nota2 = n2;
        nota3 = n3;
        nota4 = n4;
    }
    float CalculoPromedio(){
                float suma=(nota1+nota2+nota3+nota4)/4;
                promedio=suma;
                return promedio;
            }
    void mostrar(){
        cout<<"\n\t Nombre del estudiante: "<<nombre<<endl;
        cout<<"\n\t Apellido del estudiante: "<<apellido<<endl;
        cout<<"\n\t Codigo de estudiante: "<<codigo<<endl;
        cout<<"\n\t Curso: "<<asignatura<<endl;
    }
};
