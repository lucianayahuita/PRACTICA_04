#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Funci�n para intercambiar dos elementos en un arreglo
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
// Funci�n para llenar un vector con n�meros aleatorios
void llenarVectorAleatorio(int v[], int N) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        v[i] = rand() % 100;
    }
}
// Funci�n para ordenar un vector utilizando el m�todo de selecci�n
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
// Funci�n para imprimir un vector
void imprimirVector(int v[], int N) {
    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    int N;
    cout << "Ingrese el tama�o del vector: " << endl;
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
