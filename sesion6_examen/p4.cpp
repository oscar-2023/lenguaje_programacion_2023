//elaborar un programa que calcule el area de un triangulo conociendo sus 3 lados e identifique que tipo de triangulo es

#include <iostream>
#include <cmath> // Para la función sqrt
using namespace std;
int main() {
    // Declaración de variables
    double lado1, lado2, lado3, s, area;// la "s" es el semiperimetro

    // Solicitar al usuario ingresar las longitudes de los lados del triángulo
    cout << "Ingrese la longitud del lado 1 del triángulo: ";
    cin >> lado1;

    cout << "Ingrese la longitud del lado 2 del triángulo: ";
    cin >> lado2;

    cout << "Ingrese la longitud del lado 3 del triángulo: ";
    cin >> lado3;

    // Verificar validez de los lados para formar un triángulo
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        // Cálculo del semiperímetro
        s = (lado1 + lado2 + lado3) / 2;

        // Cálculo del área usando la fórmula de Herón
        area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));

        // Identificación del tipo de triángulo
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El triángulo es equilátero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "El triángulo es isósceles." << endl;
        } else {
            cout << "El triángulo es escaleno." << endl;
        }

        // Mostrar el área calculada
        cout << "El área del triángulo es: " << area << endl;
    } else {
        cout << "Los lados ingresados no forman un triángulo válido." << endl;
    }

    return 0;
}


