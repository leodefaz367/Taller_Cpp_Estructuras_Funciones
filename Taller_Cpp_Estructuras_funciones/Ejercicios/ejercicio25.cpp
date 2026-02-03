#include <iostream>
using namespace std;

int main() {
    float notas[10], suma = 0;
    int aprobados = 0, reprobados = 0;
	cout<< "Ejercicio 25"<<endl;
	cout<< "Ingrese notas (0-10)"<<endl;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese nota " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];

        if (notas[i] >= 7)
            aprobados++;
        else
            reprobados++;
    }

    float promedio = suma / 10;
    float mayor = notas[0], menor = notas[0];

    for (int i = 1; i < 10; i++) {
        if (notas[i] > mayor) mayor = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }

    cout << "Promedio: " << promedio << endl;
    cout << "Nota mayor: " << mayor << endl;
    cout << "Nota menor: " << menor << endl;
    cout << "Aprobados: " << (aprobados * 100.0 / 10) << "%" << endl;
    cout << "Reprobados: " << (reprobados * 100.0 / 10) << "%" << endl;

    return 0;
}

