#include <iostream>
using namespace std;

int main() {
    int op, v[10], pos = 0, neg = 0;
    float suma = 0;

    do {
        cout << "\n1. Ingresar 10 numeros";
        cout << "\n2. Promedio";
        cout << "\n3. Mayor y menor";
        cout << "\n4. Positivos y negativos";
        cout << "\n5. Salir\n";
        cin >> op;

        if (op == 1) {
            for (int i = 0; i < 10; i++) {
            	cout << "Ingrese num: ";
                cin >> v[i];
                suma += v[i];
                if (v[i] >= 0) pos++;
                else neg++;
            }
        } else if (op == 2) {
            cout << "Promedio: " << suma / 10 << endl;
        } else if (op == 3) {
            int may = v[0], men = v[0];
            for (int i = 1; i < 10; i++) {
                if (v[i] > may) may = v[i];
                if (v[i] < men) men = v[i];
            }
            cout << "Mayor: " << may << " Menor: " << men << endl;
        } else if (op == 4) {
            cout << "Positivos: " << pos << " Negativos: " << neg << endl;
        }

    } while (op != 5);

    return 0;
}

