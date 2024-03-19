#include <iostream>
#include <vector>

using namespace std;

// Función para calcular la suma de los divisores de un número
int sumaDivisores(int num) {
    int suma = 1; // inicializamos la suma con 1, ya que 1 siempre es divisor de cualquier número
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            suma += i;
            if (i != num / i) { // agregamos el divisor y su complemento si son diferentes
                suma += num / i;
            }
        }
    }
    return suma;
}

int ejercicio_17() {
    int a, b;
    cout << "Ingrese dos números a: ";
    cin >> a;
    cout<<"Ingrese el número b: ";
    cin >> b;

    // Verificamos si la suma de los divisores de a y b son amigables, o sea, la suma de los divisores de a,
    //debe darnos el mismo número que b.
    if (sumaDivisores(a) == b && sumaDivisores(b) == a) {
        cout << a << " y " << b << " son números amigables." << endl;
        cout<< "El resultado de la suma es " << a+b<<endl; // se realiza la suma de los dos números.
    } else {
        cout << a << " y " << b << " no son números amigables." << endl;
    }

    return 0;
}
