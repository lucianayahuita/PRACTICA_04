// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 20/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 5
// Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de una
//materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se
//muestra la nota final y si aprobó o reprobo el curso. (realizar con estructuras)
#include <iostream>
using namespace std;
struct registro {
    char nombremat[30];
    int paralelo;
    char nombredoc[20];
    float notaparcial1;
    float notaparcial2;
    float notaexamenfinal;
};

void apruebaono(registro&, float&, float&);

int main() {
    registro registroMateria;
    float nh = 0.0, nf = 0.0;
    cout << "Ingrese el nombre de la materia: ";
    cin.getline(registroMateria.nombremat, 30, '\n');
    cout << "Ingrese el paralelo: ";
    cin >> registroMateria.paralelo;
    cin.ignore();
    cout << "Ingrese el nombre del docente: ";
    cin.getline(registroMateria.nombredoc, 20, '\n');
    cout << "Ingrese la nota del parcial 1: ";
    cin >> registroMateria.notaparcial1;
    cout << "Ingrese la nota del parcial 2: ";
    cin >> registroMateria.notaparcial2;
    cout<< "Ingrese la nota del examen final: ";
    cin>>registroMateria.notaexamenfinal;
    apruebaono(registroMateria, nh, nf);
    if (nh>=60){
        if (nf>=51 && nf<=100){
            cout<<"El estudiante ha aprobado el curso con una nota de: "<<nf<<" del curso de: "<<registroMateria.nombremat<<" del paralelo "<<registroMateria.paralelo<<" con el docente "<<registroMateria.nombredoc<<endl;
        }else{
            cout<<"El estudiante ha reprobado el curso con una nota de: "<<nf<<endl;
        }
    }else{
        cout<<"El estudiante no esta habilitado por lo tanto no puede dar su examen final"<<endl;
    }
    return 0;
}

void apruebaono(registro& materia, float& nh, float& nf) {
    if (materia.notaparcial1 >= 60 && materia.notaparcial2 >= 60) {
        // El estudiante está habilitado
        nh = (materia.notaparcial1 + materia.notaparcial2) / 2;
        nf = (nh+materia.notaexamenfinal)/2;
    }else{
        //El estudiante no esta habilitado
        nh= (materia.notaparcial1+materia.notaparcial2)/2;
    }
}

