#include <iostream>
using namespace std;
// Interfaz Vehiculo
class Vehiculo {
public:
    virtual void acelerar() = 0;
    virtual void frenar() = 0;
};

// Clase Automovil que implementa la interfaz Vehiculo
class Automovil : public Vehiculo {
public:
    void acelerar() override {
        cout << "Automóvil acelerando..." << endl;
    }

    void frenar() override {
        cout << "Automóvil frenando..." << endl;
    }
};

int main() {
    Automovil auto1;
    auto1.acelerar();
    auto1.frenar();

    return 0;
}

