#include <iostream>
using namespace std;


double calcularSueldoSemanal(int horasTrabajadas) {
     int HORAS_REGULARES = 40;
     double PAGO_REGULAR = 20.0;
     double PAGO_EXTRA = 25.0;
     double sueldo = 0.0;

    if (horasTrabajadas <= HORAS_REGULARES) {
        sueldo = horasTrabajadas * PAGO_REGULAR;
    } else {
        sueldo = HORAS_REGULARES * PAGO_REGULAR + (horasTrabajadas - HORAS_REGULARES) * PAGO_EXTRA;
    }

    return sueldo;
}

int main() {
    int horasTrabajadas;

    
    cout << "Ingrese el número de horas trabajadas durante la semana: ";
    cin >> horasTrabajadas;

    
    double sueldo = calcularSueldoSemanal(horasTrabajadas);

    
    cout << "El sueldo semanal es: $" << sueldo << endl;

    return 0;
}