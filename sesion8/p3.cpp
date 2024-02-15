/*3. Hacer un programa para ayudar a un trabajador a saber cuál será su sueldo semanal (funcion), se sabe que, si trabaja 40 horas o menos,
se le pagará $20 por hora, pero si trabaja más de 40 horas entonces las horas extras se le pagarán a $25 por hora.*/


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
