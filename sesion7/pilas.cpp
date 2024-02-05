#include <iostream>
#include <stack>
#include <algorithm> // Para la función sort
#include <cstdlib>   // Para generar números aleatorios
#include <ctime>     // Para obtener la semilla de tiempo

using namespace std;

char nota_a_letra(int nota) {
    if (nota >= 18) {
        return 'A';
    } else if (nota >= 15) {
        return 'B';
    } else if (nota >= 12) {
        return 'C';
    } else if (nota >= 10) {
        return 'D';
    } else if (nota >= 6) {
        return 'E';
    } else {
        return 'F';
    }
}

int main() {
    stack<char> pila_notas;
    srand(time(0)); // Semilla de tiempo para obtener números aleatorios diferentes cada vez

    cout << "Ingrese 6 notas aleatorias en el rango de 0 a 20:" << endl;
    for (int i = 0; i < 6; ++i) {
        int nota;
        cout << "Nota " << i + 1 << ": ";
        cin >> nota;
        pila_notas.push(nota_a_letra(nota));
    }

    // Ordenar las notas de mayor a menor
    stack<char> pila_notas_ordenadas;
    while (!pila_notas.empty()) {
        char nota = pila_notas.top();
        pila_notas.pop();
        while (!pila_notas_ordenadas.empty() && pila_notas_ordenadas.top() < nota) {
            pila_notas.push(pila_notas_ordenadas.top());
            pila_notas_ordenadas.pop();
        }
        pila_notas_ordenadas.push(nota);
    }

    // Mostrar las notas ordenadas y clasificadas en letras
    cout << "Notas ordenadas de mayor a menor y clasificadas en letras:" << endl;
    while (!pila_notas_ordenadas.empty()) {
        cout << pila_notas_ordenadas.top() << " ";
        pila_notas_ordenadas.pop();
    }
    cout << endl;

    return 0;
}
