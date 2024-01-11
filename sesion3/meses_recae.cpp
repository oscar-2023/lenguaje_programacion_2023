#include <iostream>
using namespace std;

void calcularAniosMesesDias(int totalDias, int &anios, int &meses, int &dias, std::string &nombreMes) {
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
        // Agregar casos para los demás meses
        // ...
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
              << nombreMes << std::endl;

    return 0;
}
