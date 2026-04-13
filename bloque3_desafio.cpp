#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void mostrarEstudiantes(string n[], double v[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << n[i] << " " << fixed << setprecision(2) << v[i] << endl;
    }
}

void ajustarNota(double* nota, double bonus) {
    *nota += bonus;
    if (*nota > 10.0) {
        *nota = 10.0;
    }
}

void normalizarNotas(double notas[], int tam, double& promedio) {
    double suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += notas[i];
    }
    promedio = suma / tam;
}

int main() {

    string nombres[4] = {"Ana Garcia", "Luis Torres", "Maria Lopez", "Pedro Solis"};
    double notas[4] = {8.50, 6.80, 9.20, 7.40};

    cout << "=== Registro inicial ===" << endl;
    mostrarEstudiantes(nombres, notas, 4);

    ajustarNota(&notas[1], 0.5);

    double promedio;
    normalizarNotas(notas, 4, promedio);

    cout << "=== Registro final ===" << endl;
    mostrarEstudiantes(nombres, notas, 4);

    cout << "Promedio del curso: " << fixed << setprecision(2) << promedio << endl;

    return 0;
}