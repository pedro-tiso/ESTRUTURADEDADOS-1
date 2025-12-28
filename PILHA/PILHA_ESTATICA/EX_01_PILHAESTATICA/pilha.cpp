#include "pilha.h"
#include <iostream>

using namespace std;

void criarpilha(Pilha *ptrpilha){
ptrpilha->topo=0;
ptrpilha->qtd=0;
}

void inserirpilha(Pilha *ptrpilha){

    if(ptrpilha->topo < 5){
        cout << "Informe o elemento que deseja inserir na pilha: ";
        cin >> ptrpilha->dados[ptrpilha->topo];
        ptrpilha->topo++;
        ptrpilha->qtd++;
    }
    else{
        cout << "Pilha está cheia, impossível inserir\n";
    }
}

void exibepilha(Pilha *ptrpilha){

   if(ptrpilha->topo > 0){
    cout << "Último elemento da pilha é: " << ptrpilha->dados[ptrpilha->topo-1];
   }
   else{
    cout << "Não há elementos na pilha.\n";
   }
}

void removepilha(Pilha *ptrpilha){

    if(ptrpilha->topo == 0 ){
        cout << "Não é possivel remover, fila vazia.";
    }
    else{
    ptrpilha->topo--;
    ptrpilha->qtd--;
    cout << "Elemento removido (supostamente).\n";
         }
}
void mostratodos (Pilha *ptrpilha){
for(int cont = 0; cont < ptrpilha->qtd; cont++ ){
    cout << ptrpilha->dados[cont] << " ";
}
cout << "A qtd é:" << ptrpilha->qtd;
}
void inserirpilhadesempilha(Pilha *ptrpilha){

int aux;
aux = ptrpilha->dados[ptrpilha->topo];

    if(ptrpilha->topo ==  5){
      cout << "Não é possível inserir.";
    }
    else if (ptrpilha->topo <  0){
        cout << "Pilha está vazia, impossível completar operação.\n";
    }
    else{
      ptrpilha->topo++;
      ptrpilha->dados[ptrpilha->topo] = aux;
      ptrpilha->topo--;
    }
    }
