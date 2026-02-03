#include <iostream>
using namespace std;

int main() {
    int op, n;

    do {
        cout << "\n1. Ingresar un numero";
        cout << "\n2. Verificar rango (1-100)";
        cout << "\n3. Par o impar";
        cout << "\n4. Salir\n";
        cin >> op;

        if (op == 1){
        	cout<< "Ingrese num: ";
            cin >> n;
    	}
        else if (op == 2){
            cout << ((n >= 1 && n <= 100) ? "En rango\n" : "Fuera de rango\n");
        }
        else if (op == 3){
            cout << ((n % 2 == 0) ? "Par\n" : "Impar\n");
		}
    } while (op != 4);

    return 0;
}

