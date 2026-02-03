#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct ClienteConsumo {
    string nombre;
    int edad;
    float consumoMensual;
};

int main() {
    vector<ClienteConsumo> v;
    int n;

    cout << "Ingrese la cantidad de clientes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        ClienteConsumo c;
        cout << "Cliente " << i + 1 << endl;
        cout << "Ingrese nombre: ";
        cin >> c.nombre;
        cout << "Ingrese edad: ";
        cin >> c.edad;
        cout << "Ingrese consumo mensual: ";
        cin >> c.consumoMensual;

        v.push_back(c);
    }

    ofstream archivo("clientes_consumo.txt");
    for (int i = 0; i < v.size(); i++) {
        archivo << v[i].nombre << " "
                << v[i].edad << " "
                << v[i].consumoMensual << endl;
    }
    archivo.close();

    double total = 0;
    double mayorC = 0;
    string clienteMayor;

    for (int i = 0; i < v.size(); i++) {
        total += v[i].consumoMensual;
        if (v[i].consumoMensual > mayorC) {
            mayorC = v[i].consumoMensual;
            clienteMayor = v[i].nombre;
        }
    }

    double promedio = total / n;

    cout << endl;
    cout << "Consumo total: " << total << endl;
    cout << "Consumo promedio: " << promedio << endl;
    cout << "Cliente con mayor consumo: " << clienteMayor << endl;

    return 0;
}
