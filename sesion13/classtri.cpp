/*#include <iostream>
#include <cmath>
using namespace std;

class Triangulo {
private:
    float lado1, lado2, lado3;

public:
    Triangulo(float, float, float);
    void perimetro();
    void area();
    string tipoTriangulo();
};

Triangulo::Triangulo(float _lado1, float _lado2, float _lado3) {
    lado1 = _lado1;
    lado2 = _lado2;
    lado3 = _lado3;
}

void Triangulo::perimetro() {
    float _perimetro;

    _perimetro = lado1 + lado2 + lado3;
    cout << "El perimetro es: " << _perimetro << endl;
}

void Triangulo::area() {
    float _s, _area;

    // Calculamos el semiperímetro
    _s = (lado1+lado2+lado3) / 2;


    // Aplicamos la fórmula de Herón para el área
    _area = sqrt(_s * (_s - lado1) * (_s - lado2) * (_s - lado3));

    cout << "El area es: " << _area << endl;
}

string Triangulo::tipoTriangulo() {
    if (lado1 == lado2 && lado2 == lado3) {
        return "Equilatero";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        return "Isosceles";
    } else {
        return "Escaleno";
    }
}

int main() {
    Triangulo t1(5, 5, 5);

    t1.perimetro();
    t1.area();
    cout << "El triangulo es: " << t1.tipoTriangulo() << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

// Definición de la clase CuentaBancaria
class CuentaBancaria {
private:
    string titular;
    string numeroCuenta;
    double saldo;

public:
    // Constructor
    CuentaBancaria(string titular, string numeroCuenta, double saldoInicial) {
        this->titular = titular;
        this->numeroCuenta = numeroCuenta;
        this->saldo = saldoInicial;
    }

    // Método para depositar dinero en la cuenta
    void depositar(double cantidad) {
        saldo += cantidad;
        cout << "Se depositaron $" << cantidad << " en la cuenta." << endl;
    }

    // Método para retirar dinero de la cuenta
    void retirar(double cantidad) {
        if (saldo >= cantidad) {
            saldo -= cantidad;
            cout << "Se retiraron $" << cantidad << " de la cuenta." << endl;
        } else {
            cout << "No hay suficiente saldo en la cuenta para realizar la operación." << endl;
        }
    }

    // Método para mostrar la información de la cuenta
    void mostrarInformacion() {
        cout << "Titular de la cuenta: " << titular << endl;
        cout << "Número de cuenta: " << numeroCuenta << endl;
        cout << "Saldo disponible: $" << saldo << endl;
    }
};

int main() {
    // Creación de un objeto de tipo CuentaBancaria
    CuentaBancaria cuenta("Juan Perez", "123456789", 1000.0);

    // Mostrar información de la cuenta
    cout << "Información de la cuenta bancaria:" << endl;
    cuenta.mostrarInformacion();
    cout << endl;

    // Realizar operaciones en la cuenta
    cuenta.depositar(500.0);
    cuenta.retirar(200.0);
    cuenta.retirar(1500.0); // Intentar retirar más dinero del disponible

    // Mostrar información de la cuenta después de las operaciones
    cout << "\nInformación de la cuenta bancaria después de las operaciones:" << endl;
    cuenta.mostrarInformacion();

    return 0;
}*/
#include <iostream>
#include <string>
#include "carro.cpp"
using namespace std;

int main(){

    CarroVan  carro_van(1,16,"1500 cc","2.0 petrolero",1,"Van",2024,"Rosa","Hyundai");
    cout<<carro_van.getModelo();
    cout<<carro_van.getAñoFabricacion();
    
    return 0;
}


