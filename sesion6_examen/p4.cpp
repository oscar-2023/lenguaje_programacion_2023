//elaborar un programa que calcule el area de un triangulo conociendo sus 3 lados e identifique que tipo de triangulo es

#include <iostream>
using namespace std ;
int main(){
    int l1,l2,l3;
    int base , altura ;
    int area;
    cout<<"ingrese el lado 1 "<<endl;
    cin>>altura;
    cout<<"ingrese el lado 2"<<endl;
    cin>>altura;
    cout<<"ingrese el lado 3"<<endl;
    cin>> base;

    area =  base * altura /2.0;
    cout<<"el area es "<<area<<endl;
    if (l1 == l2 == l3){
        cout<<"es equilatero";
        
    }
        if(l1 != l2 != l3){
        cout<<"es escaleno"<<endl;
        
    }

        if (l1 == l2 != l3){
        cout<<"es isoceles"<<endl;
        
    }
       return 0 ;
}
    /*if (base == altura){
        cout <<"el triangulo es equilatero ";
        /*if( base != altura){
            cout<<" el triangulo es escaleno "

        }
        if(altura == altura & ! base ){
            cout<<"es triangulo isoceles";

        }*/

   /* }
    else{
        cout<<"el triangulo es isoceles"<<endl;
    }
    if()*/


