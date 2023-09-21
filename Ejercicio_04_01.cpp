// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 20/09/2023
// Fecha modificación: 20/09/2023
// Número de ejericio: 1
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto
#include <iostream>
using namespace std;
int determinasiesbisiesto(int);
int main(){
    int ano, opbisiesto;
    cout<<"Ingrese un ano"<<endl;
    cin>>ano;
    opbisiesto=determinasiesbisiesto(ano);
    if (opbisiesto==1){
        cout<<"Es bisiesto";
    }else{
        cout<<"No es bisiesto";
    }
}
//funcion que determina si un año es bisiesto o no ;1 es bisiesto 2 no lo es
int determinasiesbisiesto (int num){
    int opbisiesto;
    if (num%4==0){
        if (num%100==0){
            opbisiesto=1;
            if(num%400==0){
                opbisiesto=1;
            }else{
                opbisiesto=2;
            }
        }else{
            opbisiesto=1;
        }
    }else{
        opbisiesto=2;
    }
    return opbisiesto;
}
