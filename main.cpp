#include "Estudiantes.cpp"
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    string nombre,apellido,curso;
	int codigo;
    int nota1,nota2,nota3,nota4;
    float promedio;
    string op;

    do{
    cout<<"\n Ingrese Nombre: ";
	cin>>nombre;
	cout<<"\n Ingrese Apellido: ";
	cin>>apellido;
	cout<<"\n Ingrese Curso: ";
	cin>>curso;
	cout<<"\n Ingrese Codigo: ";
	cin>>codigo;
    cout<<"\n\t Ingrese nota 1: ";
    cin>>nota1;
    cout<<"\n\t Ingrese nota 2: ";
    cin>>nota2;
    cout<<"\n\t Ingrese nota 3: ";
    cin>>nota3;
    cout<<"\n\t Ingrese nota 4: ";
    cin>>nota4;

    Estudiantes obj = Estudiantes(nombre,apellido,codigo,curso,nota1,nota2,nota3,nota4);
    promedio=obj.CalculoPromedio();
    cout<<"\n Promedio: "<<promedio<<endl;;

    obj.mostrar();
    if(promedio>60)
        cout<<"\n\t APROBADO"<<endl;
    else
        cout<<"\n\t REPROBADO"<<endl;;
    cout<<"\n Desea agregar otro estudiante (s/n): ";
    cin>>op;
    }
    while(op=="s" or op=="S");
    system("pause");
}
