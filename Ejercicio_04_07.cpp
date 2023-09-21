// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 20/09/2023
// Fecha modificación: 20/09/2023
// Número de ejericio: 7
// Problema planteado: Escribir un programa que lea el salario de un empleado y mediante una función
//efectué un incremento salarial en base a la siguiente escala:
//• Si el salario es menor < 1000 Bs. incremente en un 20%
//• Si el salario es mayor o igual a 1000 pero es menor a 3000 Bs. Incremente en
//un 15%
//• Si el salario es mayor o igual a 3000 pero es menor a 6000 Bs. Incremente en
//un 10%
//•Si el salario es mayor o igual a 6000 Bs. Incremente en un 5%
#include <iostream>
using namespace std;
void pago(float,float&,float&);
int main(){
    float salario,incremento=0.0,salarionuevo=0.0;
    cout<<"Ingrese su salario"<<endl;
    cin>>salario;
    pago(salario,incremento,salarionuevo);
    cout<<"El incremento es de: "<<incremento<<" por lo tanto su nuevo salario es: "<<salarionuevo;
}
void pago(float num1, float& num2,float& num3){
    if (num1<1000){
        num2=num1*0.2;
        num3=num1+num2;
    }else if(num1>=1000 && num1<3000){
        num2=num1*0.15;
        num3=num1+num2;
    }else if(num1>=3000 && num1<6000){
        num2=num1*0.10;
        num3=num1+num2;
    }else if(num1>=6000){
        num2=num1*0.05;
        num3=num1+num2;
    }
}
