#include <iostream>
#include <string>

using namespace std;

struct Alumno
{
    string nombre;
    
    int edad;
    float notas[3];
    float promedio;
};

bool esMayorDeEdad(Alumno &alumno)
{
    return alumno.edad >= 18;
}

void calcularPromedio(Alumno &alumno)
{
    float suma = 0;
    for (int i = 0; i < 3; ++i)
    {
        suma += alumno.notas[i];
    }
    alumno.promedio = suma / 3;
}

bool aprobo(Alumno &alumno)
{
    return alumno.promedio >= 11.0;
}

int main()
{
    Alumno alumnos[2];

    for (int i = 0; i < 2; ++i)
    {
        cout << "Ingrese datos del alumno " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin >> ws, alumnos[i].nombre);
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cout << "Ingrese las tres notas del alumno " << alumnos[i].nombre << ":" << endl;
        for (int j = 0; j < 3; ++j)
        {
            cout << "Nota " << j + 1 << ": ";
            cin >> alumnos[i].notas[j];
        }
        cin.ignore();

        calcularPromedio(alumnos[i]);
        cout << endl;
    }

    for (int i = 0; i < 2; ++i)
    {
        cout << "\nDatos del alumno " << i + 1 << ":" << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;  
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Promedio: " << alumnos[i].promedio << endl;
        cout << "¿Es mayor de edad? " << (esMayorDeEdad(alumnos[i]) ? "Sí" : "No") << endl;
        cout << "¿Aprobó? " << (aprobo(alumnos[i]) ? "Sí" : "No") << endl;
    }

    return 0;
}