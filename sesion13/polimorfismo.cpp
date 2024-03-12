#include <iostream>
#include <string>

using namespace std;

// Clase base Animal
class Animal {
public:
    // Función virtual
    virtual void hacerSonido() const {
        cout << "Un animal hace un sonido." << endl;
    }
};

// Clase derivada Mamifero
class Mamifero : public Animal {
public:
    // Sobrescribe la función virtual
    void hacerSonido() const override {
        cout << "Un mamífero hace un sonido." << endl;
    }
};

// Clase derivada Ave
class Ave : public Animal {
public:
    // Sobrescribe la función virtual
    void hacerSonido() const override {
        cout << "Un ave hace un sonido." << endl;
    }
};

int main() {
    // Crear objetos de las clases derivadas
    Animal* perro = new Mamifero();
    Animal* pajaro = new Ave();

    // Llamar a la función hacerSonido() de manera polimórfica
    perro->hacerSonido();  // Llama a hacerSonido() de Mamifero
    pajaro->hacerSonido(); // Llama a hacerSonido() de Ave

    // Liberar la memoria asignada dinámicamente
    delete perro;
    delete pajaro;

    return 0;
}

