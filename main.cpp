#include <iostream>
using namespace std;

bool ParametroEntrada (){

  int *PonteiroInt, *PonteiroMax, *PonteiroMin;
  int Numeros[0], i;
  

  if (Numeros[i]>Numeros[i+1]){
    *PonteiroMax= Numeros[i];
  }else{
    *PonteiroMin = Numeros[i];

  }
 return 0;
}

int main() {

  int Numeros[0], i;
  ParametroEntrada();

  cout<< "digite um conjunto de números: "<<endl;
  cin>>Numeros[i];
  cout<< "vetor digitado:  " << Numeros[i]<<endl;
  
  
  


}