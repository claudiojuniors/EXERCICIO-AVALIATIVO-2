#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// FUNÇÃO COM OS PONTEIROS DA PRIMEIRA PARTE DA ATIVIDADE

void ImprimeMaxEMin (int &Max, int &Min){
int *PonteiroMax, *PonteiroMin;
  int i ;
  int  Numeros[10]={}, *PonteiroInt;

  PonteiroInt = Numeros;

//INICIALIZANDO AS VARIÁVEIS DE MÁXIMO E MÍNIMO COM O PRIMEIRO ELEMENTO DO ARRAY

  Max=Numeros[0];
  Min=Numeros[0];

//SEQUÊNCIA DE REPETICÃO PARA FAZER A LEITURA DO ARRAY E ENCONTRAR O MÁXIMO E O MÍNIMO

  for (int i=0; i<10; i++){

  if (Numeros[i]>Max){
      Max=Numeros[i];
      PonteiroMax= &Max;
      
      
  }else  {
       Min=Numeros[i];
      PonteiroMin= &Min;

     }
   }
  
//ÁREA DE IMPRESSÃO DOS RESULTADOS ENCONTRADOS

   cout<<"Endereço do vetor: "<< PonteiroInt <<endl;
   cout<<"Endereço do Maximo: "<< PonteiroMax <<endl;
   cout<<"Endereço do Minimo: "<< PonteiroMin <<endl;
  
}
  
 
//FUNÇÃO PRINCIPAL

int main() {

   int Numeros[10], i, Maior, Menor;

//SOLICITAÇÃO DOS DADOS AO USUÁRIO
for (int i=0; i<10; i++){
  cout<< "digite um número: "<<endl;
  cin>>Numeros[i];  
}

for (int i=0; i<10; i++){
cout<< "posição: " << i << "= "<< Numeros[i]<<endl;
}

//CHAMANDO A FUNÇÃO PARA ATIVAR OS PARÂMETROS SOLICITADOS NA ATIVIDADE 2

//ImprimeMaxEMin(Max, Min);


 ImprimeMaxEMin( Maior ,Menor);

cout<<"O maior número neste vetor é: "<< Maior <<endl;
cout<<"O menor número neste vetor é: "<< Menor <<endl;

}

