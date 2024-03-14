#include <iostream>

using namespace std;

int ejercicio1() {
    //solicitamos la cantidad deseada al usuario.
    int cantidad;
    cout << "Ingrese la cantidad deseada: ";
    cin >> cantidad;

    // definimos las denominaciones de billetes y monedas.
    int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};

    // calculamos cuantos billetes y monedas hay en la cantidad deseada.
    int i = 0;
    while (cantidad > 0 && i < sizeof(denominaciones) / sizeof(denominaciones[0])) {
        int denominacion_actual = denominaciones[i];
        int contador = cantidad / denominacion_actual;
        if (contador >= 0) {
            cout << denominaciones[i] << " : " << contador << endl;
            cantidad %= denominacion_actual;
        }
        i++;
    }
    //imprime el faltante.
    cout << "Faltante: " << cantidad << endl;
    return 0;
}
