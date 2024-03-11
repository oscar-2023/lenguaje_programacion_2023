#include <iostream>
using namespace std;

class FormaGeometrica
{
public:
    virtual void dibujar() const = 0;
    virtual double calcular_area() const = 0;
};

class Cuadrado : public FormaGeometrica
{
private:
    double lado;

public:
    Cuadrado() : lado(0) {}
    Cuadrado(double l) : lado(l) {}

    void dibujar() const override
    {
        cout << "Dibujando un cuadrado" << endl;
    }

    double calcular_area() const override
    {
        return lado * lado;
    }
};

int main()
{
    Cuadrado cuadrado(5);

    cout << "Área del cuadrado: " << cuadrado.calcular_area() << endl;

    return 0;
}
