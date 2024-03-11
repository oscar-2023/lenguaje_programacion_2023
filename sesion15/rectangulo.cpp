#include <iostream>
using namespace std;

class FormaGeometrica
{
public:
  virtual void dibujar() const = 0;
  virtual double calcular_area() const = 0
};

class Rectangulo : public FormaGeometrica
{
private:
  double base;
  double altura;

public:
  Rectangulo();
  Rectangulo(double 1, double a)
  {
    base = 1;
    altura = a;
  }

  void dibujar() const override
  {
    cout << "dibujando un rectangulo" << endl;
  }
  double calcular_area() const override
  {
    return base * altura
  }
};
