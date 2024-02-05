//elaborar un sistema que solicite al usuario que ingrese un numero del 1 al 7 y que el sistema retorne el nombre del dia
/*#include<iostream>
using namespace std;
int main(){
    int dia;
    cout<<"ingrese un numero del 1 al 7:"<<endl;
    cin>>dia;
    while (dia > 7 || dia <= 0)
    {
      cout<<"ingrese otro numero:";
      cin>>dia;
    }
    

    switch (dia)
    {
    case 1:
        cout<<"lunes";
        break;
    case 2:
        cout<<"martes";
        break;
    case 3:
        cout<<"miercoles";
        break;
    case 4:
        cout<<"jueves";
        break;
    case 5:
        cout<<"viernes";
        break;
    case 6:
        cout<<"sabado";
        break;
    case 7:
        cout<<"domingo";
        break;                    
    default:
        cout<<"numero errado"<<endl;
        break;
    }

    return 0 ;
}*/
#include<iostream>
using namespace std;
int main(){
    int mes;
    cout<<"ingrese un numero del 1 al 12:"<<endl;
    cin>>mes;
    while (mes > 12 || mes <= 0)
    {
      cout<<"ingrese otro numero:";
      cin>>mes;
    }
    

    switch (mes)
    {
    case 1:
        cout<<"enero";
        break;
    case 2:
        cout<<"febrero";
        break;
    case 3:
        cout<<"marzo";
        break;
    case 4:
        cout<<"abril";
        break;
    case 5:
        cout<<"mayo";
        break;
    case 6:
        cout<<"junio";
        break;
    case 7:
        cout<<"julio";
        break;    
    case 8:
        cout<<"agosto";
        break;
    case 9:
        cout<<"setiembre";
        break;      
    case 10:
        cout<<"octubre";
        break;
    case 11:
        cout<<"noviembre";
        break;
    case 12:
        cout<<"diciembre";
        break;                              
    default:
        cout<<"numero errado"<<endl;
        break;
    }

    return 0 ;
}