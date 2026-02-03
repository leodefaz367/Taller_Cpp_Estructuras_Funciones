#include <iostream>
#include <vector>
using namespace std;

int suma(vector<int> v) {
    int s = 0;
    for (int i = 0; i < v.size(); i++)
        s += v[i];
    return s;
}

float promedio(vector<int> v) {
    return (float)suma(v) / v.size();
}

void paresImpares(vector<int> v, int& pares, int& impares) {
    pares = impares = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) pares++;
        else impares++;
    }
}

int main() {
    vector<int> v;
    int n;

    cout << "Cantidad de numeros: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int pares, impares;
    cout << "Suma: " << suma(v) << endl;
    cout << "Promedio: " << promedio(v) << endl;
    paresImpares(v, pares, impares);
    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;

    return 0;
}
