// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 18/09/2023
// Fecha modificación: 20/09/2023
// Número de ejericio: 4
// Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango
//de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones. La
//entrada de valores es para las calificaciones, debe hacerlo mediante una función.
#include <iostream>
using namespace std;
float promedio(int,float);
int main(){
    int N,i;
    float sum=0.0,p;
    cout<<"Ingrese las N(notas)"<<endl;
    cin>>N;
    int v[N];
    do{
       for (i=0;i<N;i++){
       cout<<"Ingrese la calificacion: "<<i+1<<endl;
       cin>>v[i];
       if (v[i]<1 || v[i]>100){
        cout<<"Ingrese una nota valida mayor igual que 1 y menor que 100"<<endl;
        break;
       }else{
           sum+=v[i];
       }
       }
    }while(i<N);
    p=promedio(N,sum);
    cout<<"La sumatoria de las notas es: "<<sum<<endl;
    cout<<"El promedio es igual a: "<<p<<endl;
}
//funcion que calcula el promedio de las n notas
float promedio(int num1, float num2){
    float p;
    p=num2/num1;
    return p;
}
