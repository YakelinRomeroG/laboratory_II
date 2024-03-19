#include <iostream>
#include <string>

using namespace std;

int ejercicio7() {
    cout << "Ingrese una cadena de caracteres: "; //el usuario ingresa la cadena de caracteres
    string cadena;
    cin >> cadena;

    cout << "Original: " << cadena << endl;

    string ca_sin_repetir;

    // Utilizamos un array de booleanos para mantener un registro de qué caracteres hemos visto
    bool visto[256] = {false};

    // Iteramos sobre la cadena original
    for (char c : cadena) {
        // Si no hemos visto este carácter antes, lo agregamos a la cadena sin repetir y lo marcamos como visto
        if (!visto[static_cast<unsigned char>(c)]) {
            ca_sin_repetir += c;
            visto[static_cast<unsigned char>(c)] = true;
        }
    }

    cout << "Sin repetir: " << ca_sin_repetir << endl;

    return 0;
}
