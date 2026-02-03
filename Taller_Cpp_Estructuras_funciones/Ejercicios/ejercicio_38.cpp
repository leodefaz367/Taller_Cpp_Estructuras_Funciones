#include <iostream>
using namespace std;

void llenar(float v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Venta " << i + 1 << ": ";
        cin >> v[i];
    }
}

void calcular(float v[], int n, float& total, float& promedio, int& mayores) {
    total = 0;
    for (int i = 0; i < n; i++)
        total += v[i];

    promedio = total / n;
    mayores = 0;

    for (int i = 0; i < n; i++)
        if (v[i] > promedio) mayores++;
}

int main() {
    int n;
    cout << "Cantidad de ventas: ";
    cin >> n;

    float ventas[100];
    float total, promedio;
    int mayores;

    llenar(ventas, n);
    calcular(ventas, n, total, promedio, mayores);

    cout << "Total de ventas: " << total << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Ventas mayores al promedio: " << mayores << endl;

    return 0;
}
