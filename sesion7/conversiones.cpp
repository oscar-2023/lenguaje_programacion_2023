#include <iostream>
using namespace std;

int main() {
    // Conversión implícita: de entero a flotante
    int entero = 5;
    float flotante = entero; // Conversión implícita de entero a flotante

    cout << "Conversión implícita: entero a flotante" << endl;
    cout << "Entero: " << entero << ", Flotante: " << flotante << endl;

    // Conversión explícita: de flotante a entero
    float flotante2 = 3.14;
    int entero2 = static_cast<int>(flotante2); // Conversión explícita de flotante a entero

    cout << "\nConversión explícita: flotante a entero" << endl;
    cout << "Flotante: " << flotante2 << ", Entero: " << entero2 << endl;

    return 0;
}

