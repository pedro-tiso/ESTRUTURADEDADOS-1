#include <iostream>
#include "FilaEstatica.h"
#include <stdlib.h>

using namespace std;

void criarFila(FILA *Fila){
    (*Fila).qt = 0;
    Fila->inicio=0;
    Fila->fim = -1;
}

int filaEhVazia(FILA *Fila){
    if(Fila->qt==0){
        cout << "Fila está vazia!\n";
        return 0;
    }
    return 1;
}

int filaEhCheia(FILA *Fila){
    if(Fila->qt == MAX){
        cout << "Fila está cheia!\n";
        return 0;
    }
    return 1;
}

void inserirElemento(FILA *Fila){
    int x;
    x = filaEhCheia(Fila);
    if(x==1){
        Fila->fim++;
        if(Fila->fim==MAX)
            Fila->fim =0;
        cout<<"Informe o elemento a ser inserido: ";
        cin >> Fila->dados[Fila->fim];
        Fila->qt++;
    }
    else cout << "Não foi possível a inserção!\n";

}

void removerElemento(FILA *Fila){
    int x;
    x=filaEhVazia(Fila);
    if(x==1){
        cout <<"O elemento " << Fila->dados[Fila->inicio] << "foi removido!\n";
        Fila->inicio++;
        Fila->qt--;
        if(Fila->inicio==MAX)
            Fila->inicio =0;

        if(Fila->qt==0){
            Fila->inicio =0;
            Fila->fim =-1;
        }
    }
    else cout <<"Não foi possível remover!\n";
}

void exibirElemento(int elemento){
    cout << "Valor é " << elemento;
}

void exibirFila(FILA *Fila){
    int x;
    x=filaEhVazia(Fila);
    if(x==1){
        for(int i=0, j=Fila->inicio; i<Fila->qt; i++){
            if(j==MAX)
                j=0;
            cout << Fila->dados[j] << " ";
            j++;
        }
    }
}

void exibirFilaoContrario(FILA *Fila){
    int x;
    x=filaEhVazia(Fila);
    if(x==1){
        for(int i=0, j=Fila->fim; i<Fila->qt; i++){
            if(j==MAX)
                j=0;
            cout << Fila->dados[j] << " ";
            j--;
        }
    }
}

void exibirFilamaiorquezero(FILA *Fila){
   int x;
    x=filaEhVazia(Fila);
    if(x==1){
        for(int i=0, j=Fila->inicio; i<Fila->qt; i++){
            if(j==MAX)
                j=0;
            if(Fila->dados[j] > 0){
            cout << Fila->dados[j] << " ";
            j++;
            }
            else {
            cout << " ";
            j++;
            }
        }
    }
}
  /*
    if(x==1){
        for(int i=0; i<=Fila->qt; i++){
            if(Fila->inicio+1==MAX)
                cout << Fila->dados[Fila->inicio+i-MAX] << " ";
            else
                cout << Fila->dados[Fila->inicio+i] << " ";
        }
    }*/


