#include<iostream>
using namespace std;

int main(){

    float v[8];

    for (int i = 0; i < 8; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> v[i];
    }

    float max = v[0], min = v[0];

    for (int i = 1; i < 8; i++) {
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
    }

    cout << "Maximo: " << max << endl;
    cout << "Minimo: " << min << endl;
    cout << "Rango: " << max - min << endl;

	return 0;
}
