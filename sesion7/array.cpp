#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int estudiantes = 10;
    vector<double> notas(10);

    cout << "Ingrese las notas de los 10 estudiantes:\n";

    for (int i = 0; i < 10; ++i) {
        do {
            cout << "Ingrese la nota del estudiante " << i + 1 << " (de 0 a 20): ";
            cin >> notas[i];

            // Validación del rango
            if (notas[i] < 0 || notas[i] > 20) {
                cout << "Error: La nota debe estar en el rango de 0 a 20. Intente de nuevo.\n";
            }
        } while (notas[i] < 0 || notas[i] > 20);
    }

    // Cálculo de la nota mínima
    double minimo = notas[0];
    for (int i = 1; i < 10; ++i) {
        if (notas[i] < minimo) {
            minimo = notas[i];
        }
    }

    // Cálculo del promedio
    double sumatoria = 0;
    for (int i = 0; i < 10; ++i) {
        sumatoria += notas[i];
    }
    double promedio = sumatoria / 10;

    // Ordenamiento de notas de mayor a menor
    sort(notas.rbegin(), notas.rend());

    // Mostrar resultados
    cout << "\nResultados:\n";
    cout << "Nota mínima: " << minimo << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Sumatoria de notas: " << sumatoria << endl;
    cout << "Notas ordenadas de mayor a menor:";

    for (int i = 0; i < 10; ++i) {
        cout << " " << notas[i];
    }

    return 0;
}
/*#include <iostream>
using namespace std;

int main(),,
{
    int numbers[5];
    int auxiliary;
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = i + 1;
    }
    int numbers2[] = {1, 2, 3, 4, 5};

    / swap elements #1 and #5 /
    auxiliary = numbers[0];  // 1
    numbers[0] = numbers[4]; // 5
    numbers[4] = auxiliary;  // 1
    cout << numbers[4] << endl;

    / swap elements #2 and #4 /
    auxiliary = numbers[1];  // 2
    numbers[1] = numbers[3]; // 4
    numbers[3] = auxiliary;  // 2
    cout << numbers[3] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i];
    }

        auxiliary = numbers2[i];
        numbers2[i] = numbers2[n];
        numbers2[n] = auxiliary;
    }
    cout << endl<<"2da forma"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << numbers2[i];
    }
    return 0;
}*/