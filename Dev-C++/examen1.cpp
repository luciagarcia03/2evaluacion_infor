#include<iostream>
 int main (){
    
     char num[10];
     int i;
     char salir;
     char suma=0;
     char n_letras;
     char letras;
     std::cout<<"introduce cualquier palabra: ";
     std::cin>>n_letras;
     for(i=0;i<n_letras;i++){
                              std::cout<<"Dime una palabra: ";
                              std::cin>>num[i];
                              }
                              std::cout<<"Tu palabra tiene:\n"<<letras;
                              for(i=0;i<n_letras;i++){   
                                                        suma=suma+num[i];
                         }                       
     letras=suma/n_letras;
     std::cout<<"\nLETRAS: "<<letras;
     std::cout<<"Toca cualquier tecla para salir";
     std::cin>> salir;
     return 0;
}
