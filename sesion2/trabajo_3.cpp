#include<iostream>
using namespace std;
int main(){
     int n1,n2,n3;
     cout<<"ingrese primer numero:";
     cin>>n1;
     cout<<"ingrese segundo numero:";
     cin>>n2;
     cout<<"ingrese tercer numero:";
     cin>>n3;

      if (n1 != n2 && n1 != n3 && n2 != n3) {
        
        int mayor = n1;
        if (n2 > mayor) {
            mayor = n2;
        }
        if (n3 > mayor) {
        
            mayor = n3;
        }


        int menor = n1;
        if (n2 < menor) {
            menor = n2;
        }
        if (n3 < menor) {
            menor = n3;
        }

        
        cout << "El número mayor es: " << mayor << endl;
        cout << "El número menor es: " << menor << endl;
    } else {
        cout << "Los números ingresados deben ser diferentes." << endl;
    }

    return 0;
}