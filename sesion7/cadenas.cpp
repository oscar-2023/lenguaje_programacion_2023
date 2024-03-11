#include <iostream>
#include <string>

using namespace std; // Esto permite usar los elementos de la biblioteca estándar sin escribir std:: delante de cada uno

int main() {
    // Declaración e inicialización de una cadena
    string miCadena = "Hola, mundo!";

    // Impresión de la cadena
    cout << "Contenido de la cadena: " << miCadena << endl;

    // Obtener la longitud de la cadena
    cout << "Longitud de la cadena: " << miCadena.length() << endl;

    // Acceder a caracteres individuales de la cadena
    cout << "Primer carácter: " << miCadena[0] << endl;
    cout << "Último carácter: " << miCadena[miCadena.length() - 1] << endl;

    // Concatenación de cadenas
    string otraCadena = "¡Adiós!";
    miCadena += " ";
    miCadena += otraCadena;
    cout << "Cadena concatenada: " << miCadena << endl;

    // Comparación de cadenas
    string cadena1 = "hola";
    string cadena2 = "Hola";
    if (cadena1 == cadena2) {
        cout << "Las cadenas son iguales." << endl;
    } else {
        cout << "Las cadenas son diferentes." << endl;
    }

    // Acceso a subcadenas
    string subcadena = miCadena.substr(6, 5); // Subcadena desde el índice 6 con longitud 5
    cout << "Subcadena: " << subcadena << endl;

    return 0;
}

