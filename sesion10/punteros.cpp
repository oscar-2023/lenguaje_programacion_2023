#include <iostream>
#include <string>
using namespace std;

float calcularPromedio(float* notas, int cantidad) {
    float suma = 0;

    // Iterar sobre las notas utilizando punteros
    for (int i = 0; i < cantidad; ++i) {
        suma += *(notas + i); // Se accede a cada nota usando punteros
    }
    
    if (cantidad != 0) {
        return suma / cantidad;
    } else {
        return 0; // Devuelve 0 si no hay notas para evitar la división por cero
    }
}

int main() {
    int cantidadNotas = 10;
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
}
