#include <iostream>
#include <string>

using namespace std;
class Persona 
{
private:
    /* data */
    int id;
    string apellidos;
    string nombre;
    string dni;
    string direccion;
   
   
public:
    Persona(/* args */);
   Persona(int id, const string& apellidos, const string& nombre, const string& dni, const string& direccion)
        : id(id), apellidos(apellidos), nombre(nombre), dni(dni), direccion(direccion) {} 

    void mostrarInformacion() const {
        cout << "ID: " << id << endl;
        cout << "Apellidos: " << apellidos << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "DNI: " << dni << endl;
        cout << "Dirección: " << direccion << endl;
    }
    int GetId() const {
  return id;
 }

 void SetId(int id) {
  id = id;
 }

    string GetApellidos() const {
        return apellidos;
    }

    void SetApellidos(string apellidos) {
        apellidos = apellidos;
    }

    string GetNombre() const {
        return nombre;
    }

    void SetNombre(string nombre) {
        nombre = nombre;
    }

    string GetDni() const {
        return dni;
    }

    void SetDni(string dni) {
        dni = dni;
    }

    string GetDireccion() const {
        return direccion;
    }

    void SetDireccion(string direccion) {
        direccion = direccion;
    }


};


    


