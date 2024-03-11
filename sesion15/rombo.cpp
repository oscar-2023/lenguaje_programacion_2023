#include <iostream>
#include <cmath>
using namespace std;

class FormaGeometrica
{
public:
    virtual void dibujar() const = 0;
    virtual double calcular_area() const = 0;
};

class Rombo : public FormaGeometrica
{
private:
    double diagonalMayor;
    double diagonalMenor;

public:
    Rombo() : diagonalMayor(0), diagonalMenor(0) {}
    Rombo(double dm, double dM) : diagonalMayor(dM), diagonalMenor(dm) {}

    void dibujar() const override
    {
        cout << "Dibujando un rombo" << endl;
    }

    double calcular_area() const override
    {
        return (diagonalMayor * diagonalMenor) / 2.0;
    }

    void tipo_rombo() const
    {
        if (diagonalMayor == diagonalMenor)
            cout << "El rombo es equilátero." << endl;
        else
            cout << "El rombo no es equilátero." << endl;
    }
};

int main()
{
    Rombo rombo(4, 6);
    cout << "Área del rombo: " << rombo.calcular_area() << endl;
    rombo.tipo_rombo();

    return 0;
}
