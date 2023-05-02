///EDIWN CAMPOS DRAGUSIN
///LICENCIATURA EN CIENCIAS COMPUTACIONALES
///ESTRUCTURA DE DATOS

#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

struct alumno{
    string nombre;
    int calif[3];
};

double Promedio(alumno);


int main()
{
    system("title ARREGLO CON CAMPOS TIPO ESTRUCTURA");
    system("color 0a");
    setlocale(LC_CTYPE,"spanish");

    alumno a;

    cout<<"\t\t\t"<<"************ INTRODUCE LOS DATOS DEL ALUMNO... ************"<<endl<<endl;
    cout<<"\t\t"<<"NOMBRE DEL ALUMNO: ";
    cin>>a.nombre;

    for(int i;i<3;i++){
        cout<<"\t\t"<<"INTRODUCE LA CALIFICACIÓN "<<i+1<<" : ";
        cin>>a.calif[i];
        cout<<endl;
    }
    cout<<"EL PROMEDIO DE LAS CALIFICACIONES ES: "<<Promedio(a)<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}

double Promedio(alumno x){
    int acumulador=0,contador=0;
    for(int i;i<3;i++){
        acumulador+=x.calif[i];
        contador+=1;
    }
    return acumulador/contador;
}
