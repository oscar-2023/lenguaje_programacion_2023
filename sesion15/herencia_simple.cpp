#include <iostream>
using namespace std;

class Animal
{
private:
    /* data */
public:
    void color(string _color)
    {
        cout<<"color de la clase de animal es: "<<_color<<endl;
    }
};

class Mamifero: public Animal
{
private:
    /* data */
public:
    void cambiar_color(string _color)
    {
        cout<<"cambiando de color";
    }
};

class Ave: public Animal
{
private:
    /* data */
public:
    void volar()
    {
        cout<<"el ave vuela"<<endl;
    }
};

class Murciegalo: public Animal, public Ave 
{
private:
    /* data */
public: 
    void dormir()
    {
        cout<<"El murciegalo duerme boca abajo"<<endl;
    }
};

int main()
{
    Mamifero leon;
    leon.color("amarillo");
    leon.cambiar_color("marron");
    return 0;

    Murciegalo batman;
    batman.cambiar_color("Azul");
    batman.volar();
    batman.dormir();
};