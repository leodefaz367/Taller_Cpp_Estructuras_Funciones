#include <iostream>
using namespace std;

int main() {
    float sueldos[10], suma = 0;

	cout << "Ejercicio 24"<<endl;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese sueldo " << i + 1 << ": ";
        cin >> sueldos[i];
        suma += sueldos[i];
    }

    float promedio = suma / 10;
    int arriba = 0, abajo = 0;

    for (int i = 0; i < 10; i++) {
        if (sueldos[i] > promedio)
            arriba++;
        else
            abajo++;
    }

    cout << "Promedio: " << promedio << endl;
    cout << "Por encima del promedio: " << arriba << endl;
    cout << "Por debajo del promedio: " << abajo << endl;

    return 0;
}

