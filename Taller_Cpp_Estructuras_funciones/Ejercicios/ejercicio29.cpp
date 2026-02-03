#include <iostream>
using namespace std;

int main() {
	cout<< "EJERCICIO 29"<<endl;
    int m[3][3], sumaTotal = 0;

    for (int i = 0; i < 3; i++) {
        int sumaFila = 0;
        cout<< "fila"<<i+1<<endl;
        for (int j = 0; j < 3; j++) {
        	cout<< "Ingrese num:";
            cin >> m[i][j];
            sumaFila += m[i][j];
            sumaTotal += m[i][j];
        }
        cout << "Suma fila " << i + 1 << ": " << sumaFila << endl;
    }

    cout << "Suma total: " << sumaTotal << endl;
    return 0;
}

