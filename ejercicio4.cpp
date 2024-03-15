#include <iostream>
#include <string>

using namespace std;

int conver_cade_num(string cadena) {
    int numero = 0;

    for (int i = 0; i < cadena.length(); i++) { // para recorrer cada valor del caracter
        char caracter = cadena[i];
        int valorcaracter = caracter - '0'; // Convertir el carácter a su valor numérico

        numero = numero * 10 + valorcaracter; // número se *10 y se le suma valorcaracter para construir en número entero
    }

    return numero;
}

int ejercicio4() {
    string cadena = "123";
    int numero = conver_cade_num(cadena);

    cout << "Numero entero: " << numero << endl; // se imprime el número convertido en entero

    return 0;
}
