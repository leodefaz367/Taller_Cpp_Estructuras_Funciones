#include <iostream>
using namespace std;

int main() {
	cout<< "Determinar numeros dentro del rango de 20-80"<<endl;
    int v[10], dentro = 0, fuera = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> v[i];

        if (v[i] >= 20 && v[i] <= 80)
            dentro++;
        else
            fuera++;
    }

    cout << "Dentro del rango: " << dentro << endl;
    cout << "Fuera del rango: " << fuera << endl;
    cout << "Porcentaje dentro: " << (dentro * 100.0 / 10) << "%" << endl;
    cout << "Porcentaje fuera: " << (fuera * 100.0 / 10) << "%" << endl;

    return 0;
}

