#include <iostream>
#include <string>

using namespace std;

int ejercicio7() {
        cout << "Ingrese una cadena de caracteres: "; //el usuario ingresa la cadena de caracteres
        string cadena;
        cin >> cadena;

        cout << "Original: " << cadena << endl;

       string ca_sin_repetir;
       size_t i = 0;
        while (i < cadena.length()) { // ciclo para iterar en los caracteres de la cadena original
            char caden = cadena[i];
            ca_sin_repetir += caden;

            while (i < cadena.length() && cadena[i] == caden) { // Buscamos el próximo carácter que sea diferente de caden
                i++;
            }
        }

        cout << "Sin repetir: " << ca_sin_repetir << endl;

        return 0;
    }
