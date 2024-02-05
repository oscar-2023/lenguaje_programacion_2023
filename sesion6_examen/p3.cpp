//elaborar un programa que el incentivo que recibira un operario a lo largo de su semana laboral (lunes a sabado), 
//se conoce que la produccion es minima es 100 unidades
#include <iostream>
using namespace std;
int main() {
     int produccionMinimaDiaria = 100;
     int incentivoPorUnidad = 10;
     int diasLaborables = 6; //lunes a sabado // declaracion de variables

    int produccionDiaria;
    int incentivoTotal = 0;
// inicializacion , condicion de dias laborales que son 6 dias de lunes a sabado
    
    for (int i = 0; i < diasLaborables; ++i) {
        cout << "Ingrese la producción para el día " << i + 1 << ": ";
        cin >> produccionDiaria;
//comparar la produccionMinimaDiaria
        
        if (produccionDiaria >= produccionMinimaDiaria) {
            incentivoTotal += produccionDiaria * incentivoPorUnidad;
        } else {
            cout << "La producción no alcanza el mínimo requerido." << endl;
        }
    }
//mostrar en pantalla
    
    cout << "El incentivo total para la semana es: $" << incentivoTotal << endl;

    return 0;
}
