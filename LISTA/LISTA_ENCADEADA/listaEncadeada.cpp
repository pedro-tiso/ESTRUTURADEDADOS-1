#include <iostream>
#include "listaEncadeada.h"

using namespace std;

Lista* criarLista(){
    Lista *lista = new (std::nothrow) Lista;
    if(lista==nullptr){
        cout <<"Erro! Lista não foi criada!";
        exit(0);
    }
    lista->inicioLista=nullptr;
    lista->qtd=0;

    return lista;
}

int listaEhVazia(Lista *lista){
    if(lista->inicioLista==nullptr){
        cout << "Lista está vazia!\n";
        return 0;
    }
    return 1;
}

void inserirElementoLista(Lista *lista, int dado){
    Node *novoNo = new (std::nothrow) Node;
    if(novoNo==nullptr)
        cout << "Erro! Não há espaço na memória para o novoNo\n";
    else{
       novoNo->info = dado;
       novoNo->prox = nullptr;

       if(listaEhVazia(lista)==0){
            lista->inicioLista = novoNo;
       }
       else{
            Node *noAnt, *noAux = lista->inicioLista;
            while(noAux!=nullptr && novoNo->info > noAux->info){
                noAnt = noAux;
                noAux = noAux->prox;
            }
            if(noAux==lista->inicioLista){ //inserção de um elemento no início da lista
                novoNo->prox=noAux;
                lista->inicioLista = novoNo; //necessário atualizar o inicio
            }
            else{ //inserção de um elemento no meio ou final da lista
                noAnt->prox=novoNo;
                novoNo->prox=noAux;
            }
       }
       lista->qtd++;
       cout << "Elemento inserido com sucesso!\n";
    }
}

void removerElementoLista(Lista *lista, int dado){
    if(listaEhVazia(lista)!=0){ //existem elementos na lista
        Node *noAnt, *noAux = lista->inicioLista;
        while(noAux!=nullptr && dado>noAux->info){
            noAnt = noAux;
            noAux = noAux->prox;
        }
        if(noAux->info==dado){
            if(noAux==lista->inicioLista)
                lista->inicioLista = noAux->prox;
            else
                noAnt->prox = noAux->prox;
            delete noAux;
            lista->qtd--;
        }
        else
            cout << "Elemento não está na lista!\n";
        //outra forma de resolução da remoção
        /*
        if(noAux->info==dado && noAux==lista->inicioLista){
            lista->inicioLista = noAux->prox;
            delete noAux;
            lista->qtd--;
        }
        else if(noAux->info==dado){
            noAnt->prox = noAux->prox;
            delete noAux;
             lista->qtd--;
        }
        else
            cout << "Elemento não está na lista!\n";
        */
    }
}

void exibirElementosLista(Lista *lista){
    if(listaEhVazia(lista)!=0){
        Node *noAux = lista->inicioLista;
        while(noAux!=nullptr){
            cout << noAux->info << " -> ";
            noAux=noAux->prox;
        }
        cout << "nulo;";
    }
}

void consultarElementoLista(Lista *lista, int dado){
    if(listaEhVazia(lista)!=0){
        Node *noAux = lista->inicioLista;
        while(noAux!=nullptr && dado>noAux->info){
            noAux=noAux->prox;
        }
        if(dado==noAux->info)
            cout << "O dado está presente na lista!\n";
        else
            cout << "A informação não está presente na lista!\n";
    }
}

void liberarLista(Lista *lista){
    Node *noAux = lista->inicioLista;
    while(noAux!=nullptr){
        lista->inicioLista = noAux->prox;
        delete noAux;
        noAux = lista->inicioLista;
    }
    delete lista;
}

