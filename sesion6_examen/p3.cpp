//elaborar un programa que el incentivo que recibira un operario a lo largo de su semana laboral (lunes a sabado), 
//se conoce que la produccion es minima es 100 unidades
#include <iostream>
using namespace std;
int main() {
    const int produccionMinimaDiaria = 100;
    const int incentivoPorUnidad = 10;
    const int diasLaborables = 6; //lunes a sabado

    int produccionDiaria;
    int incentivoTotal = 0;

    
    for (int i = 0; i < diasLaborables; ++i) {
        cout << "Ingrese la producción para el día " << i + 1 << ": ";
        cin >> produccionDiaria;

        
        if (produccionDiaria >= produccionMinimaDiaria) {
            incentivoTotal += produccionDiaria * incentivoPorUnidad;
        } else {
            cout << "La producción no alcanza el mínimo requerido." << endl;
        }
    }

    
    cout << "El incentivo total para la semana es: $" << incentivoTotal << endl;

    return 0;
}
