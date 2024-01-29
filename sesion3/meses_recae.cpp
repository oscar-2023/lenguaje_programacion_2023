#include <iostream>
using namespace std;

void calcularAniosMesesDias(int totalDias, int &anios, int &meses, int &dias, string &nombreMes) {
    const int diasPorAnio = 365;
    const int diasPorMes = 30;

    anios = totalDias / diasPorAnio;
    int diasRestantes = totalDias % diasPorAnio;

    meses = diasRestantes / diasPorMes;
    dias = diasRestantes % diasPorMes;

    // Determinar el mes correspondiente
    switch (meses) {
        case 0:
            nombreMes = "Enero";
            break;
        case 1:
            nombreMes = "Febrero";
            break;
        case 2:
            nombreMes = "Marzo";
            break;
        case 3:
            nombreMes = "abril";
            break;   
        case 4:
            nombreMes = "mayo";
            break;   
        case 5:
            nombreMes = "junio";
            break;   
        case 6:
            nombreMes = "julio";
            break;   
        case 7:
            nombreMes = "agosto";
            break;   
        case 8:
            nombreMes = "setiembre";
            break;   
        case 9:
            nombreMes = "octubre";
            break;   
        case 10:
            nombreMes = "noviembre";
            break;   
        case 11:
            nombreMes = "diciembre";
            break;                                   
        
        default:
            nombreMes = "Mes no válido";
            break;
    }
}

int main() {
    int totalDias, anios, meses, dias;
    string nombreMes;

    // Obtener el número total de días
    cout << "Ingrese el número total de días: ";
    cin >> totalDias;

    // Calcular años, meses y días
    calcularAniosMesesDias(totalDias, anios, meses, dias, nombreMes);

    // Mostrar los resultados
    cout << totalDias << " días corresponden a: "
              << anios << " años, "
              << meses << " meses, "
              << dias << " días. El mes es: "
              << nombreMes << endl;

    return 0;
}
