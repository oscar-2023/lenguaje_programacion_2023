/*#include <iostream>
#include <string>
using namespace std;

float calcularPromedio(float* notas, int cantidad) {
    float suma = 0;

    // Iterar sobre las notas utilizando punteros
    for (int i = 0; i < cantidad; ++i) {
        suma += *(notas + i); // Se accede a cada nota usando punteros
    }

    }
    return suma / cantidad;
}

int main() {
    const int cantidadNotas = 10;
    float notas[cantidadNotas];
    float* ptrNotas = notas; // Definir un puntero para acceder a las notas

    // Solicitar al usuario que ingrese las notas
    cout << "Ingrese las 10 notas:" << endl;
    for (int i = 0; i < cantidadNotas; ++i) {
        cout << "Nota " << i + 1 << ": ";
        cin >> *(ptrNotas + i); // Guardar cada nota en el arreglo utilizando punteros
    }

    // Calcular el promedio utilizando la función calcularPromedio
    float promedio = calcularPromedio(ptrNotas, cantidadNotas);

    // Mostrar el resultado al usuario
    cout << "El promedio de las notas es: " << promedio << endl;

    return 0;
}*/


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
