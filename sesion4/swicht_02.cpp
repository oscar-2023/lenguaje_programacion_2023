#include<iostream>
using namespace std;
int main(){
    
    char letra;
    cout<<"ingrese una letra A a E:"<<endl;
    cin>>letra;

    switch (letra)
    {
    case 'A':
        cout<<"19-18";
        break;
    case 'B':
        cout<<"17-14";
        break;
    case 'C':
        cout<<"14-11";
        break;
    case 'D':
        cout<<"10-5";
        break;
    case 'E':
        cout<<"5-0";
        break;
                          
    default:
        cout<<"INGRESE OTRA LETRA"<<endl;
        break;
    }

    return 0 ;
}