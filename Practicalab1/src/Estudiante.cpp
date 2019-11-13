#include "Estudiante.h"
#include <iostream>
using namespace std;


Estudiante::Estudiante(string _nombre,string _apellido,string _codigo)
{
    nombre=_nombre;
    apellido=_apellido;
    codigo=_codigo;
}

Estudiante::Estudiante()
{
    nombre="Ivan";
    apellido="Perez";
    codigo="194";
}

Estudiante::~Estudiante()
{

}

void Estudiante::Obtener_nombre()
{
    cout<<"Nombre: "<<nombre<<endl;
}

void Estudiante::Obtener_apellido()
{
    cout<<"Apellido: "<<apellido<<endl;
}

void Estudiante::Obtener_codigo()
{
    cout<<"Codigo: "<<codigo<<endl;

    cout<<endl;
}
