#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include "Estudiante.h"

using namespace std;

class Curso
{
    private:
            string nombre;
            string codigo;
            Estudiante *alumnos;
            int cantidadAlumnos;
    public:
            Curso(string,string,Estudiante *alumnos,int);
            Curso(const Curso& C);
            Curso();
            ~Curso();

            string Obtener_nombre();
            string Obtener_codigo();
            int Obtener_cantidadAlumnos();
            int Incrementar_Nestudiantes();
            Estudiante *Ob_direccion();

            void Mod_nombre(string);
            void Mod_codigo(string);
            void Mod_cantidadAlumnos(int);
            void Mod_direccion(Estudiante *alumno);

};

#endif // CURSO_H
