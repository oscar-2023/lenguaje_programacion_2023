#include <iostream>
using namespace std;

class Calculadora {
public:
    // Método para sumar dos enteros
    int sumar(int a, int b) {
        return a + b;
    }

    // Método para sumar tres enteros
    int sumar(int a, int b, int c) {
        return a + b + c;
    }

    // Método para sumar dos números flotantes
    float sumar(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculadora calc;

    // Llamadas a los métodos sobrecargados
    cout << "Suma de 5 + 3 = " << calc.sumar(5, 3) << endl;
    cout << "Suma de 5 + 3 + 2 = " << calc.sumar(5, 3, 2) << endl;
    cout << "Suma de 5.5 + 3.7 = " << calc.sumar(5.5f, 3.7f) << endl;

    return 0;
}
