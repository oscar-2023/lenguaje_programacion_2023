#include <iostream>
using namespace std;

// Función sobrecargada para sumar dos enteros
int sumar(int a, int b)
{
    return a + b;
}

// Función sobrecargada para sumar dos números flotantes
float sumar(float a, float b)
{
    return a + b;
}
// Función sobrecargada para concatenar dos cadenas de texto
string concatenar(string a, string b)
{
    return a + b;
}
int main()
{
    int resultado_entero = sumar(5, 3);
    cout << "Suma de enteros: " << resultado_entero << endl;

    float resultado_flotante = sumar(3.5f, 2.5f);
    cout << "Suma de flotantes: " << resultado_flotante << endl;

    string resultado_cadena = concatenar("Hola, ", "Mundo!");
    cout << "Concatenación de cadenas: " << resultado_cadena << endl;

    return 0;
}
