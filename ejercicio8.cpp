#include <iostream>
#include <string>

using namespace std;

bool letras(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int ejercicio8() {
    cout<<"Ingrese una cadena que incluya letras y números: "<<endl; // el usuario ingresa una cadena de caracteres
    string cadena;
    cin>>cadena;

    cout << "Original: " << cadena << endl; // se imprime lo qu el usuario ingresó

    cout << "Letras: ";
    for(char c : cadena) {
        if(letras(c)) {
            cout << c;
        }
    }

    cout << "\n";

    cout << "Números: " ;
    for(char c : cadena) {
        if(! letras(c) && c  ) {
            cout << c;
        }
    }
    cout << "\n";

    return 0;
}
