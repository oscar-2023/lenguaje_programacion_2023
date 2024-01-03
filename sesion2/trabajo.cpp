//Elaborar un programa que calcule el promedio de un estudiante, a partir de sus 3 notas
//considerar lo siguiente:nota 1 vale 15% ,nota 2 vale 35%, nota 3 vale 50% 

#include<iostream>
using namespace std;
int main(){
    float nota1 , nota2 ,nota3;
    float vale_nota1 = 0.15;
    float vale_nota2 = 0.35;
    float vale_nota3 = 0.50;
    float  promedio;
    cout <<"buenas ingrese sus notas segun corresponda\ "<<endl;
    cout << "Ingresa la nota 1: ";
    cin >> nota1;

    cout << "Ingresa la nota 2: ";
    cin >> nota2;

    cout << "Ingresa la nota 3: ";
    cin >> nota3;

    
    promedio = (nota1 * vale_nota1)+( nota2 * vale_nota2)+(nota3 * vale_nota3) ;

    
    cout << "El promedio de las notas es: " << promedio << endl;

    return 0;
}    