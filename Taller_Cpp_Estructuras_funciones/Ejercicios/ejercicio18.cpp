#include<iostream>
#include <cmath>
using namespace std;

int main(){

    float v[12];
    float sumaPos = 0, sumaNeg = 0, sumaAbs = 0;

    for (int i = 0; i < 12; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> v[i];

        if (v[i] > 0)
            sumaPos += v[i];
        else if (v[i] < 0)
            sumaNeg += v[i];

        sumaAbs += abs(v[i]);
    }

    cout << "Suma positivos: " << sumaPos << endl;
    cout << "Suma negativos: " << sumaNeg << endl;
    cout << "Valor absoluto total: " << sumaAbs << endl;

	return 0;
}
