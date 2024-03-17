#include <iostream>
#include <string>

using namespace std;

bool letras(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int ejercicio7() {
    cout<<"Ingrese una cadena que incluya letras y números: "<<endl;
    string cadena;
    cin>>cadena;

    cout << "Cadena original: " << cadena << endl;

    cout << "Letras: ";
    for(char c : cadena) {
        if(letras(c)) {
            cout << c;
        }
    }

    cout << "\n";

    cout << "Números: " ;
    for(char c : cadena) {
        if(! letras(c) && c != ' ') {
            cout << c;
        }
    }
    cout << "\n";

    return 0;
}
