#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void ingresarCalificaciones(vector<double>& v, int n) {
    for (int i = 0; i < n; i++) {
        double nota;
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> nota;
        v.push_back(nota);
    }
}

double calcularTotal(const vector<double>& v) {
    double total = 0;
    for (int i = 0; i < v.size(); i++) {
        total += v[i];
    }
    return total;
}

void contarSobreBajoPromedio(const vector<double>& v, double promedio, int& mayores, int& menores) {
    mayores = 0;
    menores = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > promedio)
            mayores++;
        else if (v[i] < promedio)
            menores++;
    }
}

int main() {
    vector<double> calificaciones;
    vector<double> calificacionesArchivo;
    int n;

    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> n;

    ingresarCalificaciones(calificaciones, n);

    ofstream archivo("calificaciones.txt");
    for (int i = 0; i < calificaciones.size(); i++) {
        archivo << calificaciones[i] << endl;
    }
    archivo.close();

    ifstream leer("calificaciones.txt");
    double nota;
    while (leer >> nota) {
        calificacionesArchivo.push_back(nota);
    }
    leer.close();

    double total = calcularTotal(calificacionesArchivo);
    double promedio = total / calificacionesArchivo.size();

    int mayores, menores;
    contarSobreBajoPromedio(calificacionesArchivo, promedio, mayores, menores);

    cout << endl;
    cout << "Total de calificaciones: " << total << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Calificaciones por encima del promedio: " << mayores << endl;
    cout << "Calificaciones por debajo del promedio: " << menores << endl;

    return 0;
}
