// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 20/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 8
// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que
//dependerá del número de computadoras que compre. Si las computadoras son menos de
//cinco se les dará un 10% de descuento sobre el total de la compra; si el número de
//computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
//descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada
//computadora es un valor que el usuario ingrese desde el teclado. Se debe obtener el
//precio total que el cliente debe pagar y el valor del descuento.
#include <iostream>
using namespace std;
void precioPago(int,float,float&,float&);
int main(){
    int n, i;
    float sum=0.0,preciototal=0.0,descuento=0.0;
    cout<<"Ingrese el numero de computadoras"<<endl;
    cin>>n;
    int v[n];
    for (i=0;i<n;i++){
        cout<<"Ingrese el precio de la computadora: "<<i+1<<endl;
        cin>>v[n];
        sum+=v[n];
    }
    precioPago(n,sum, preciototal,descuento);
    cout<<"El valor del descuento es: "<<descuento<<" por lo tanto lo que tiene que pagar es: "<<preciototal<<endl;
    return 0;
}
//funcion que calcula el descuento y el total a pagar
void precioPago(int num1,float num2, float& num3,float& num4){
    if (num1<5){
        num4=num2*0.10;
        num3=num2-num4;
    }else if(num1>=5 && num1<10){
        num4=num2*0.20;
        num3=num2-num4;
    }else if(num1>=10){
        num4=num2*0.40,
        num3=num2-num4;
    }
}
