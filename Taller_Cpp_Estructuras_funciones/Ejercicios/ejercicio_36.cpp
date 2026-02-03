#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Estudiante {
    string nombre;
    float nota1, nota2, nota3;
};

int main() {
    vector<Estudiante> v;
    int n;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Estudiante e;
        cout << "Estudiante " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> e.nombre;
        cout << "Nota 1: ";
        cin >> e.nota1;
        cout << "Nota 2: ";
        cin >> e.nota2;
        cout << "Nota 3: ";
        cin >> e.nota3;
        v.push_back(e);
    }

    ofstream archivo("estudiantes.txt");
    for (int i = 0; i < v.size(); i++) {
        archivo << v[i].nombre << " "
                << v[i].nota1 << " "
                << v[i].nota2 << " "
                << v[i].nota3 << endl;
    }
    archivo.close();

    string buscar;
    cout << "Ingrese nombre del estudiante a buscar: ";
    cin >> buscar;

    ifstream leer("estudiantes.txt");
    string nombre;
    float n1, n2, n3;

    while (leer >> nombre >> n1 >> n2 >> n3) {
        if (nombre == buscar) {
            float prom = (n1 + n2 + n3) / 3;
            cout << "Notas: " << n1 << ", " << n2 << ", " << n3 << endl;
            cout << "Promedio: " << prom << endl;
            if (prom >= 7)
                cout << "Aprueba" << endl;
            else
                cout << "Reprueba" << endl;
            break;
        }
    }
    leer.close();

    return 0;
}
