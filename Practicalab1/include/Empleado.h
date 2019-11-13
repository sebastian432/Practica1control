#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <string>

using namespace std;

class Empleado
{
    public:
            string nombre;
            string apellido;
            double salario;


            Empleado(string,string,double salario=0);
            Empleado();
            ~Empleado();
            void Obtener_nombre();
            void Obtener_apellido();
            void Obtener_salario();
            void Obtener_nombreApellido(string,string);

            string Ob_apellido();
};

#endif // ESTUDIANTE_H
