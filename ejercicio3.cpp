#include<iostream>
#include<string>

using namespace std;

bool compararCadenas(string cadena1, string cadena2) {
    if (cadena1.length() != cadena2.length()) { // se comprueba el tamaño de las cadenas
        return false; // falso si el tamaño entre cadenas es diferentes
    }

    // Comparar carácter por carácter
    for (int i = 0; i < cadena1.length(); i++) {
        if (cadena1[i] != cadena2[i]) {
            return false; // Si se encuentra un carácter diferente, las cadenas no son iguales
        }
    }

    return true; // Si no se encontraron diferencias, las cadenas son iguales
}

int ejercicio3() {
    cout<< "Ingrese su primera cadena de caracteres: ";
    string cadena1 ;
    cin>>cadena1;
    cout<< "Ingrese su segunda cadena de caracteres: ";
    string cadena2 ;
    cin>>cadena2;

    if (compararCadenas(cadena1, cadena2)) { //se compara las cadenas 1 y 2
        cout << "Las cadenas son iguales" << endl;
    } else {
        cout << "Las cadenas son diferentes" << endl;
    }

    return 0;
}
