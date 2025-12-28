#include <iostream>
#include "FilaDinamica.h"
#include <stdlib.h>

using namespace std;

Fila* criarFila(){
 Fila *fila = new (std::nothrow) Fila;
 if(fila==nullptr){
    cout<< "Fila não existe, não há espaço na memória.";
    exit(0);
 }
 fila->inicio = nullptr;
 fila->fim = nullptr;

 return fila;
}

int filaehvazia(Fila *fila){

if(fila->inicio == nullptr){
    cout << "Fila está vazia!";
    return 0;
}
return 1;
}

int inserirelemento (Fila *fila){
 No *novono = new (std::nothrow) No;

 if(novono==nullptr){
    cout<< "Não há espaço na memória.";
    return 0;
 }
cout << "Informe o valor a ser inserido: ";
cin >> novono->dados;
novono->prox = nullptr;

if (fila->inicio == nullptr){
  fila->inicio = novono;
  fila->fim = novono;
}
else{
    fila->fim->prox=novono;
    fila->fim=fila->fim->prox;
}
cout << "Elemento " << novono->dados <<" inserido com sucesso.\n";
return 1;
}

int removerelemento (Fila *fila){

if(filaehvazia(fila) == 1){
    No *noaux;

    noaux = fila->inicio;
    fila->inicio = fila->inicio->prox;
    if(fila->inicio == nullptr){
        fila->fim = nullptr;
    }
    cout << "Elemento " << noaux->dados << " deletado com sucesso.\n";
    delete noaux;
}
}

void exibirprimeiro(Fila *fila){
 if(filaehvazia(fila)==1){
 cout << "Primeiro elemento: " << fila->inicio->dados << ".\n";
 }
}

void exibirfila(Fila *fila){

if(filaehvazia(fila) == 1){
    No *noaux = fila->inicio;
    while(noaux!=nullptr){
        cout << noaux->dados << " ";
        noaux = noaux->prox;
    }
}
}

void excluirfila(Fila *fila){
if(filaehvazia(fila)==1){
    No *noaux;
while(fila->inicio!=nullptr){
    noaux = fila->inicio;
    fila->inicio= fila->inicio->prox;
    delete noaux;

}
}
delete fila;
}

void exibirultimo(Fila *fila){
 if(filaehvazia(fila)==1){
 cout << "Último elemento: " << fila->fim->dados << ".\n";
 }
}

void exibirinversa(Fila *fila){
int qtd, i;
if(filaehvazia(fila) == 1){
    No *noaux = fila->inicio;
    while(noaux!=nullptr){
       qtd++;
       noaux = noaux->prox;
    }
    noaux = fila->inicio;
    int vet[qtd];
    for(i = 0; i <qtd ; i++){
        vet[i] = noaux->dados;
        noaux = noaux->prox;
    }
    for(i = qtd-1; i>= 0 ; i--){
        cout << vet[i] << " ";
    }
}
}


void exibirqtd(Fila *fila){
int qtd;
if(filaehvazia(fila) == 1){
    No *noaux = fila->inicio;
    while(noaux!=nullptr){
       qtd++;
       noaux = noaux->prox;
    }
}
cout << "\nSua fila tem " << qtd << " elementos.\n";
}
