#include<iostream>
using namespace std;

int main(){

    float v[10], sumaCuadrados = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> v[i];
        v[i] = v[i] * v[i];
        sumaCuadrados += v[i];
    }

    cout << "Cuadrados:\n";
    for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }

    cout << "\nSuma de cuadrados: " << sumaCuadrados << endl;
    cout << "Promedio de cuadrados: " << sumaCuadrados / 10 << endl;
	    
	return 0;
}
