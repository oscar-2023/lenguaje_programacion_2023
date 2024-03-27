#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Producto {
private:
    string nombre;
    string marca;
    int talla;
    string color;
    float precio;
    int cantidadStock;
public:
    Producto(string _nombre, string _marca, int _talla, string _color, float _precio, int _cantidadStock)
        : nombre(_nombre), marca(_marca), talla(_talla), color(_color), precio(_precio), cantidadStock(_cantidadStock) {}

    // Métodos get/set
    string getNombre() const { return nombre; }
    void setNombre(string _nombre) { nombre = _nombre; }

    string getMarca() const { return marca; }
    void setMarca(string _marca) { marca = _marca; }

    int getTalla() const { return talla; }
    void setTalla(int _talla) { talla = _talla; }

    string getColor() const { return color; }
    void setColor(string _color) { color = _color; }

    float getPrecio() const { return precio; }
    void setPrecio(float _precio) { precio = _precio; }

    int getCantidadStock() const { return cantidadStock; }
    void setCantidadStock(int _cantidadStock) { cantidadStock = _cantidadStock; }

    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Marca: " << marca << endl;
        cout << "Talla: " << talla << endl;
        cout << "Color: " << color << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad en stock: " << cantidadStock << endl;
    }
};

class Cliente {
private:
    string nombre;
    string direccion;
    string telefono;

public:
    Cliente(string _nombre, string _direccion, string _telefono)
        : nombre(_nombre), direccion(_direccion), telefono(_telefono) {}

    // Métodos get/set
    string getNombre() const { return nombre; }
    void setNombre(string _nombre) { nombre = _nombre; }

    string getDireccion() const { return direccion; }
    void setDireccion(string _direccion) { direccion = _direccion; }

    string getTelefono() const { return telefono; }
    void setTelefono(string _telefono) { telefono = _telefono; }
};

class Venta {
private:
    string fecha;
    Cliente cliente;
    vector<Producto> productosVendidos;

public:
    Venta(string _fecha, Cliente _cliente, vector<Producto> _productosVendidos)
        : fecha(_fecha), cliente(_cliente), productosVendidos(_productosVendidos) {}

    // Métodos get/set
    string getFecha() const { return fecha; }

    Cliente getCliente() const { return cliente; }

    vector<Producto> getProductosVendidos() const { return productosVendidos; }

    float calcularTotalVenta() const {
        float total = 0;
        for (const auto& producto : productosVendidos) {
            total += producto.getPrecio();
        }
        return total;
    }
};

class Tienda {
private:
    vector<Producto> inventario;
    vector<Cliente> clientes;
    vector<Venta> ventasRealizadas;

public:
    void agregarProducto(const Producto& producto) {
        inventario.push_back(producto);
    }

    void registrarCliente(const Cliente& cliente) {
        clientes.push_back(cliente);
    }

    void realizarVenta(const Venta& venta) {
        ventasRealizadas.push_back(venta);
        // Actualizar el stock de productos vendidos
        for (auto& producto : venta.getProductosVendidos()) {
            for (auto& item : inventario) {
                if (item.getNombre() == producto.getNombre()) {
                    item.setCantidadStock(item.getCantidadStock() - 1);
                    break;
                }
            }
        }
    }

    const vector<Producto>& getInventario() const {
        return inventario;
    }

    void generarInformeVentas() const {
        // Implementar la función generarInformeVentas
        cout << "INFORME DE VENTAS" << endl;
        cout << "--------------------------\n"<<endl;
        for (const auto& venta : ventasRealizadas) {
            cout << "Fecha: " << venta.getFecha() << endl;
            cout << "Cliente: " << venta.getCliente().getNombre() << endl;
            cout << "Productos vendidos:" << endl;
            for (const auto& producto : venta.getProductosVendidos()) {
                cout << "  - " << producto.getNombre() << " (" << producto.getMarca() << ", " << producto.getColor() << ", Talla " << producto.getTalla() << "): $" << producto.getPrecio() << endl;
            }
            cout << "Total venta: $" << venta.calcularTotalVenta() << endl;
            cout << "------------------" << endl;
        }
    }
};

int main() {
    Tienda tienda;

    while (true) {
        cout << "------MENU-----------" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "2. Registrar cliente" << endl;
        cout << "3. Realizar venta" << endl;
        cout << "4. Generar informe de ventas" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: ";
        
        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre, marca, color;
                int talla, cantidadStock;
                float precio;

                cout << "Nombre del producto: ";
                cin >> nombre;
                cout << "Marca del producto: ";
                cin >> marca;
                cout << "Talla del producto: ";
                cin >> talla;
                cout << "Color del producto: ";
                cin >> color;
                cout << "Precio del producto: ";
                cin >> precio;
                cout << "Cantidad en stock: ";
                cin >> cantidadStock;

                Producto nuevoProducto(nombre, marca, talla, color, precio, cantidadStock);
                tienda.agregarProducto(nuevoProducto);
                break;
            }
            case 2: {
                string nombre, direccion, telefono;
                cout << "Nombre del cliente: ";
                cin >> nombre;
                cout << "Dirección del cliente: ";
                cin >> direccion;
                cout << "Teléfono del cliente: ";
                cin.ignore(); // Limpiar el buffer del teclado
                getline(cin, telefono);
                Cliente nuevoCliente(nombre, direccion, telefono);
                tienda.registrarCliente(nuevoCliente);
                break;
            }
            case 3: {
                string fecha, nombreCliente;
                vector<Producto> productosVendidos;
                int numProductos;
                cout << "Fecha de la venta: ";
                cin >> fecha;
                cout << "Nombre del cliente: ";
                cin >> nombreCliente;
                cout << "Cantidad de productos a vender: ";
                cin >> numProductos;
                ;

                for (int i = 0; i < numProductos; ++i) {
                    string nombreProducto;
                    cout << "Nombre del producto " << i + 1 << ": ";
                    cin >> nombreProducto;
                    bool encontrado = false;
                    for (auto &producto : tienda.getInventario()) {
                        if (producto.getNombre() == nombreProducto && producto.getCantidadStock() > 0) {
                            productosVendidos.push_back(producto);
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado) {
                        cout << "Producto no encontrado en el inventario o sin stock disponible." << endl;
                        break;
                    }
                }
                if (!productosVendidos.empty()) {
                    Cliente cliente(nombreCliente, "", ""); // No se solicita dirección ni información de contacto en este momento
                    Venta nuevaVenta(fecha, cliente, productosVendidos);
                    tienda.realizarVenta(nuevaVenta);
                    cout << "Venta realizada con éxito." << endl;
                }
                break;
            }
            case 4: {
                // Implementar la lógica para generar el informe de ventas
                tienda.generarInformeVentas();
                break;
            }
            case 5: {
                cout << "Saliendo del programa..." << endl;
                return 0;
            }
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
        }
    }

    return 0;
}
