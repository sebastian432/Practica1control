#include "Empleado.h"
#include "Estudiante.h"
#include "Curso.h"
#include <iostream>
#include <string>


using namespace std;


int main()
{
    Empleado p1("juan","perez",45);
    Empleado p2("pedro","lopez",90);

    p1.Obtener_apellido();
    p1.Obtener_nombre();
    p1.Obtener_salario();

    p2.Obtener_nombre();
    p2.Obtener_apellido();
    p2.Obtener_salario();
////////////////////////
    Estudiante e1("Sebastian","Paz","14523");
    Estudiante e2("Diego","Cardenas","36178");
    Estudiante e3("Kevin","Rivera","215468");
    Estudiante e4[2]={e1,e2};//arreglo de tipo estudiante
    Estudiante e5[3]={e1,e2,e3};

    e1.Obtener_nombre();
    e1.Obtener_apellido();
    e1.Obtener_codigo();

    e2.Obtener_nombre();
    e2.Obtener_apellido();
    e2.Obtener_codigo();

/// / / / / / / / / / / / / / / /

    Curso c1("Filosofia","22154",e4,100);
    cout<<"Curso: "<<c1.Obtener_nombre()<<endl;
    cout<<"codigo: "<<c1.Obtener_codigo()<<endl;
    cout<<"cantidad de alumnos: "<<c1.Obtener_cantidadAlumnos()<<endl;
    cout<<"Direccion del arreglo: "<<c1.Ob_direccion()<<endl<<endl;

///Modificacion de datos
    c1.Mod_nombre("Educacion fisica");
    c1.Mod_codigo("44912");
    c1.Mod_direccion(e5);
    c1.Incrementar_Nestudiantes();

    cout<<"Curso: "<<c1.Obtener_nombre()<<endl;
    cout<<"codigo: "<<c1.Obtener_codigo()<<endl;
    cout<<"cantidad de alumnos: "<<c1.Obtener_cantidadAlumnos()<<endl;
    cout<<"Direccion del arreglo: "<<c1.Ob_direccion()<<endl<<endl;


///Constructor copia
    Curso c2=c1;
    cout<<"Curso: "<<c2.Obtener_nombre()<<endl;
    cout<<"codigo: "<<c2.Obtener_codigo()<<endl;
    cout<<"cantidad alumnos: "<<c2.Obtener_cantidadAlumnos()<<endl;
    cout<<"Direccion del arreglo: "<<c2.Ob_direccion()<<endl<<endl;


///segundo objeto
    Curso c3("Arte","3125487",e5,68);
    cout<<"Curso: "<<c3.Obtener_nombre()<<endl;
    cout<<"codigo: "<<c3.Obtener_codigo()<<endl;
    cout<<"cantidad de alumnos: "<<c3.Obtener_cantidadAlumnos()<<endl;
    cout<<"Direccion del arreglo: "<<c3.Ob_direccion()<<endl<<endl;

/// Modificacion
    c3.Mod_nombre("Frances");
    c3.Mod_codigo("4419");
    c3.Mod_direccion(e4);
    c3.Incrementar_Nestudiantes();

    cout<<"Curso: "<<c3.Obtener_nombre()<<endl;
    cout<<"codigo: "<<c3.Obtener_codigo()<<endl;
    cout<<"cantidad de alumnos: "<<c3.Obtener_cantidadAlumnos()<<endl;
    cout<<"Direccion del arreglo: "<<c3.Ob_direccion()<<endl<<endl;

/// COPIA

    Curso c4=c3;
    cout<<"Curso: "<<c4.Obtener_nombre()<<endl;
    cout<<"codigo: "<<c4.Obtener_codigo()<<endl;
    cout<<"cantidad alumnos: "<<c4.Obtener_cantidadAlumnos()<<endl;
    cout<<"Direccion del arreglo: "<<c4.Ob_direccion()<<endl<<endl;


        int tam=2;
    Empleado arr[]={p1,p2};
    for(int x=tam;tam>0;tam--){
        for(int a=0;a<x-1;a++){
            int i=static_cast<int>(arr[i].Ob_apellido()[0]);
            int j=static_cast<int>(arr[i+1].Ob_apellido()[0]);
            if(i>j){
                swap(arr[i],arr[i+1]);
            }
            else if(i==j){
                    for(int p=0;p<tam;p++){
                        int m=static_cast<int>(arr[i].Ob_apellido()[a]);
                        int n=static_cast<int>(arr[i].Ob_apellido()[a]);
                        if( m>n){
                            swap(arr[i],arr[i+1]);
                            i++;
                        }
                    }
            }
        }

    }

    for (int i=0;i<tam;i++)
        cout << arr[i].Ob_apellido()<< endl;

    return 0;
}
