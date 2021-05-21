#include <iostream>
using namespace std;

void ImprimeMaxEMin (int *PonteiroMax, int *PonteiroMin){

  int *PonteiroInt, *PonteiroMax, *PonteiroMin;
  int Numeros[0], i, Max, Min;
  
  *PonteiroInt = Numeros[i];
 
  for (int i=0; i<10; i++){

  if (Numeros[i]>Max){
      Max=Numeros[i];
      PonteiroMax= &Max;
  }else {
       Min=Numeros[i];
      PonteiroMin= &Min;

     }
   }
  
 }


int main() {

  int Numeros[0], i;
  

  cout<< "digite um conjunto de números: "<<endl;
  cin>>Numeros[i];
  cout<< "vetor digitado:  " << Numeros[i]<<endl;
  
  ImprimeMaxEMin();
}

