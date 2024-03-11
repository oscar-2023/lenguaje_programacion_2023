#include <iostream>
#include <cmath>
using namespace std;

class FormaGeometrica
{
public:
    virtual void dibujar() const = 0;
    virtual double calcular_area() const = 0;
};

class Triangulo : public FormaGeometrica
{
private:
    double lado1;
    double lado2;
    double lado3;

public:
    Triangulo() : lado1(0), lado2(0), lado3(0) {}
    Triangulo(double l1, double l2, double l3) : lado1(l1), lado2(l2), lado3(l3) {}

    void dibujar() const override
    {
        cout << "Dibujando un triángulo" << endl;
    }

    double calcular_area() const override
    {
        double s = (lado1 + lado2 + lado3) / 2.0;
        return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    }

    void tipo_triangulo() const
    {
        if (lado1 == lado2 && lado2 == lado3)
            cout << "El triángulo es equilátero." << endl;
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
            cout << "El triángulo es isósceles." << endl;
        else
            cout << "El triángulo es escaleno." << endl;
    }
};

int main()
{
    Triangulo triangulo(5, 5, 5);
    cout << "Área del triángulo: " << triangulo.calcular_area() << endl;
    triangulo.tipo_triangulo();

    Triangulo triangulo2(4, 4, 6);
    cout << "Área del triángulo: " << triangulo2.calcular_area() << endl;
    triangulo2.tipo_triangulo();

    Triangulo triangulo3(3, 4, 5);
    cout << "Área del triángulo: " << triangulo3.calcular_area() << endl;
    triangulo3.tipo_triangulo();

    return 0;
}
