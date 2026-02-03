#include <iostream>
using namespace std;

int main() {
    int datos[15], m3 = 0, m5 = 0, ambos = 0;
	cout<< "Determinar multiplos de 3 y5 "<<endl;
    for (int i = 0; i < 15; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> datos[i];

        if (datos[i] % 3 == 0) m3++;
        if (datos[i] % 5 == 0) m5++;
        if (datos[i] % 3 == 0 && datos[i] % 5 == 0) ambos++;
    }

    cout << "Multiplos de 3: " << m3 << endl;
    cout << "Multiplos de 5: " << m5 << endl;
    cout << "Multiplos de ambos: " << ambos << endl;

    return 0;
}

