// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 10
// Problema planteado: Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por.
//• Por selección
//• Por inserción
//• Por el método burbuja
//• Por el método Shell
//• Por QuickSort
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Función para llenar el vector con números aleatorios
void llenarvectorrandom(int v[], int N) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        v[i] = rand() % 100;
    }
}
// Función para imprimir un vector
void impvector(int v[], int N) {
    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
// Función para ordenar por el método de selección
void OrdSeleccion(int v[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int minimo = i;
        for (int j = i + 1; j < N; j++) {
            if (v[j] < v[minimo]) {
                minimo = j;
            }
        }
        // Intercambiar v[i] y v[minimo]
        int temp = v[i];
        v[i] = v[minimo];
        v[minimo] = temp;
    }
}
// Función para ordenar por el método de inserción
void OrdInsercion(int v[], int N) {
    int posicion, aux;
    for (int i = 0; i < N; i++) {
        posicion = i;
        aux = v[i];
        while ((posicion > 0) && (v[posicion - 1] > aux)) {
            v[posicion] = v[posicion - 1];
            posicion--;
        }
        v[posicion] = aux;
    }
}
// Función para ordenar por el método de burbuja
void OrdBurbuja(int v[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}
// Función para ordenar por el método shell
void Shell(int v[], int N) {
    int brecha, i, j, temp;
    for (brecha = N / 2; brecha > 0; brecha /= 2) {
        for (i = brecha; i < N; i++) {
            temp = v[i];
            for (j = i; j >= brecha && v[j - brecha] > temp; j -= brecha) {
                v[j] = v[j - brecha];
            }
            v[j] = temp;
        }
    }
}
// Función para ordenar por el método Quicksort
void QuickSort(int v[], int izq, int der) {
    int i = izq, j = der;
    int temp;
    int pivote = v[(izq + der) / 2];
    while (i <= j) {
        while (v[i] < pivote) i++;
        while (v[j] > pivote) j--;
        if (i <= j) {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    if (izq < j) QuickSort(v, izq, j);
    if (i < der) QuickSort(v, i, der);
}
int main() {
    int N, op;
    cout << "Ingrese el tamano del vector" << endl;
    cin >> N;
    cout << "Ingrese mediante que metodo desea ordenar el vector:\n";
    cout << "1. Seleccion\n";
    cout << "2. Insercion\n";
    cout << "3. Burbuja\n";
    cout << "4. Shell\n";
    cout << "5. Quicksort\n";
    cin >> op;
    int v[N];
    // Llenar y mostrar el vector desordenado
    llenarvectorrandom(v, N);
    cout << "Vector desordenado: ";
    impvector(v, N);
    switch (op) {
        case 1:
            OrdSeleccion(v, N);
            break;
        case 2:
            OrdInsercion(v, N);
            break;
        case 3:
            OrdBurbuja(v, N);
            break;
        case 4:
            Shell(v, N);
            break;
        case 5:
            QuickSort(v, 0, N - 1);
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
    }
    // Mostrar el vector ordenado
    cout << "Vector ordenado: ";
    impvector(v, N);
    return 0;
}
