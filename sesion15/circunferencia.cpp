#include <iostream>
using namespace std;

const double PI = 3.14;

class FormaGeometrica
{
public:
    virtual void dibujar() const = 0;
    virtual double calcular_area() const = 0;
};

class Circunferencia : public FormaGeometrica
{
private:
    double radio;

public:
    Circunferencia() : radio(0) {}
    Circunferencia(double r) : radio(r) {}

    void dibujar() const override
    {
        cout << "Dibujando una circunferencia" << endl;
    }

    double calcular_area() const override
    {
        return PI * radio * radio;
    }
};