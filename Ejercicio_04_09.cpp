// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 9
// Problema planteado: A un trabajador se le paga según las horas que trabaja en la semana, una tarifa de
//pago por hora. Si la cantidad de horas trabajadas es mayor a 40, la tarifa se incrementa
//en un 50%. Calcular el salario total del trabajador, además considere que si existe un
//anticipo se debe restar este valor al salario total. Al total debe descontar un 10% para
//el pago de impuestos. Se debe obtener:
//- Total ganado
//- Total descuentos
//- Pago neto
#include <iostream>
using namespace std;
void pagoTrab(float,float,float&,float&,float&,int,float);
int main(){
    float pago_hora,horas_trab,totalGanado=0.0,total_descuentos=0.0,pago_neto=0.0,anticipo;
    int op;
    cout<<"Ingrese la tarifa de pago por hora"<<endl;
    cin>>pago_hora;
    cout<<"Ingrese las horas trabajadas"<<endl;
    cin>>horas_trab;
    cout<<"Ingrese 1 si existio un anticipo o 2 si no lo hay"<<endl;
    cin>>op;
    if (op==1){
        cout<<"Ingrese su anticipo"<<endl;
        cin>>anticipo;
    }
    pagoTrab(pago_hora,horas_trab,totalGanado,total_descuentos,pago_neto,op,anticipo);
    cout<<"El total ganado es de: "<<totalGanado<<endl;
    cout<<"El total de descuentos es de: "<<total_descuentos<<endl;
    cout<<"El pago neto es de: "<<pago_neto<<endl;
    return 0;
}
//funcion que calcula el pago del trabajador
void pagoTrab(float num1,float num2,float& num3,float& num4,float& num5,int num6,float num7){
    float inc,desc;
    if (num6==2){
        if (num2>=40){
            inc=(num1*0.5)+num1;
            num5=(num2*inc);
            desc=num5-(num5*0.10);
            num4=(num5*0.10);
            num3=desc;
        }else{
            num5=num1*num2;
            num4=(num5*0.10);
            num3=num5-(num5*0.10);
        }
    }else{
        if (num2>=40){
            inc=(num1*0.5)+num1;
            num5=(num2*inc);
            desc=num5-(num5*0.10);
            num4=(num5*0.10)+num7;
            num3=num5-num4;
        }else{
            num5=num1*num2;
            num4=(num5*0.10)+num7;
            num3=num5-num4;
        }
    }
}
