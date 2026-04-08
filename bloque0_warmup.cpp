#include <iostream>

using namespace std;

void resetSensor(int lectura) {
lectura = 0;
cout << "Dentro de la funcion: " << lectura << endl;
}
int main() {
int temperatura = 38;
resetSensor(temperatura);
cout << "En main, temperatura = " << temperatura << endl; // 38
return 0;
}


#include <iostream>

using namespace std;

void resetSensor(int& lectura) { // <-- nota el &
lectura = 0;
cout << "Dentro de la funcion: " << lectura << endl;
}
int main() {
int temperatura = 38;
resetSensor(temperatura);
cout << "En main, temperatura = " << temperatura << endl; // 0
return 0;
}


void aplicarIVA(double& precio, double iva) {
precio *= (1 + iva);
}
int main() {
double precio = 100.00;
aplicarIVA(precio, 0.12);
// B) precio ahora vale 112.00 — la referencia modifico el original.
}

