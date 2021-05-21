#include <iostream>
using namespace std;

void ImprimeMaxEMin (){

  
   }
  
 


int main() {

  int *PonteiroInt, *PonteiroMax, *PonteiroMin;
  int Numeros[0], i, Max=Numeros[0], Min=Numeros[0];

  cout<< "digite um conjunto de números: "<<endl;
  cin>>Numeros[i];
  cout<< "vetor digitado:  " << Numeros[i]<<endl;
  
 
  
  PonteiroInt = Numeros;
 
  for (int i=0; i<10; i++){

  if (Numeros[i]>Numeros[i+1]){
      Max=Numeros[i];
      PonteiroMax= &Max;
  }else {
       Min=Numeros[i];
      PonteiroMin= &Min;

     }
   }

   cout<<"Endereço do vetor: "<< PonteiroInt <<endl;
   cout<<"Endereço do Maximo: "<< PonteiroMax <<endl;
   cout<<"Endereço do Minimo: "<< PonteiroMin <<endl;

   cout<<"O maior número neste vetor é: "<< Max <<endl;
   cout<<"O menor número neste vetor é: "<< Min <<endl;
}

