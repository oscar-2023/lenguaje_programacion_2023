//elaborar un programa que solicite el numero de respuestas de un postulante por cada respuesta correcta se incrementa sun puntaje en 4 por cada respuesta incorrecta -2
//y por cada respuesta en blanco 0 ;se pide calcular el puntaje total del postulante de una prueba de 20 preguntas.
#include <iostream>
using namespace std;
int main() {
    int totalPreguntas = 20;
    int puntaje = 0;
// inicia en 1 , condion menor igual +1
    for (int i = 1; i <= totalPreguntas; ++i) {
        char respuesta;
        //entrada de datos
        cout << "Ingrese la respuesta (C: correcta, I: incorrecta, B: en blanco) para la pregunta " << i << ": ";
        cin >> respuesta;

         // casos segun la condicon
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
 //mostrar en patalla
    cout << "El puntaje total del postulante es: " << puntaje << endl;

    return 0;
}
