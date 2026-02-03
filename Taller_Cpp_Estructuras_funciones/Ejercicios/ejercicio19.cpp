#include<iostream>
#include <cmath>
using namespace std;

int main(){

    int edades[10], suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la edad " << i + 1 << ": ";
        cin >> edades[i];
        suma += edades[i];
    }

    float promedio = suma / 10.0;
    int mayores = 0, menoresIguales = 0;

    for (int i = 0; i < 10; i++) {
        if (edades[i] > promedio)
            mayores++;
        else
            menoresIguales++;
    }

    cout << "Promedio edades: " << promedio << endl;
    cout << "Mayores al promedio: " << mayores << endl;
    cout << "Menores o iguales al promedio: " << menoresIguales << endl;
    
	return 0;
}
