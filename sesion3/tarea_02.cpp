#include<iostream>
using namespace std;

int main() {
    int numero;
    bool esPrimo = true;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i * i <= numero; ++i) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}





  
