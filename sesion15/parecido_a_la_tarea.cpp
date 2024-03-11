
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Persona {
public:
    int id;
    string apellidos;
    string nombres;
    string dni;
    string direccion;

    Persona(int _id, string _apellidos, string _nombres, string _dni, string _direccion)
        : id(_id), apellidos(_apellidos), nombres(_nombres), dni(_dni), direccion(_direccion) {}

    void mostrarInformacion() {
        cout << "ID: " << id << "\n";
        cout << "Apellidos: " << apellidos << "\n";
        cout << "Nombres: " << nombres << "\n";
        cout << "DNI: " << dni << "\n";
        cout << "Direccion: " << direccion << "\n";
    }
};

class Producto {
public:
    int id_producto;
    string descripcion;
    string tipo;
    string fecha;
    double precio;

    Producto(int _id, string _descripcion, string _tipo, string _fecha, double _precio)
        : id_producto(_id), descripcion(_descripcion), tipo(_tipo), fecha(_fecha), precio(_precio) {}

    void mostrarInformacion() {
        cout << "ID Producto: " << id_producto << "\n";
        cout << "Descripcion: " << descripcion << "\n";
        cout << "Tipo: " << tipo << "\n";
        cout << "Fecha: " << fecha << "\n";
        cout << "Precio: " << precio << "\n";
    }
};

class Venta {
public:
    int id_venta;
    int id_producto;
    string fecha;
    int stock;

    Venta(int _id, int _id_producto, string _fecha, int _stock)
        : id_venta(_id), id_producto(_id_producto), fecha(_fecha), stock(_stock) {}

    void mostrarInformacion() const {
        cout << "ID Venta: " << id_venta << "\n";
        cout << "ID Producto: " << id_producto << "\n";
        cout << "Fecha: " << fecha << "\n";
        cout << "Stock: " << stock << "\n";
    }
};

class Vendedor : public Persona {
public:
    int id_vendedor;
    vector<Venta> ventas;

    Vendedor(int _id, string _apellidos, string _nombres, string _dni, string _direccion, int _id_vendedor)
        : Persona(_id, _apellidos, _nombres, _dni, _direccion), id_vendedor(_id_vendedor) {}

    void agregarVenta(Venta venta) {
        ventas.push_back(venta);
    }

    void mostrarInformacion() {
        Persona::mostrarInformacion();
        cout << "ID Vendedor: " << id_vendedor << "\n";
    }

    void mostrarVentas() {
        cout << "Ventas realizadas por el vendedor:\n";
        for (const auto& venta : ventas) {
            venta.mostrarInformacion();
            cout << "-------------------\n";
        }
    }
};

int main() {
    Persona persona(1, "MARTIN", "Jherson", "72756369", "Av. Tito Jaime");
    persona.mostrarInformacion();

    Producto producto(101, "Laptop", "Electronico", "2024-01-12", 1200.0);
    producto.mostrarInformacion();

    Venta venta(1001, 101, "2024-01-12", 5);
    venta.mostrarInformacion();

    Vendedor vendedor(2, "Gomez", "Arias", "67584312", "Jr. Maria Parado de Bellido", 201);
    vendedor.agregarVenta(venta);
    vendedor.mostrarInformacion();
    vendedor.mostrarVentas();

    return 0;
}