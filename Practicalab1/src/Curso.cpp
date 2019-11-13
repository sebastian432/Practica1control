#include "Curso.h"
#include "Estudiante.h"
#include <iostream>
using namespace std;

Curso::Curso(string _nombre,string _codigo,Estudiante* _alumnos,int _cantidadAlumnos)
{
    cout<<"normal"<<endl;
    cantidadAlumnos=_cantidadAlumnos;
    nombre=_nombre;
    codigo=_codigo;
    alumnos=_alumnos;

}
Curso::Curso()
{
    cantidadAlumnos=15;
    nombre="Marco";
    codigo="354643153";

}

Curso::~Curso(){}

Curso::Curso(const Curso& C)
{
    cout<<"copia"<<endl;
    cantidadAlumnos=C.cantidadAlumnos;
    nombre=C.nombre;
    codigo=C.codigo;
    alumnos=C.alumnos;
}

string Curso::Obtener_nombre()
{
   return nombre;
}

string Curso::Obtener_codigo()
{
    return codigo;
}

int Curso::Obtener_cantidadAlumnos()
{

    return cantidadAlumnos;
}

Estudiante* Curso::Ob_direccion()
{
    return alumnos;
}

int Curso::Incrementar_Nestudiantes()
{
     cantidadAlumnos+=1;
     return cantidadAlumnos;
}

void Curso::Mod_nombre(string _nombre)
{
    nombre=_nombre;
}

void Curso::Mod_codigo(string _codigo)
{
    codigo=_codigo;
}
void Curso::Mod_cantidadAlumnos(int _cantidadAlumnos)
{
    cantidadAlumnos=_cantidadAlumnos;
}

void Curso::Mod_direccion(Estudiante *_alumnos)
{
    alumnos=_alumnos;
}











