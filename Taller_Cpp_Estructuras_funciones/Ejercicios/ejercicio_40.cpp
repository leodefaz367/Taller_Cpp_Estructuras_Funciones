#include <iostream>
using namespace std;

int mayor(int v[], int n) {
    int m = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > m) m = v[i];
    return m;
}

int menor(int v[], int n) {
    int m = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] < m) m = v[i];
    return m;
}

void contar(int v[], int n, int& pos, int& neg, int& ceros) {
    pos = neg = ceros = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) pos++;
        else if (v[i] < 0) neg++;
        else ceros++;
    }
}

int main() {
    int n;
    cout << "Cantidad de numeros: ";
    cin >> n;

    int v[100];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int pos, neg, ceros;
    cout << "Mayor: " << mayor(v, n) << endl;
    cout << "Menor: " << menor(v, n) << endl;
    contar(v, n, pos, neg, ceros);
    cout << "Positivos: " << pos << endl;
    cout << "Negativos: " << neg << endl;
    cout << "Ceros: " << ceros << endl;

    return 0;
}
