#include <iostream>
using namespace std;

int main() {
    int op;
    float a, b;
    float mayor = 0;
	cout<< "Ejercicio 26"<<endl;
    do {
    	cout<< "\nOperaciones basicas";
        cout << "\n1. Ingresar dos numeros";
        cout << "\n2. Suma y resta";
        cout << "\n3. Mayor";
        cout << "\n4. Salir\n";
        cin >> op;

        if (op == 1) {
            cout << "Ingrese a y b: ";
            cin >> a >> b;
            mayor = 1;
        } else if (op == 2) {
            cout << "Suma: " << a + b << endl;
            cout << "Resta: " << a - b << endl;
        } else if (op == 3) {
            cout << "Mayor: ";
            if (mayor == 0){
            	cout<< "No se ha ingresado los datos:";
			}else if(a > b){
				mayor = a;
				cout << "El mayor es "<< mayor;
			}else if (a <b){
				mayor = b;
				cout<< "El mayor es "<< mayor;
			}else{
				cout<< "No existe un numero mayor:"<<endl;
			}
        }
    } while (op != 4);

    return 0;
}

