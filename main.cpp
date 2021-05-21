#include <iostream>
using namespace std;

// FUNÇÃO COM OS PONTEIROS DA PRIMEIRA PARTE DA ATIVIDADE

void ImprimeMaxEMin (){
int *PonteiroInt, *PonteiroMax, *PonteiroMin;
  int Numeros[10], i, Max, Min;
  
  PonteiroInt = Numeros;

//INICIALIZANDO AS VARIÁVEIS DE MÁXIMO E MÍNIMO COM O PRIMEIRO ELEMENTO DO ARRAY

  Max=Numeros[0];
  Min=Numeros[0];

//SEQUÊNCIA DE REPETICÃO PARA FAZER A LEITURA DO ARRAY E ENCONTRAR O MÁXIMO E O MÍNIMO

  for (int i=0; i<10; i++){

  if (Numeros[i]>Max){
      Max=Numeros[i];
      PonteiroMax= &Max;
  }else if (Numeros[i]<Min) {
       Min=Numeros[i];
      PonteiroMin= &Min;

     }
   }
//ÁREA DE IMPRESSÃO DOS RESULTADOS ENCONTRADOS

   cout<<"Endereço do vetor: "<< PonteiroInt <<endl;
   cout<<"Endereço do Maximo: "<< PonteiroMax <<endl;
   cout<<"Endereço do Minimo: "<< PonteiroMin <<endl;

   cout<<"O maior número neste vetor é: "<< Max <<endl;
   cout<<"O menor número neste vetor é: "<< Min <<endl;
  
  
   }
  
 
//FUNÇÃO PRINCIPAL

int main() {

   int Numeros[10], i;

//SOLICITAÇÃO DOS DADOS AO USUÁRIO

  cout<< "digite um conjunto de números: "<<endl;
  cin>>Numeros[i];
  cout<< "vetor digitado:  " << Numeros[i]<<endl;

//CHAMANDO A FUNÇÃO PARA ATIVAR OS PARÂMETROS SOLICITADOS NA ATIVIDADE 2

  ImprimeMaxEMin();
}

