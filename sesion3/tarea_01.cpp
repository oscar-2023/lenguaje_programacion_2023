#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int numeros[4];
    cout<<"ingrese 4 numeros";
    for(int i = 0 ; i<4 ; ++i){
        cin>>numeros[i];
    }    
    sort(numeros,numeros +4);
    cout<<"numeros ordenados de menor a mayo:"; 
    for(int i = 0 ; i<4 ; ++i){
        cout<<numeros[i] << " ";
    }
   return 0;
}