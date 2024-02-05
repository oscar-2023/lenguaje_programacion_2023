//elaborar un programa que permita calcular el puntaje de un equipo de fitbol luego de 20 partidos , por cada partido 
//ganado el puntaje se incrementa en 3 puntos y por cada patido empatado 1 punto y por cada partido perdido 0 puntos
#include <iostream>
using namespace std ;

int main() {
    int puntaje = 0;  //declaracion de variables

    for (int partido = 1; partido <= 20; ++partido) {
        char resultado;
       // entrada de datos
        cout << "Ingrese el resultado del partido " << partido << " (G para ganado, E para empatado, P para perdido): ";
        cin >> resultado;
    // para cada caso segun la descripcion de las condiones de puntaje 
        switch (resultado) {
            case 'G':
            case 'g':
                puntaje += 3;
                break;
            case 'E':
            case 'e':
                puntaje += 1;
                break;
            case 'P':
            case 'p':
                
                break;
            default:
                cout << "Entrada no válida. Por favor, ingrese G, E o P." << endl;
                --partido;  
        }
    }
    //mostrar 
    cout << "El puntaje total del equipo es: " << puntaje << " puntos." << endl;

    return 0;
}
