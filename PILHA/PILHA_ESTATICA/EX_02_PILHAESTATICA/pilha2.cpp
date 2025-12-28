#include <iostream>
#include "pilha2.h"

using namespace std;
void criarpilha(Pilha *ptrpilha){
ptrpilha->topo=0;
}

void inserirpilha(Pilha *ptrpilha){

    if(ptrpilha->topo < 5){
      cout << "Informe o nome que deseja inserir na pilha: ";
      cin >> ptrpilha->nome[ptrpilha->topo];
      cout << "Informe a idade que deseja inserir na pilha: ";
      cin >> ptrpilha->idade[ptrpilha->topo];
      ptrpilha->topo++;
    }
    else{
        cout << "Pilha está cheia, impossível inserir\n";
    }
}

void exibepilha(Pilha *ptrpilha){

   if(ptrpilha->topo > 0){
    cout << "O último nome da pilha é: " << ptrpilha->nome[ptrpilha->topo-1];
    cout << "\nA última idade da pilha é: " << ptrpilha->idade[ptrpilha->topo-1];
   }
   else{
    cout << "Não há elementos na pilha.\n";
   }
}

void excluipilha(Pilha *ptrpilha){

   if(ptrpilha->topo > 0){
    ptrpilha->topo--;
   }
   else{
    cout << "Não há elementos na pilha.\n";
   }
}
