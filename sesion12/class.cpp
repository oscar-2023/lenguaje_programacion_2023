#include <iostream>
using namespace std;

class Rectangulo {
private:
    float largo, ancho;
  
public:
    Rectangulo(float, float);
    void perimetro();
    void area();
};

Rectangulo::Rectangulo(float _largo, float _ancho) {
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo::perimetro() {
    float _perimetro;

    _perimetro = 2 * (largo + ancho);
    cout << "El perimetro es: " << _perimetro << endl;
}

void Rectangulo::area() {
    float _area;

    _area = largo * ancho;
    cout << "El area es: " << _area << endl;
}

int main() {
    Rectangulo r1(11, 7);

    r1.perimetro();
    r1.area();
    // system("pause"); // Esta línea no es necesaria en la mayoría de los entornos modernos
    return 0;
}
