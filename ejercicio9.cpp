#include <iostream>
#include <string>

using namespace std;

int ejercicio9() {
    int n;
    string cadena;
    cout << "Ingrese una cadena de dígitos: ";
    cin >> cadena;
    cout << "En cuantos grupos desea separar la cadena: ";
    cin >> n;

    while (cadena.length() % n != 0) { // añade ceros a la izquierda si la cadena lo requiere.
        cadena = '0' + cadena;
    }

    int suma = 0;
    for (size_t i = 0; i < cadena.length(); i += n) {
        string grupo = cadena.substr(i, n); // Extrae un grupo de n dígitos.
        suma += stoi(grupo); // conveierte el grupo en un número entero y lo suma.
    }

    cout << "Original: "<< cadena << "/ " << "Suma: "<< suma << endl;

    return 0;
}


