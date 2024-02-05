#include <iostream>
using namespace std;

int main() {
    // Declaración de variables , NA numero de alumnos, PA pago por alumno , TOT costo total
    int NA;
    double PA,TOT, pagoAutobuses;

    // Entrada de datos
    cout << "Ingrese el número de alumnos: ";
    cin >> NA;

    // Calcular el costo por alumno según la cantidad de alumnos
    if (NA >= 100) {
        PA = 65.0;
    } else if (NA >= 50 && NA <= 99) {
        PA = 75.0;
    } else if (NA >= 30 && NA <= 49) {
        PA = 95.0;
    } else {
        PA = 0.0;  // Para casos de menos de 30 alumnos
    }

    // Calcular el costo total del viaje
    TOT = NA * PA;

    // Calcular el costo de autobuses
    if (NA < 30) {
        pagoAutobuses = 4000.00;
    } else {
        pagoAutobuses = 0.0;  // No hay costo de autobuses si hay 30 o más alumnos
    }

    // Mostrar resultados
    cout << "El costo por alumno es: $" << PA << endl;
    cout << "El costo total del viaje es: $" << TOT << endl;
    cout << "El costo de autobuses es: $" <<pagoAutobuses << endl;

    return 0;
}
