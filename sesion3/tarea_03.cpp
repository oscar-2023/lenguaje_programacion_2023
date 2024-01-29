#include <iostream>
using namespace std;

double convertirKmhAMps(double velocidadKmh) {
    // 1 kilómetro = 1000 metros, 1 hora = 3600 segundos ojitoooo
    return velocidadKmh * 1000 / 3600;
}

int main() {
    double velocidadKmh;

    cout << "Ingrese la velocidad del automóvil en kilómetros por hora: ";
    cin >> velocidadKmh;

    double velocidadMps = convertirKmhAMps(velocidadKmh);

    cout << "La velocidad del automóvil es: " << velocidadMps << " metros por segundo." << endl;

    return 0;
}
