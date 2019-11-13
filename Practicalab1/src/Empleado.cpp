#include "Empleado.h"
#include <iostream>
#include <string>

using namespace std;

Empleado::Empleado(string _nombre,string _apellido,double _salario)
{
    nombre=_nombre;
    apellido=_apellido;
    salario=_salario;
}

Empleado::Empleado()
{
    nombre="Marc";
    apellido="Crochete";
    salario=50;
}

Empleado::~Empleado()
{

}

void Empleado::Obtener_nombre()
{
    cout<<"El nombre del empleado es: "<<nombre<<endl;
}


void Empleado::Obtener_apellido()
{
    cout<<"El apellido del empleado es: "<<apellido<<endl;
}

void Empleado::Obtener_salario()
{
    double anual,reduc,anual_red;
    if (salario<=0)
    {
        salario=0;
    }
    cout<<"Tu salario es: "<<salario<<endl;
    anual=salario*12;
    cout<<"Tu salario anual es: "<<anual<<endl;


    reduc=salario-(10*salario)/100;
    cout<<"Tu salario reducido en un 10% es: "<<reduc<<endl;

    anual_red=reduc*12;
    cout<<"Tu salario anual reducido es: "<<anual_red<<endl;
    cout<<endl;
}

string Empleado::Ob_apellido()
{
    return apellido;
}
