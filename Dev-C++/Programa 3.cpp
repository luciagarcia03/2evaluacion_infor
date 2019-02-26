#include<iostream>
/*Este programa sirve para saber qué números son pares e impares*/
main (){
     float num[10];
     int i;
     char salir;
     float suma=0;
     float n_numeros;
     float media;
     std::cout<<"Cuantos numeros quieres introducir: ";
     std::cin>>n_numeros;
     for(i=0;i<n_numeros;i++){
                              std::cout<<"Dime un numero: ";
                              std::cout<<num[i];
                              }
                              std::cout<<"Lista de numeros:\n";
                              for(i=0;i<n_numeros;i++){   
                                                        suma=suma+num[i];
                         }                       
     media=suma/n_numeros;
     std::cout<<"\nMEDIA: "<<media;
     std::cout<<"Toca cualquier tecla para salir";
     std::cin>> salir;
     return 0;
}


