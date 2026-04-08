#include <iostream>
using namespace std;

int main() {
    double saldo = 1500.00;
    double& ref = saldo; // ref ahora es lo mismo que saldo 

    ref = 2000.00; // si cambio ref, cambia saldo 

    cout << "saldo = " << saldo << endl; //? 2000.00 
    cout << "ref = " << ref << endl;     //? 2000.00 

    return 0;
}




#include <iostream>
using namespace std;

// el & hace que se modifique la variable original 
void aplicarDescuento(double& saldo, double porcentaje) {
    saldo = saldo - (saldo * porcentaje); [cite: 90, 91]
}

int main() {
    double cuenta = 500.00;
    aplicarDescuento(cuenta, 0.10); // descuento del 10% 

    cout << "Saldo final: " << cuenta << endl; //? 450.00 

    return 0;
}





#include <iostream>
using namespace std;

void intercambiar(int& a, int& b) {
    // logica de 3 lineas con temporal 
    int temp = a; 
    a = b;        
    b = temp;     
}

int main() {
    int x = 15, y = 42;
    
    intercambiar(x, y); // llamar a la funcion 

    cout << "x = " << x << ", y = " << y << endl; 
    // deberia salir: x = 42, y = 15 

    return 0;
}

