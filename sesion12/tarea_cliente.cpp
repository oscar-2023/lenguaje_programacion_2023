#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Cliente {
private:
    string nombres;
    string apellidos;
    string direccion;
    char tipoCliente;
    int anioNacimiento;

public:
    // Constructor
    Cliente(string nombres, string apellidos, string direccion, char tipoCliente, int anioNacimiento) {
        this->nombres = nombres;
        this->apellidos = apellidos;
        this->direccion = direccion;
        this->tipoCliente = tipoCliente;
        this->anioNacimiento = anioNacimiento;
    }

    // Getter y Setter para nombres
    string getNombres() {
        return nombres;
    }

    void setNombres(string nombres) {
        this->nombres = nombres;
    }

    // Getter y Setter para apellidos
    string getApellidos() {
        return apellidos;
    }

    void setApellidos(string apellidos) {
        this->apellidos = apellidos;
    }

    // Getter y Setter para dirección
    string getDireccion() {
        return direccion;
    }

    void setDireccion(string direccion) {
        this->direccion = direccion;
    }

    // Getter y Setter para tipo de cliente
    char getTipoCliente() {
        return tipoCliente;
    }

    void setTipoCliente(char tipoCliente) {
        this->tipoCliente = tipoCliente;
    }

    // Getter y Setter para año de nacimiento
    int getAnioNacimiento() {
        return anioNacimiento;
    }

    void setAnioNacimiento(int anioNacimiento) {
        this->anioNacimiento = anioNacimiento;
    }

    // Método para calcular el tipo de cliente basado en la edad
    char calcularTipoCliente() {
        int edad = calcularEdad();
        if (edad >= 0 && edad <= 10) {
            return 'A';
        } else if (edad > 10 && edad <= 20) {
            return 'B';
        } else if (edad > 20 && edad <= 30) {
            return 'C';
        } else if (edad > 30 && edad <= 40) {
            return 'D';
        } else if (edad > 40 && edad <= 50) {
            return 'E';
        } else {
            return 'N'; // No califica
        }
    }

private:
    // Método privado para calcular la edad
    int calcularEdad() {
        time_t t = time(0);
        struct tm* now = localtime(&t);
        int anioActual = now->tm_year + 1900;
        return anioActual - anioNacimiento;
    }
};

int main() {
    // Ejemplo de uso
    Cliente cliente("Juan", "Perez", "Calle 123", 'A', 1990);
    cout << "Tipo de cliente: " << cliente.calcularTipoCliente() << endl;

    return 0;
}
