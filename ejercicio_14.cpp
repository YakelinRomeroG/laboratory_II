#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;

//Protótipo función
//void num_matriz ();
void matriz_orig(int ** matrz);
void matriz_rot_novnta(int ** matrz);
void matriz_cienOcht(int ** matrz);
void matriz_rot_dosstnta(int ** matrz);
int ** matrz, num[5][5],X;

int ejercicio_14(){
    cout<<"Su matriz tiene 5 filas y 5 columnas."<<endl;
    int** matrz = new int* [5];
    for (int i =0; i<5; i++){
         matrz[i] = new int [5];
   }
  // cout<<"Posición de la matriz.\n";
   X=0;
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
          X= X+1;
          *(*(matrz+i)+j) = X;
          if(X <= 9){
          //cout<<"["<<i<<"]["<<j<<"]: "<<"0"<<*(*(matrz+i)+j)<<endl;
          }else{
            // cout<<"["<<i<<"]["<<j<<"]: "<<*(*(matrz+i)+j)<<endl;
          }
      }
   }
   matriz_orig( matrz);
   matriz_rot_novnta (matrz);
   matriz_cienOcht(matrz);
   matriz_rot_dosstnta( matrz);
   return 0;
}
void matriz_orig(int ** matrz){
    cout<<"\nMatriz Original.\n";
    for(int i=0;i<5;i++){
        cout<<"|";
        for(int j=0;j<5;j++){
           if(*(*(matrz+i)+j)<= 9){
            cout<<"0"<<*(*(matrz+i)+j);
            }else{
               cout<<*(*(matrz+i)+j);
            }
            cout<<"|";
        }
            cout<<"\n";
   }
}
void matriz_rot_novnta(int ** matrz){
    cout<<"\nMatriz Rotada 90°."<<endl;
    for(int j=0;j<5;j++){
        cout<<"|";
      for(int i=4;i<5;i++){
         if(*(*(matrz+i)+j)<= 9){
            cout<<"0"<<*(*(matrz+i)+j);
         }else{
            cout<<*(*(matrz+i)+j);
            }
          for(int i=3;i<4;i++){
             cout<<"|";
             if(*(*(matrz+i)+j)<= 9){
                cout<<"0"<<*(*(matrz+i)+j);
             }else{
                cout<<*(*(matrz+i)+j);
             }
             for(int i=2;i<3;i++){
                cout<<"|";
                if(*(*(matrz+i)+j)<= 9){
                   cout<<"0"<<*(*(matrz+i)+j);
                }else{
                cout<<*(*(matrz+i)+j);

             }
             for(int i=1;i<2;i++){
                cout<<"|";
                if(*(*(matrz+i)+j)<= 9){
                   cout<<"0"<<*(*(matrz+i)+j);
                }else{
                   cout<<*(*(matrz+i)+j);

                }
                for(int i=0;i<1;i++){
                   cout<<"|";
                   if(*(*(matrz+i)+j)<= 9){
                      cout<<"0"<<*(*(matrz+i)+j);
                   }else{
                      cout<<*(*(matrz+i)+j);

                   }

                }
                cout<<"|";
                cout<<"\n";
                }

             }

          }

      }
    }

}
void matriz_cienOcht(int ** matrz){
    cout<<"\nMatriz Rotada 180°."<<endl;
    for(int i=4;i<5;i++){
            cout<<"|";
            for(int j=4;j<5;j++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int j=3;j<4;j++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int j=2;j<3;j++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int j=1;j<2;j++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int j=0;j<1;j++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";

                     }

                  }

               }

            }
    }
    for(int i=3;i<4;i++){
            cout<<"|";
            for(int j=4;j<5;j++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int j=3;j<4;j++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int j=2;j<3;j++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int j=1;j<2;j++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int j=0;j<1;j++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";

                     }

                  }

               }

            }
    }
    for(int i=2;i<3;i++){
            cout<<"|";
            for(int j=4;j<5;j++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int j=3;j<4;j++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int j=2;j<3;j++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int j=1;j<2;j++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int j=0;j<1;j++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";

                     }

                  }

               }

            }
    }
    for(int i=1; i<2;i++){
       cout<<"|";
            for(int j=4;j<5;j++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int j=3;j<4;j++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int j=2;j<3;j++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int j=1;j<2;j++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int j=0;j<1;j++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";

                     }

                  }

               }

            }
    }
    for(int i=0;i<1;i++){
            cout<<"|";
            for(int j=4;j<5;j++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int j=3;j<4;j++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int j=2;j<3;j++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int j=1;j<2;j++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int j=0;j<1;j++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";

                     }

                  }

               }

            }
    }
}
void matriz_rot_dosstnta(int ** matrz){
    cout<<"\nMatriz Rotada 270°."<<endl;
    for(int j=4;j<5;j++){
            cout<<"|";
            for(int i=0;i<1;i++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int i=1;i<2;i++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int i=2;i<3;i++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int i=3;i<4;i++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int i=4;i<5;i++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";

                     }

                  }

               }

            }
    }
    for(int j=3;j<4;j++){
            cout<<"|";
            for(int i=0;i<1;i++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int i=1;i<2;i++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int i=2;i<3;i++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int i=3;i<4;i++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int i=4;i<5;i++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";

                     }

                  }

               }

            }
    }
    for(int j=2;j<3;j++){
            cout<<"|";
            for(int i=0;i<1;i++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int i=1;i<2;i++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int i=2;i<3;i++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int i=3;i<4;i++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int i=4;i<5;i++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";
                     }

                  }

               }

            }
    }
    for(int j=1; j<2;j++){
       cout<<"|";
            for(int i=0;i<1;i++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int i=1;i<2;i++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int i=2;i<3;i++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int i=3;i<4;i++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int i=4;i<5;i++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";

                     }

                  }

               }

            }
    }
    for(int j=0;j<1;j++){
            cout<<"|";
            for(int i=0;i<1;i++){
               if(*(*(matrz+i)+j)<= 9){
                  cout<<"0"<<*(*(matrz+i)+j);
               }else{
                  cout<<*(*(matrz+i)+j);
               }
               for(int i=1;i<2;i++){
                  cout<<"|";
                  if(*(*(matrz+i)+j)<= 9){
                     cout<<"0"<<*(*(matrz+i)+j);
                  }else{
                     cout<<*(*(matrz+i)+j);
                  }
                  for(int i=2;i<3;i++){
                     cout<<"|";
                     if(*(*(matrz+i)+j)<= 9){
                        cout<<"0"<<*(*(matrz+i)+j);
                     }else{
                        cout<<*(*(matrz+i)+j);
                     }
                     for(int i=3;i<4;i++){
                        cout<<"|";
                        if(*(*(matrz+i)+j)<= 9){
                           cout<<"0"<<*(*(matrz+i)+j);
                        }else{
                           cout<<*(*(matrz+i)+j);
                        }
                        for(int i=4;i<5;i++){
                           cout<<"|";
                           if(*(*(matrz+i)+j)<= 9){
                              cout<<"0"<<*(*(matrz+i)+j);
                           }else{
                              cout<<*(*(matrz+i)+j);
                              }

                        }
                        cout<<"|";
                        cout<<"\n";

                     }

                  }

               }

            }
    }
}
