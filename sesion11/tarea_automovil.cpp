#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura Automovil
struct Automovil {
    string marca;
    string modelo;
    string color;
    int velocidadMaxima;
    int cantidadPasajeros;
};

// Función para cambiar las características del automóvil
void cambiarCaracteristicas(Automovil& autoRef) {
    cout << "Ingrese el nuevo color: ";
    cin >> autoRef.color;
    
    cout << "Ingrese la nueva velocidad máxima: ";
    cin >> autoRef.velocidadMaxima;
    
    cout << "Ingrese la nueva cantidad de pasajeros: ";
    cin >> autoRef.cantidadPasajeros;
}

int main() {
    const int cantidadAutomoviles = 5;
    Automovil autos[cantidadAutomoviles];

    // Registro de información de los automóviles
    for (int i = 0; i < cantidadAutomoviles; ++i) {
        cout << "Automovil " << i + 1 << ":" << endl;
        cout << "Marca: ";
        cin >> autos[i].marca;
        cout << "Modelo: ";
        cin >> autos[i].modelo;
        cout << "Color: ";
        cin >> autos[i].color;
        cout << "Velocidad máxima: ";
        cin >> autos[i].velocidadMaxima;
        cout << "Cantidad de pasajeros: ";
        cin >> autos[i].cantidadPasajeros;
    }

    // Cambiar características de un automóvil
    int indiceAutomovil;
    cout << "Ingrese el número del automóvil cuyas características desea cambiar (1-5): ";
    cin >> indiceAutomovil;
    
    if (indiceAutomovil >= 1 && indiceAutomovil <= cantidadAutomoviles) {
        cambiarCaracteristicas(autos[indiceAutomovil - 1]);
        cout << "Características actualizadas correctamente." << endl;
    } else {
        cout << "Número de automóvil inválido." << endl;
    }

    return 0;
}
