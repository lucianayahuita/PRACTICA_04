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
// Función para llenar un arreglo con números aleatorios
void llenarArregloAleatorio(int arreglo[], int N) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        arreglo[i] = rand() % 100;
    }
}
// Función para ordenar un arreglo por el método de burbuja
void ordenarPorBurbuja(int arreglo[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                intercambiar(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}
// Función para imprimir un arreglo
void imprimirArreglo(int arreglo[], int N) {
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}
int main() {
    int N;
    cout << "Ingrese el tamaño del arreglo: " << endl;
    cin >> N;
    int arreglo[N];
    llenarArregloAleatorio(arreglo, N);
    cout << "Arreglo desordenado: ";
    imprimirArreglo(arreglo, N);
    ordenarPorBurbuja(arreglo, N);
    cout << "Arreglo ordenado por burbuja: ";
    imprimirArreglo(arreglo, N);
    return 0;
}
