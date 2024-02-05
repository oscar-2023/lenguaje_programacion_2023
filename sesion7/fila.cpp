#include <iostream>

using namespace std;

int main() {
    const int NUM_ALUMNOS = 4;
    const int NUM_NOTAS = 3;

    // Definir un array multidimensional para almacenar las notas de los alumnos
    double notas[NUM_ALUMNOS][NUM_NOTAS];

    // Solicitar las notas de los alumnos
    for (int i = 0; i < NUM_ALUMNOS; ++i) {
        cout << "Ingrese las notas del alumno " << i + 1 << ":" << endl;
        for (int j = 0; j < NUM_NOTAS; ++j) {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    // Calcular el promedio de cada alumno
    double promedios[NUM_ALUMNOS];
    for (int i = 0; i < NUM_ALUMNOS; ++i) {
        double suma = 0.0;
        for (int j = 0; j < NUM_NOTAS; ++j) {
            suma += notas[i][j];
        }
        promedios[i] = suma / NUM_NOTAS;
    }

    // Mostrar el promedio de cada alumno
    cout << "Promedios de los alumnos:" << endl;
    for (int i = 0; i < NUM_ALUMNOS; ++i) {
        cout << "Alumno " << i + 1 << ": " << promedios[i] << endl;
    }

    return 0;
}
