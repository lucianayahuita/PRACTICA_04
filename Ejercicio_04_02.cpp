// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 20/09/2023
// Fecha modificación: 20/09/2023
// Número de ejericio: 2
// Problema planteado: Lee pro teclado la fecha actual y la de nacimiento de una persona y calcule su edad
#include <iostream>
using namespace std;
int calculaEdad(int num11, int num12, int num13, int num21, int num22, int num23);
int main() {
    int anoNac, mesNac, diaNac, ano, mes, dia, edad;
    int difanostot;
    cout << "Ingrese el ano, mes, dia en que nacio ej 2004 6 18" << endl;
    cin >> anoNac >> mesNac >> diaNac;
    cout << "Ingrese el ano, mes, dia que es hoy ej 2023 9 20" << endl;
    cin >> ano >> mes >> dia;
    difanostot = calculaEdad(anoNac, mesNac, diaNac, ano, mes, dia);
    cout << "Su edad es: " << difanostot << " anos" << endl;
    return 0;
}
//funcion que calcula la edad de la persona
int calculaEdad(int num11, int num12, int num13, int num21, int num22, int num23) {
    int difanos,difanostot;
    difanos=num21 - num11;

    if (num22<num12) {
        difanostot=difanos - 1;
    } else if (num22==num12) {
        if (num23<num13) {
            difanostot=difanos - 1;
        } else {
            difanostot=difanos;
        }
    } else {
        difanostot=difanos;
    }
    return difanostot;
}
