#include<iostream>
#include<cstdlib>
#include<ctime>
/*Este programa genera 5 numeros al azar*/
int main (){
     float lista[5];
     int i;
     char salir;
     double semillita;
     semillita=time(0);
     srand(semillita);
     for(i=0;i<5;i++){
                      lista[i]=rand();
                      std::cout<<lista[i]<<"\n";
                      }                       
     std::cout<<"Toca cualquier tecla para salir";
     std::cin>> salir;
     return 0;
}


