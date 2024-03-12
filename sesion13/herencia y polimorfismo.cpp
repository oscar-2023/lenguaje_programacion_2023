#include <iostream>
#include <string>

// Clase base Animal
class Animal {
public:
    virtual void hacerSonido() const {
        std::cout << "Un animal hace un sonido." << std::endl;
    }
};

// Clase derivada Mamifero
class Mamifero : public Animal {
public:
    void hacerSonido() const override {
        std::cout << "Un mamífero hace un sonido." << std::endl;
    }
};

// Clase derivada Ave
class Ave : public Animal {
public:
    void hacerSonido() const override {
        std::cout << "Un ave hace un sonido." << std::endl;
    }
};

// Clase que hereda de Mamifero y Ave
class Murcielago : public Mamifero, public Ave {
public:
    void hacerSonido() const override {
        std::cout << "Un murciélago hace un sonido." << std::endl;
    }
};

int main() {
    // Herencia simple
    Mamifero perro;
    Ave pajaro;

    perro.hacerSonido(); // Muestra: Un mamífero hace un sonido.
    pajaro.hacerSonido(); // Muestra: Un ave hace un sonido.

    std::cout << std::endl;

    // Herencia múltiple
    Murcielago murcielago;

    // Acceso a ambas interfaces de Mamifero y Ave
    murcielago.Mamifero::hacerSonido(); // Muestra: Un mamífero hace un sonido.
    murcielago.Ave::hacerSonido(); // Muestra: Un ave hace un sonido.

    // Acceso al método de Murcielago
    murcielago.hacerSonido(); // Muestra: Un murciélago hace un sonido.

    return 0;
}

