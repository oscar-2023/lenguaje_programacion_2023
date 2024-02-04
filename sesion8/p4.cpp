#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    vector<int> numerosPares = {2, 4, 6, 8, 10};
    vector<int> numerosImpares = {1, 3, 5, 7, 9};

    
    cout << "Números pares: ";
    for (int num : numerosPares) {
        cout << num << " ";
    }
    cout << endl;

    
    cout << "Números impares: ";
    for (int num : numerosImpares) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

