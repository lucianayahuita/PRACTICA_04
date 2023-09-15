#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Función para intercambiar dos elementos en un arreglo
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
// Función para llenar un vector con números aleatorios
void llenarVectorAleatorio(int v[], int N) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        v[i] = rand() % 100;
    }
}
// Función para ordenar un vector utilizando el método de selección
void ordenarPorSeleccion(int v[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int minimo = i;
        for (int j = i + 1; j < N; j++) {
            if (v[j] < v[minimo]) {
                minimo = j;
            }
        }
        intercambiar(v[i], v[minimo]);
    }
}
// Función para imprimir un vector
void imprimirVector(int v[], int N) {
    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    int N;
    cout << "Ingrese el tamaño del vector: " << endl;
    cin >> N;
    int vectorDesordenado[N];
    llenarVectorAleatorio(vectorDesordenado, N);
    cout << "Vector desordenado: ";
    imprimirVector(vectorDesordenado, N);
    ordenarPorSeleccion(vectorDesordenado, N);
    cout << "Vector ordenado: ";
    imprimirVector(vectorDesordenado, N);
    return 0;
}
