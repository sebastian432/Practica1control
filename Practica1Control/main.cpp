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
};


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

void Empleado::Obtener_nombreApellido(string n, string a)
{
    nombre=n;
    apellido=a;
}


int main()
{
    Empleado p1("juan","perez",100);
    Empleado p2("pedro","lopez",90);
    Empleado p3,p4,p5;
    p3.Obtener_nombreApellido("Diana","Montes");
    p4.Obtener_nombreApellido("Kathy","Churacutipa");
    p5.Obtener_nombreApellido("Lionel","Messi");


    p1.Obtener_apellido();
    p1.Obtener_nombre();
    p1.Obtener_salario();

    p2.Obtener_nombre();
    p2.Obtener_apellido();
    p2.Obtener_salario();

/*
        int tam=3;
    Empleado lista[]={p3,p4,p5};
    for(int x=tam;tam>0;tam--){
        for(int a=0;a<x-1;a++){
            int i=static_cast<int>(lista[i].Obtener_apellido()[0]);
            int j=static_cast<int>(lista[i+1].Obtener_apellido()[0]);
            if(i>j){
                swap(lista[i],lista[i+1]);
            }
            else if(i==j){
                    for(int p=0;p<)
                        int m=static_cast<int>(lista[i].Obtener_apellido()[a]);
                        int n=static_cast<int>(lista[i].Obtener_apellido()[a]);
                        if(m>n){
                            swap(lista[i]+lista[i+1]);
                }
            }
        }
    }
*/
    return 0;
}

