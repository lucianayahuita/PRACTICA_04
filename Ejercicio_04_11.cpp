// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 20/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 11
// Problema planteado: Realice una función que enviándole dos numero calcule el máximo común divisor con el
//algoritmo de Euclides.
#include <iostream>
using namespace std;
void MaxComunDiv(int&, int&,int&);
int main(){
    int a, b, mcd;
    cout<<"Ingrese un primer numero ENTERO y menor que el segundo que ingresara: "<<endl;
    cin>>a;
    cout<<"Ingrese un segundo numero ENTERO y mayor que el primero que ingreso: "<<endl;
    cin>>b;
    if (a>b){
        cout<<"Ingrese nuevamente los numeros por favor"<<endl;
    }
    MaxComunDiv(a,b,mcd);
    cout<<"El maximo comun divisor es"<<mcd<<endl;
}
//funcion que determina el mcd de un numero con el alg de euclides
void MaxComunDiv(int& num1, int& num2,int& maxd){
    int r=0,c=0;
    while (num2!=0){
        r=num1%num2;
        num1=num2;
        c=num2/num1;
        num2=r;
    }
    if (r==0){
        maxd=num1;
    }
}
