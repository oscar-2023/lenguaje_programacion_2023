//elaborar un programa que solicite el numero de respuestas de un postulante por cada respuesta correcta se incrementa sun puntaje en 4 por cada respuesta incorrecta -2
//y por cada respuesta en blanco 0 ;se pide calcular el puntaje total del postulante de una prueba de 20 preguntas.
#include <iostream>
using namespace std;

int main() {
    const int totalPreguntas = 20;
    int puntaje = 0;

    for (int i = 1; i <= totalPreguntas; ++i) {
        char respuesta;
        cout << "Ingrese la respuesta (C: correcta, I: incorrecta, B: en blanco) para la pregunta " << i << ": ";
        cin >> respuesta;

        
        switch (respuesta) {
            case 'C':
            case 'c':
                puntaje += 4;
                break;

            case 'I':
            case 'i':
                puntaje -= 2;
                break;
            
            case 'B':
            case 'b':
                break;

            default:
                cout << "Respuesta no válida. Se considerará como en blanco.\n";
                break;
        }
    }

    cout << "El puntaje total del postulante es: " << puntaje << endl;

    return 0;
}
