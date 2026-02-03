#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

/*
    Funcion que ingresa las ventas al vector por referencia
*/
void ingresarVentas(vector<double>& ventas, int n) {
    for (int i = 0; i < n; i++) {
        double valor;
        cout << "Ingrese venta " << i + 1 << ": ";
        cin >> valor;
        ventas.push_back(valor);
    }
}

/*
    Funcion que calcula el total de ventas
*/
double calcularTotal(const vector<double>& ventas) {
    double total = 0;
    for (int i = 0; i < ventas.size(); i++) {
        total += ventas[i];
    }
    return total;
}

/*
    Funcion que cuenta ventas mayores y menores al promedio
*/
void contarMayoresMenores(const vector<double>& ventas, double promedio,
                          int& mayores, int& menores) {
    mayores = 0;
    menores = 0;

    for (int i = 0; i < ventas.size(); i++) {
        if (ventas[i] > promedio)
            mayores++;
        else if (ventas[i] < promedio)
            menores++;
    }
}

int main() {
    vector<double> ventas;
    vector<double> ventasArchivo;
    int n;

    cout << "Ingrese la cantidad de ventas: ";
    cin >> n;

    // Ingreso inicial de ventas
    ingresarVentas(ventas, n);

    // Guardar ventas en archivo
    ofstream archivo("ventas.txt");
    for (int i = 0; i < ventas.size(); i++) {
        archivo << ventas[i] << endl;
    }
    archivo.close();

    // Leer ventas desde el archivo
    ifstream leer("ventas.txt");
    double valor;
    while (leer >> valor) {
        ventasArchivo.push_back(valor);
    }
    leer.close();

    // Calculos SOLO con el vector cargado desde el archivo
    double total = calcularTotal(ventasArchivo);
    double promedio = total / ventasArchivo.size();

    int mayores, menores;
    contarMayoresMenores(ventasArchivo, promedio, mayores, menores);

    // Resultados
    cout << endl;
    cout << "Total de ventas: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Ventas mayores al promedio: " << mayores << endl;
    cout << "Ventas menores al promedio: " << menores << endl;

    return 0;
}
