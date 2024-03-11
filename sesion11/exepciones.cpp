#include <iostream>
using namespace std;
int main() {
    int divisor = 0;
    int dividendo = 10;

    try {
        if (divisor == 0) {
            throw "División por cero"; // Lanza una excepción de tipo const char*
        }
        int resultado = dividendo / divisor;
        cout << "Resultado: " << resultado << endl;
    } catch (const char* mensaje) {
        cerr << "Excepción atrapada: " << mensaje << endl;
    }

    return 0;
}
