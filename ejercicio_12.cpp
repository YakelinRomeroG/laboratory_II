#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

//Prototipo de funcion
void ingresarDatos();
void imprimirMatriz(int **,int,int);
//void sumaMatriz(int **, int, int);
int **punteroMatrz,fila,columna,sumaf,sumac,sumad1,sumad2,resul,resul1,resul2;

int ejercicio_12(){
   cout<<"****** Tamaño de la Matriz ******\n";
   ingresarDatos();
   imprimirMatriz(punteroMatrz,fila ,columna );

   for(int i= 0;i<fila;i++){
      delete[] punteroMatrz[i];
   }
   delete[] punteroMatrz;

   return 0;
}

void ingresarDatos(){ // verificar el tamaño de la matriz
   cout<<"Digite el número de filas: ";
   cin>>fila;
   cout<<"Digite el número de columnas: ";
   cin>>columna;
   if(fila == columna){
      punteroMatrz= new int*[fila];
      for(int i= 0;i<fila;i++){
         punteroMatrz[i] = new int[columna];
      }

   }else{
         cout<<"Por favor ingrese la misma cantidad de filas y columnas."<<endl;
         ingresarDatos();
      }
   // se ingresan los datos de la matriz
   cout<<"\nIngrese números enteros sin repetir,para que al sumar los datos de cada fila,\n";
   cout<<"de cada columna y de cada diagonal principal den como resultado la misma constante.\n";
   for(int i= 0;i<fila;i++){
      for(int j= 0;j<columna;j++){
         cout<<"Ingrese los valores para su matriz["<<i<<"]["<<j<<"]: ";
         cin>>*(*(punteroMatrz+i)+j);
       }
     }
   }
void imprimirMatriz(int **punteroMatrz,int fila, int columna){ // imprime la matriz
        cout<<"\nImprimiendo matriz: \n";
        for(int i=0;i<fila;i++){
            for(int j=0;j<columna;j++){
                cout<<"|";
                cout<<*(*(punteroMatrz+i)+j);
                }
                cout<<"|";
                cout<<"\n";
                }
        for(int i=0;i<fila;i++){  //ciclo para sumar las filas de matriz
            sumaf=0;
            resul1 = i+1;
            for(int j=0;j<columna;j++){
                sumaf=sumaf+ *(*(punteroMatrz+i)+j);
                }
                cout<<"La suma de la Fila# "<<resul1<<" es:" <<sumaf<<endl;
        }


        for(int j= 0;j<columna;j++){ // ciclo para sumar las columnas de la matriz
            sumac=0;
            resul2 =j+1;
            for(int i= 0;i<fila;i++){
                sumac=sumac+ *(*(punteroMatrz+i)+j);
                }
            cout<<"La suma de la Columna# "<<resul2<<" es: "<<sumac<<endl;
        }

        sumad1=0;
        for(int i= 0;i<fila;i++){  // ciclo para sumar la diagonal #1
            for(int j= 0;j<columna;j++){
                if (i == j){
                    sumad1=sumad1+ *(*(punteroMatrz+i)+j);
                    }
            }
        }
        cout<<"La suma de la Diagonal #1 es: "<<sumad1<<endl;


        sumad2=0;
        for(int i= 0;i<fila;i++){ //ciclo pra sumar la diagonal #2
            for(int j= 0;j<columna;j++){
                if (i+j == fila-1){
                    sumad2=sumad2+ *(*(punteroMatrz+i)+j);
                    }
            }
        }
        cout<<"La suma de la Diagonal #2 es: "<<sumad2<<endl;

        //verificamos si la suma de fila,columna y diagonales es constante.
        if(sumaf == sumac || sumad1 == sumad2){
            cout<<"Su matriz es un cuadro mágico.\n";
            }else{
                cout<<"Su matriz no es un cuadro mágico.\n";
            }
}

