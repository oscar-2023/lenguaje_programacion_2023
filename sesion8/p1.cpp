/*1. Escriba un programa que simule el juego de adivinar un número. El programa deberá
generar un número aleatorio entre 1 y 100 y pedirle al usuario que adivine cuál es. Si el
usuario ingresa un número incorrecto, el programa deberá indicarle si el número a adivinar
es mayor o menor al que ingresó. El juego termina cuando el usuario adivina el número
correcto.  se debe almacenar los intentos y el numero maximo de intentos es 5. cuando el usuario
exceda los intentos el aplicativo debe mostrar una alerta y terminar el programa.*/


#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;
int main() {
    
srand(static_cast<unsigned int>(time(nullptr)));

    
    int numeroSecreto = rand() % 100 + 1;

    
    const int MAX_INTENTOS = 5;

  
    int intentos = 0;
    int intento;

    cout << "¡Bienvenido al juego de adivinar un número entre 1 y 100!" << endl;

  
    while (intentos < MAX_INTENTOS) {
        cout << "Intento #" << intentos + 1 << " - Ingresa tu número: ";
        cin >> intento;

        
        if (intento == numeroSecreto) {
            cout << "¡Felicidades! Has adivinado el número correctamente en " << intentos + 1 << " intentos." << endl;
            break;
        } else {
            
            if (intento < numeroSecreto) {
                cout << "El número a adivinar es mayor." << endl;
            } else {
                cout << "El número a adivinar es menor." << endl;
            }
        }
        intentos++;
    }

    
    if (intentos == MAX_INTENTOS) {
        cout << "Lo siento, has llegado al limite de intentos permitidos. El número secreto era: " << numeroSecreto << endl;
    }

    return 0;
}    
