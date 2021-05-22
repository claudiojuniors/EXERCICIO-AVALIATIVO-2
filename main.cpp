#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// FUNÇÃO COM OS PONTEIROS DA PRIMEIRA PARTE DA ATIVIDADE

int Numeros[10];

void ImprimeMaxEMin (int &Max, int &Min){

    int *PonteiroMax, *PonteiroMin, *PonteiroInt;

    PonteiroInt = Numeros;

    //INICIALIZANDO AS VARIÁVEIS DE MÁXIMO E MÍNIMO COM O PRIMEIRO ELEMENTO DO ARRAY

    Max=Numeros[0];
    Min=Numeros[0];

    //SEQUÊNCIA DE REPETICÃO PARA FAZER A LEITURA DO ARRAY E ENCONTRAR O MÁXIMO E O MÍNIMO

    for (int i=0; i<10; i++){
        if (Numeros[i] > Max){
            Max=Numeros[i];
        }if (Numeros[i] < Min){
            Min=Numeros[i];
        }
    }
    PonteiroMax = &Max;
    PonteiroMin = &Min;

    //ÁREA DE IMPRESSÃO DOS RESULTADOS ENCONTRADOS

    cout<<"Endereco do vetor: "<< PonteiroInt <<endl;
    cout<<"Endereco do Maximo: "<< PonteiroMax <<endl;
    cout<<"Endereco do Minimo: "<< PonteiroMin <<endl;
    cout<<"O maior numero neste vetor eh: "<< Max <<endl;
    cout<<"O menor numero neste vetor eh: "<< Min <<endl;

}


//FUNÇÃO PRINCIPAL

int main() {

   int Maior, Menor;

    //SOLICITAÇÃO DOS DADOS AO USUÁRIO
    for (int i=0; i<10; i++){
      cout<< "digite um numero: " << endl;
      cin>>Numeros[i];
    }

    for (int i=0; i<10; i++){
        cout<< "posicao: " << i << " = "<< Numeros[i]<<endl;
    }

    //CHAMANDO A FUNÇÃO PARA ATIVAR OS PARÂMETROS SOLICITADOS NA ATIVIDADE 2

    ImprimeMaxEMin(Maior, Menor);

}

