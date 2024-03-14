#include <iostream>
#include <cstdlib>
#include<map>

using namespace std;

int ejercicio2() {
    const int dimension = 200;
    //int cantidad_letras;
    char letra[dimension + 1]; // +1 para el carácter nulo al final

    // ciclo que letras aleatorias
    map<char,int> cantidad_letras;
    for (int i = 0; i < dimension; ++i) {
        letra[i] = 'A' + rand() % 26; // Letras mayúsculas del abecedario
    letra[dimension] = '\0'; // Asegurarse de que el arreglo de caracteres esté terminado con un carácter nulo
    cantidad_letras[letra[i]]++; // incrementa el contador de letras
    }
    letra[dimension]= '\0';

    // Muestra el arreglo
    cout << letra << endl;

    // Mostrar el recuento de cada letra
    cout<<"Recuento de cada letra: "<<endl;
    for (const auto& par : cantidad_letras) {
            cout << par.first << ": " << par.second << endl;
        }

    return 0;
}

