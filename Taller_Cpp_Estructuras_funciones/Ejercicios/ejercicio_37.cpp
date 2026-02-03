#include <iostream>
#include <vector>
using namespace std;

void llenarVector(vector<int>& v, int n) {
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Ingrese numero: ";
        cin >> x;
        v.push_back(x);
    }
}

void calcular(const vector<int>& v, int& suma, float& promedio, int& mayor, int& menor) {
    suma = 0;
    mayor = v[0];
    menor = v[0];

    for (int i = 0; i < v.size(); i++) {
        suma += v[i];
        if (v[i] > mayor) mayor = v[i];
        if (v[i] < menor) menor = v[i];
    }
    promedio = (float)suma / v.size();
}

int main() {
    vector<int> v;
    int n, suma, mayor, menor;
    float promedio;

    cout << "Cantidad de numeros: ";
    cin >> n;

    llenarVector(v, n);
    calcular(v, suma, promedio, mayor, menor);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}
