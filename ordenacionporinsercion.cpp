//ordenamiento por inserción
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Función para llenar un arreglo con números aleatorios
void llenarArregloAleatorio(int arreglo[], int N) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        arreglo[i] = rand() % 100;
    }
}
// Función para imprimir un arreglo
void imprimirArreglo(int arreglo[], int N) {
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}
// Función para ordenar un arreglo por el método de inserción
void ordenarPorInsercion(int arreglo[], int N) {
    int posicion, aux;
    for (int i = 0; i < N; i++) {
        posicion = i;
        aux = arreglo[i];
        while ((posicion > 0) && (arreglo[posicion - 1] > aux)) {
            arreglo[posicion] = arreglo[posicion - 1];
            posicion--;
        }
        arreglo[posicion] = aux;
    }
}

int main() {
    int N;
    cout << "Ingrese el tamaño del arreglo: " << endl;
    cin >> N;
    int arreglo[N];
    llenarArregloAleatorio(arreglo, N);
    cout << "Arreglo desordenado: ";
    imprimirArreglo(arreglo, N);
    ordenarPorInsercion(arreglo, N);
    cout << "Arreglo ordenado por inserción: ";
    imprimirArreglo(arreglo, N);
    return 0;
}
