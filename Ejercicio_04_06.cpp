// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 20/09/2023
// Fecha modificación: 20/09/2023
// Número de ejericio: 6
// Problema planteado: Escriba un programa que mediante una función determine el pago por el servicio de
//estacionamiento de coches en un parqueo, teniendo en cuenta que la primera hora de
//estadía se paga 8 Bs., y las restantes 3 Bs. c/hora. Si el uso del servicio es menor a una
//hora se cobra por la hora y de igual manera si excede la hora se cobra por la hora
//siguiente.
#include <iostream>
using namespace std;
int pagoServicio(int, int, int, int);
int main() {
    int hi, mi, hs, ms, hf, mf, pago;
    cout << "Ingrese la hora de ingreso" << endl;
    cin >> hi;
    cout << "Ingrese el minuto de ingreso" << endl;
    cin >> mi;
    cout << "Ingrese la hora de salida" << endl;
    cin >> hs;
    cout << "Ingrese el minuto de salida" << endl;
    cin >> ms;
    pago=pagoServicio(hi,mi,hs,ms);
    cout<<"El total a pagar es de: "<<pago<<" Bs"<<endl;
    return 0;
}
//funcion que determina el pago total
int pagoServicio (int num1,int num2,int num3,int num4){
    int pago,total_horas;
    if (num1==num3){
        if(num4>num2){
            total_horas=1;
            pago=8;
            return pago;
        }
    }else{
        total_horas=num3-num1;
        if (num4>num2){
            total_horas=total_horas+1;
            pago=8+((total_horas-1)*3);
            return pago;
        }else{
           pago=8+((total_horas-1)*3);
           return pago;
        }
    }
}


