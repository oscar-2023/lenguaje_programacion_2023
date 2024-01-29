// los primeros 20 multiplos de un numero aleatorio

#include <iostream>
using namespace std;
int main()
{
    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número: ";
    int numero;
    cin >> numero;

    // Verificar si el número ingresado es válido (mayor que 0)
    if (numero <= 0)
    {
        cout << "Número inválido. Debe ser mayor que 0." << endl;
        return 1; // Salir del programa con código de error
    }

    // Imprimir los primeros 20 múltiplos del número ingresado
    for (int i = 1; i <= 20; ++i)
    {
        cout << "Múltiplo " << i << ": " << numero * i << endl;
    }

    return 0;
}
