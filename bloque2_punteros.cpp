#include <iostream>
using namespace std;

// Ejercicio 2.2
void aplicarIVA(double* precio, double iva) {
    *precio *= (1 + iva);
}

int main() {

    // Ejercicio 2.1
    int stock = 250;
    int* p = &stock;

    cout << stock << endl; // (1) 250
    cout << p << endl;     // (2) direccion de memoria
    cout << *p << endl;    // (3) 250

    *p = 180;

    cout << stock << endl; // (4) 180

    // Ejercicio 2.2
    double precio = 100.00;
    aplicarIVA(&precio, 0.12);
    cout << "Precio con IVA: " << precio << endl; // 112.00

    // Ejercicio 2.3 (respuestas)
    // Pregunta 1:
    // Referencia: incrementar(contador, 5);
    // Puntero: incrementar(&contador, 5);

    // Pregunta 2:
    // El operador * (desreferenciación)

    // Pregunta 3:
    // Sí, en ambos casos vale 15 porque se modifica el valor original

    return 0;
}