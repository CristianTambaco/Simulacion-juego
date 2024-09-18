#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inicioale() {
    srand(time(0));
}

char opcion() {
    double aleatorio = (double)rand() / RAND_MAX; // 0 y 1

    char opcion;

    if (aleatorio < 0.33) {
        opcion = 'A';
    } else if (aleatorio < 0.66) {
        opcion = 'B';
    } else {
        opcion = 'C';
    }

    return opcion;
}

int main() {
    int numero; 
    cout << "Ingrese el numero de veces a repetir: ";
    cin >> numero;

    inicioale();

    for (int i = 1; i <= numero; i++) {
        char op1, op2, op3;

        op1 = opcion();
        op2 = opcion();
        op3 = opcion();

        if (op1 == op2 and op2 == op3) {
            cout << "Ganaste! " << op1<<" "<<op2<<" "<<op3<<endl;
        } else {
            cout << "Perdiste! "<< op1<<" "<<op2<<" "<<op3<<endl;
        }
    }

    return 0;
}
