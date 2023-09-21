// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 20/09/2023
// Fecha modificación: 20/09/2023
// Número de ejericio: 3
// Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso, posteriormente
//indicar cuál es el nombre de la persona de menor edad, el promedio de las estaturas y el
//de los pesos. (realizar con estructuras)
#include <iostream>
using namespace std;
struct persona{
    char nombre[20];
    int edad;
    int estatura;
    float peso;
}per[12];
int main(){
    int menor=99999999, posm=0;
    float sumaest=0.0,sumapes=0.0,promedioestaturas, promediopesos;
    for (int i=0;i<12;i++){
        cout<<i+1<<" Introduzca su nombre: "<<endl;
        cin.ignore();
        cin.getline(per[i].nombre,20,'\n');
        cout<<"Ingrese cual es su edad "<<endl;
        cin>>per[i].edad;
        cout<<i+1<<" Introduza su estatura en cm ej 1.60 m es 160 cm "<<endl;
        cin>>per[i].estatura;
        cout<<i+1<< "Introduzca cual es su peso en kg"<<endl;
        cin>>per[i].peso;
        sumaest+=per[i].estatura;
        sumapes+=per[i].peso;
        //para determinar el nombre de la persona con menor edad
        if(per[i].edad<menor){
            menor=per[i].edad;
            posm=i;
        }
    }
        promedioestaturas=sumaest/12;
        promediopesos=sumapes/12;
        cout<<"La persona con menor edad es: "<<per[posm].nombre<<endl;
        cout<<"El promedio de estaturas es: "<<promedioestaturas<<endl;
        cout<<"El promedio de pesos es: "<<promediopesos<<endl;
}
