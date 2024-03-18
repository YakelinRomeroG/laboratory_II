#include <iostream>
#include <string>
using namespace std;

void conver_num_cad(int numero, string &cadena) { //Función conver_num_cad  recibe un número entero y una cadena de caracteres por referencia.
    cadena = to_string(numero); //La función to_string convierte el numero en cadena y lo asigna a la variable cadena por referencia.
}
int ejercicio5() {
    int numero;
    string resultado_c;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    conver_num_cad(numero, resultado_c); //Llama a la función con el número ingresado y la variable resultado_c para almacenar.

    cout << "El número en cadena es:  " <<resultado_c << endl;

    return 0;
}


