// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 20/09/2023
// Fecha modificación: 20/09/2023
// Número de ejericio: 13
// Problema planteado: - Una empresa efectúa el control de asistencia de sus empleados mediante un lector
//biométrico, el horario en la entrada es a las 8:00 a.m y la salida es a las 16:00 p.m. El empleado
//tiene una tolerancia de 10 minutos en la entrada, si llega más allá de los 10 minutos de tolerancia
//se penaliza todos los minutos de atraso (es decir si llega a las 8:12 se penalizan los 12 minutos).
//De igual forma no puede salir antes del horario establecido en la salida, (si lo hace se penaliza
//los minutos faltantes), pero si el empleado entra antes o sale después de sus horarios el sistema
//solo toma en cuenta las 8 horas laborales de trabajo.
//El problema consiste en determinar los minutos de penalización para el empleado en cualquier
//día laboral,
#include <iostream>
using namespace std;
int penalizacion(int, int, int ,int);
int main(){
    int he,me,hs,ms,p;
    cout<<" Hora entrada "<<endl;
    cin>>he;
    cout<<" Minuto entrada "<<endl;
    cin>>me;
    cout<<" Hora salida "<<endl;
    cin>>hs;
    cout<<" Minuto salida "<<endl;
    cin>>ms;
    p=penalizacion(he,me,hs,ms);
    cout<<"Sus minutos de penalizacion son: "<<p<<endl;
}
int penalizacion(int num1,int num2,int num3,int num4){
    int p=0;
    if (num1>=8 && num2>10){
        p=num2;
        return p;
    }else{
        return p;
    }
    if (num3<16 && num4<59){
        p=60-num4;
        return p;
    }else{
        return p;
    }
}




