/*elaborar un programa que solicite un numero y determine si es primo , si el numero es primo debe guardarse en un 
arreglo de [10] repetir 10 veces usar punteros y funciones c++*/

#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

void guardarPrimo(int primo, int* arreglo, int& contador) {
    if (contador < 3) {
        arreglo[contador] = primo;
        contador++;
    }
}

int main() {
    int numerosPrimos[3];
    int contadorPrimos = 0;

    for (int i = 0; i < 3; ++i) {
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (esPrimo(numero)) {
            guardarPrimo(numero, numerosPrimos, contadorPrimos);
        }
    }

    cout << "Los numeros primos ingresados son:\n";
    for (int i = 0; i < contadorPrimos; ++i) {
        cout << numerosPrimos[i] << " ";
    }
    cout << endl;

    return 0;
}
