#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

// Prototipos de funciones
void vaciar_asientos(char **& cine, int fila, int columna);
void mostrar_asientos(char ** cine, int fila, int columna);
void reservar(char **& cine, int fila, int columna);
void eliminar_reserv(char **& cine, int fila, int columna);
void menu(int &opc, int fila, int columna, char **& cine);
void liberar_memoria(char **& cine, int fila);

void vaciar_asientos(char **& cine, int fila, int columna) {
    cine = new char*[fila];
    for(int i = 0; i < fila; i++) {
        cine[i] = new char[columna];
        for (int j = 0; j < columna; j++) {
            cine[i][j] = ' '; // Inicializa todos los asientos como disponibles
        }
    }
}

void mostrar_asientos(char ** cine, int fila, int columna) {
    cout << "Estado de los asientos:" << endl;
    cout << " |";
    for (int j = 0; j < columna; j++) {
        if( j < 9){
            cout<<"0";   //Agrega un cero delante de los números del 1 al 9
        }
        cout << j + 1 << "|";
        }
    cout << endl;
    char letra = 'A';
    for (int i = 0; i < fila; i++) {
        cout << letra++ << "|";
        for (int j = 0; j < columna; j++) {
                if (cine[i][j] == ' ') {
                cout << " O"; // Asiento disponible
                cout<<"|";
            } else {
                cout << " X"; // Asiento reservado
                cout<<"|";
            }

        }
        cout << endl;
    }
}

void reservar(char **& cine, int fila, int columna) {
    char fila_char;
    int fila_num, columna_num;
    cout << "Ingrese la fila del asiento a reservar (A - O): ";
    cin >> fila_char;
    cout << "Ingrese la columna del asiento a reservar (1 - 20): ";
    cin >> columna_num;

    fila_num = fila_char - 'A'; // Convertir la letra de fila a número

    if (fila_num >= 0 && fila_num < fila && columna_num >= 1 && columna_num <= columna) {
        if (cine[fila_num][columna_num - 1] == ' ') {
            cine[fila_num][columna_num - 1] = 'X'; // Marca el asiento como reservado
            cout << "Asiento reservado con éxito." << endl;
        } else {
            cout << "El asiento ya está reservado." << endl;
        }
    } else {
        cout << "Fila o columna fuera de rango." << endl;
    }
}

void eliminar_reserv(char **& cine, int fila, int columna) {
    char fila_char;
    int fila_num, columna_num;
    cout << "Ingrese la fila del asiento a eliminar reserva (A - O): ";
    cin >> fila_char;
    cout << "Ingrese la columna del asiento a eliminar reserva (1 - 20): ";
    cin >> columna_num;

    fila_num = fila_char - 'A'; // Convertir la letra de fila a número

    if (fila_num >= 0 && fila_num < fila && columna_num >= 1 && columna_num <= columna) {
        if (cine[fila_num][columna_num - 1] == 'X') {
            cine[fila_num][columna_num - 1] = ' '; // Marca el asiento como disponible
            cout << "Reserva eliminada con éxito." << endl;
        } else {
            cout << "El asiento no está reservado." << endl;
        }
    } else {
        cout << "Fila o columna fuera de rango." << endl;
    }
}

void menu(int &opc, int fila, int columna, char **& cine) {
    cout << "MENU" << endl;
    cout << "1. Reservar asiento" << endl;
    cout << "2. Eliminar reserva" << endl;
    cout << "3. Mostrar disponibilidad de asientos" << endl;
    cout << "4. Salir del menú" << endl;
    cout << "Seleccione la opción que desea ejecutar: ";
    cin >> opc;
    switch (opc) {
        case 1:
            reservar(cine, fila, columna);
            break;
        case 2:
            eliminar_reserv(cine, fila, columna);
            break;
        case 3:
            mostrar_asientos(cine, fila, columna);
            break;
        case 4:
            cout << "Saliendo del menú..." << endl;
            break;
        default:
            cout << "Opción inválida. Intente de nuevo." << endl;
            break;
    }
}

void liberar_memoria(char **& cine, int fila) {
    for (int i = 0; i < fila; i++) {
        delete[] cine[i];
    }
    delete[] cine
;
}

int ejercicio_11() {
    const int filas = 15;
    const int columnas = 20;

    char **cine;
    vaciar_asientos(cine, filas, columnas);

    int opcion = 0;
    do {
        menu(opcion, filas, columnas, cine);
    } while (opcion != 4);

    liberar_memoria(cine, filas);

    return 0;
}

