/*#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // Arrays para almacenar los nombres de los meses y la cantidad de días por mes
    std::string nombresMeses[] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", 
                                   "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Solicitar al usuario que ingrese el nombre del mes
    std::cout << "Ingrese el nombre del mes (en minúsculas): ";
    std::string nombreMes;
    std::cin >> nombreMes;

    // Convertir el nombre del mes a minúsculas para hacer la búsqueda insensible a mayúsculas
    std::transform(nombreMes.begin(), nombreMes.end(), nombreMes.begin(), ::tolower);

    // Buscar el índice del mes ingresado en el array de nombresMeses
    auto it = std::find(std::begin(nombresMeses), std::end(nombresMeses), nombreMes);
    if (it != std::end(nombresMeses)) {
        // Calcular y mostrar la cantidad de días del mes ingresado
        int indiceMes = std::distance(std::begin(nombresMeses), it);
        int dias = diasPorMes[indiceMes];
        std::cout << "El mes de " << nombreMes << " tiene " << dias << " días." << std::endl;
    } else {
        std::cout << "Nombre de mes no válido." << std::endl;
    }

    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;


int main() {
    // Arrays para almacenar los nombres de los meses y la cantidad de días por mes
    string nombresMeses[] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", 
                                   "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Solicitar al usuario que ingrese el nombre del mes
    cout << "Ingrese el nombre del mes: ";
    string nombreMes;
    cin >> nombreMes;

    // Buscar el índice del mes ingresado en el array de nombresMeses (sin convertir a minúsculas)
    int indiceMes = -1;
    for (int i = 0; i < sizeof(nombresMeses) / sizeof(nombresMeses[0]); ++i) {
        if (nombreMes == nombresMeses[i]) {
            indiceMes = i;
            break;
        }
    }

    if (indiceMes != -1) {
        // Calcular y mostrar la cantidad de días del mes ingresado
        int dias = diasPorMes[indiceMes];
        cout << "El mes de " << nombreMes << " tiene " << dias << " días." << endl;
    } else {
        cout << "Nombre de mes no válido." << endl;
    }

    return 0;
}

