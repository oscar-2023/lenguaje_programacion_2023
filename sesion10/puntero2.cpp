#include <iostream>
#include <string>
using namespace std;

int main() {
    int notas[10];
    int *puntero_notas;

    puntero_notas = notas;

    cout << "Ingrese las notas" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> *(puntero_notas + i); // Se utiliza el puntero para acceder a cada posición del arreglo
    }

    // Calcular el promedio
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        suma += *(puntero_notas + i);
    }
    float promedio = suma / 10.0; // Se utiliza 10.0 para la división para obtener un resultado decimal

    cout << "El promedio de las notas es: " << promedio << endl;

    return 0;
}
