#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Clase Persona
class Persona {
protected:
    string id;
    string apellidos;
    string nombres;
    string dni;
    string direccion;

public:
    Persona(string id, string apellidos, string nombres, string dni, string direccion)
        : id(id), apellidos(apellidos), nombres(nombres), dni(dni), direccion(direccion) {}

    // Getters y setters
    string getId() const { return id; }
    void setId(string newId) { id = newId; }

    string getApellidos() const { return apellidos; }
    void setApellidos(string newApellidos) { apellidos = newApellidos; }

    string getNombres() const { return nombres; }
    void setNombres(string newNombres) { nombres = newNombres; }

    string getDni() const { return dni; }
    void setDni(string newDni) { dni = newDni; }

    string getDireccion() const { return direccion; }
    void setDireccion(string newDireccion) { direccion = newDireccion; }
};

// Clase Cliente hereda de Persona
class Cliente : public Persona {
private:
    string telefono;
    string ruc;

public:
    Cliente(string id, string apellidos, string nombres, string dni, string direccion, string telefono, string ruc)
        : Persona(id, apellidos, nombres, dni, direccion), telefono(telefono), ruc(ruc) {}

    // Getters y setters
    string getTelefono() const { return telefono; }
    void setTelefono(string newTelefono) { telefono = newTelefono; }

    string getRuc() const { return ruc; }
    void setRuc(string newRuc) { ruc = newRuc; }
};

// Clase Producto
class Producto {
private:
    string idProducto;
    string descripcion;
    string tipo;
    string fecha;
    double precio;

public:
    Producto(string idProducto, string descripcion, string tipo, string fecha, double precio)
        : idProducto(idProducto), descripcion(descripcion), tipo(tipo), fecha(fecha), precio(precio) {}

    // Getters y setters
    string getIdProducto() const { return idProducto; }
    void setIdProducto(string newIdProducto) { idProducto = newIdProducto; }

    string getDescripcion() const { return descripcion; }
    void setDescripcion(string newDescripcion) { descripcion = newDescripcion; }

    string getTipo() const { return tipo; }
    void setTipo(string newTipo) { tipo = newTipo; }

    string getFecha() const { return fecha; }
    void setFecha(string newFecha) { fecha = newFecha; }

    double getPrecio() const { return precio; }
    void setPrecio(double newPrecio) { precio = newPrecio; }
};

// Clase ProductoVendido
class ProductoVendido {
private:
    Producto producto;
    int cantidad;

public:
    ProductoVendido(Producto producto, int cantidad) : producto(producto), cantidad(cantidad) {}

    // Método para calcular el subtotal de la venta del producto
    double calcularSubtotal() const {
        return producto.getPrecio() * cantidad;
    }
};

// Clase Vendedor hereda de Persona
class Vendedor : public Persona {
private:
    string idVendedor;
    vector<ProductoVendido> ventas;

public:
    Vendedor(string id, string apellidos, string nombres, string dni, string direccion, string idVendedor)
        : Persona(id, apellidos, nombres, dni, direccion), idVendedor(idVendedor) {}

    // Getters y setters
    string getIdVendedor() const { return idVendedor; }
    void setIdVendedor(string newIdVendedor) { idVendedor = newIdVendedor; }

    // Método para agregar una venta al vendedor
    void agregarVenta(ProductoVendido productoVendido) {
        ventas.push_back(productoVendido);
    }

    // Método para calcular el total de las ventas del vendedor
    double calcularTotalVentas() const {
        double total = 0;
        for (const auto& venta : ventas) {
            total += venta.calcularSubtotal();
        }
        return total;
    }
};

// Clase Venta
class Venta {
private:
    string idVenta;
    string idProducto;
    string fecha;
    Vendedor vendedor;
    Cliente cliente;
    ProductoVendido productoVendido;

public:
    Venta(string idVenta, string idProducto, string fecha, Vendedor vendedor, Cliente cliente, ProductoVendido productoVendido)
        : idVenta(idVenta), idProducto(idProducto), fecha(fecha), vendedor(vendedor), cliente(cliente), productoVendido(productoVendido) {}

    // Método para guardar los datos de la venta en un fichero
    void guardar(ofstream& archivo) const {
        archivo << idVenta << ',' << idProducto << ',' << fecha << ',';
        archivo << vendedor.getId() << ',' << cliente.getId() << ',' << productoVendido.calcularSubtotal() << endl;
    }
};

int main() {
    // Crear y agregar clientes
    vector<Cliente> clientes;
    clientes.push_back(Cliente("1", "Gomez", "Juan", "12345678", "Av. Principal 123", "987654321", "12345678901"));
    clientes.push_back(Cliente("2", "Lopez", "Maria", "87654321", "Calle Secundaria 456", "987654322", "12345678902"));
    clientes.push_back(Cliente("3", "Martinez", "Luis", "56789012", "Av. Primera 789", "987654323", "12345678903"));

    // Crear y agregar productos
    vector<Producto> productos;
    productos.push_back(Producto("P001", "Camisa", "Ropa", "01/01/2024", 25.0));
    productos.push_back(Producto("P002", "Pantalón", "Ropa", "02/01/2024", 30.0));
    productos.push_back(Producto("P003", "Zapatos", "Calzado", "03/01/2024", 40.0));

    // Crear vendedor
    Vendedor vendedor("4", "Rodriguez", "Pedro", "34567890", "Calle Principal 123", "1001");

    // Crear ventas y agregarlas al vendedor
    vendedor.agregarVenta(ProductoVendido(productos[0], 3));
    vendedor.agregarVenta(ProductoVendido(productos[1], 2));
    vendedor.agregarVenta(ProductoVendido(productos[2], 1));

     cout << "Detalles de los clientes:" << endl;
    for (const auto& cliente : clientes) {
        cout << "ID: " << cliente.getId() << ", Apellidos: " << cliente.getApellidos() << ", Nombres: " << cliente.getNombres() << endl;
    }

    // Mostrar detalles de cada producto
    cout << "\nDetalles de los productos:" << endl;
    for (const auto& producto : productos) {
        cout << "ID: " << producto.getIdProducto() << ", Descripción: " << producto.getDescripcion() << ", Precio: " << producto.getPrecio() << endl;
    }

    // Mostrar detalles del vendedor y total de ventas
    cout << "\nDetalles del vendedor:" << endl;
    cout << "ID: " << vendedor.getId() << ", Apellidos: " << vendedor.getApellidos() << ", Nombres: " << vendedor.getNombres() << endl;
    cout << "Total de ventas: " << vendedor.calcularTotalVentas() << endl;

    return 0;
}

    /*// Guardar las ventas en un archivo
    ofstream archivo("ventas.txt");
    if (archivo.is_open()) {
        for (size_t i = 0; i < clientes.size(); ++i) {
    }      
    }
    
}*/