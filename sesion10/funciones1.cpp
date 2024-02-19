/*
Elabore un programa que solicite un arreglo de 10 estudiantes
y que cada estudiante cuente con 3 notas, se solicita calcular el
promedio de las notas del estudiante
*/
/*#include <iostream>
#include <string>
using namespace std;

struct Estudiante
{
    string nombre;
    string apellido;
    int edad;
    float nota[3];
    float promedio;

};
Estudiante estud[3];

void promedio(Estudiante estudiante[3]);
void ingresar_estudiantes();
void mostrar_promedio(Estudiante estudiante[3]);

int main()
{
    cout << "Registro de estudiantes" << endl;
    ingresar_estudiantes();
    promedio(estud);
    mostrar_promedio(estud);
    return 0;
}

void ingresar_estudiantes()
{
    cout << "Ingrese los estudiantes a registrar" << endl;
    // Estudiante estud[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "ingrese el nombre del estudiante" << endl;
        cin >> estud[i].nombre;
        cout << "ingrese el apellido del estudiante" << endl;
        cin >> estud[i].apellido;
        cout << "ingrese la edad del estudiante" << endl;
        cin >> estud[i].edad;
        cout << "Ingrese las notas del estudiante" << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "ingrese la nota" << j + 1 << endl;
            cin >> estud[i].nota[j];
        }
    }
}
void promedio(Estudiante estudiante[3])
{
    for (int i = 0; i < 3; i++)
    {
        float suma = 0;
        for (int j = 0; j < 3; j++)
        {
            suma = suma + estudiante[i].nota[j];
        }
        estudiante[i].promedio = suma / 3;
    }
}

void mostrar_promedio(Estudiante estudiante[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "El promedio del estudiante" << endl;
        cout << estudiante[i].apellido << " " << estudiante[i].nombre << " es : " << endl;
        cout << estudiante[i].promedio << endl;
    }
}*/



/*registar a 3 personas y que pida su año de nacimiento ,  calcular su edad y quien es mayor c++ 

*/
#include <iostream>
#include <string>
#include <ctime>

using namespace std;


struct Persona
{
    string nombre;
    string apellido;
    int añoNacimiento;
    int edad;
};


int calcularEdad(int añoActual, int añoNacimiento)
{
    return añoActual - añoNacimiento;
}

Persona personaMayor(Persona personas[])
{
    Persona mayor = personas[0];

    for (int i = 1; i < 3; ++i)
    {
        if (personas[i].edad > mayor.edad)
        {
            mayor = personas[i];
        }
    }

    return mayor;
}

int main()
{
    
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int añoActual = 1900 + ltm->tm_year;

   
    Persona personas[3];

   
    for (int i = 0; i < 3; ++i)
    {
        cout << "Ingrese el nombre de la persona " << i + 1 << ": ";
        cin >> personas[i].nombre;
        cout << "Ingrese el año de nacimiento de " << personas[i].nombre << ": ";
        cin >> personas[i].añoNacimiento;

        
        personas[i].edad = calcularEdad(añoActual, personas[i].añoNacimiento);
    }

    
    Persona mayor = personaMayor(personas);

    
    cout << endl
         << "La persona mayor es: " << mayor.nombre << endl;
    cout << "Edad: " << mayor.edad << " años" << endl;

    return 0;
}
