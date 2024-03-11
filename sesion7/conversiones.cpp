#include <iostream>
using namespace std;

int main() {
    // Conversión implícita: de entero a flotante
    int entero = 5;
    float flotante = entero; // Conversión implícita de entero a flotante

    std::cout << "Conversión implícita: entero a flotante" << std::endl;
    std::cout << "Entero: " << entero << ", Flotante: " << flotante << std::endl;

    // Conversión explícita: de flotante a entero
    float flotante2 = 3.14;
    int entero2 = static_cast<int>(flotante2); // Conversión explícita de flotante a entero

    std::cout << "\nConversión explícita: flotante a entero" << std::endl;
    std::cout << "Flotante: " << flotante2 << ", Entero: " << entero2 << std::endl;

    return 0;
}

