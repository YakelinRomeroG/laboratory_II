
#include <iostream>
#include<string>

using namespace std;

int ejercicio6() {
    string palabra;
    bool pal_may = true;

    cout << "Ingrese la palabra: ";
    cin >> palabra;

    // Verificar si la palabra ingresada está en mayúsculas
    size_t i = 0;
    while ( i < palabra.length() && pal_may) {
        char c = palabra[i];
        if (!((c >= 'A' && c <= 'Z') || c == '-')) {
            pal_may = false;
        }
        i++;
    }

    // Si la palabra ya está en mayúsculas, imprimir el mensaje correspondiente
    if (pal_may) {
        cout << "La palabra que ingresó ya está en mayúsculas!" << endl;
        return 0;
    }

    // Convertir la palabra a mayúsculas
    i = 0;
    while (i < palabra.length()) {
        char c = palabra[i];
        if (c >= 'a' && c <= 'z') {
            palabra[i] = c - ('a' - 'A');
        }
        i++;
    }
    cout << "En mayúsculas es: " << palabra << endl;

    return 0;
}

