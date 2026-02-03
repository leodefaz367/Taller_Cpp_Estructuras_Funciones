#include<iostream>
using namespace std;

int main(){
    float v[10], suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> v[i];
        suma += v[i];
    }

    float promedio = suma / 10;
    int mayores = 0;

    for (int i = 0; i < 10; i++) {
        if (v[i] > promedio)
            mayores++;
    }

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayores al promedio: " << mayores << endl;


	return 0;
}
