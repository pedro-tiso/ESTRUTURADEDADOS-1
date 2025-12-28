#include <iostream>
#include "pilhaDinamica.h"
#include <stdlib.h>

using namespace std;

Pilha* criarPilha(){
    Pilha *topo = new (std::nothrow) Pilha;
    if(topo==nullptr){
        cout << "Erro na alocação de memória!";
        exit(0);
    }
    *topo = nullptr;
    cout << "Pilha criada com sucesso!\n";
    return topo;
}

int pilhaVazia(Pilha *topo){
    int ehvazia=1;
    if(*topo==nullptr){
        cout << "Pilha está vazia!\n";
        ehvazia=0;
    }
    return ehvazia;
}

void inserirElemento(Pilha *topo){
    No *novoNo = new (std::nothrow) No;
    if(novoNo==nullptr)
        cout << "Não foi possível alocar memória para o novo elemento!\n";
    else{
        cout << "Digite o seu nome: ";
        cin >> novoNo->nome;
        cout << "Digite o seu cargo: ";
        cin >> novoNo->cargo;
        cout << "Digite o seu salário: ";
        cin >> novoNo->salario;
        novoNo->prox = nullptr;
        if(*topo==nullptr) //se a pilha estiver vazia, o topo vai apontar para o novoNo
            *topo = novoNo;
        else{ //se a pilha não estiver vazia... o novo nó apontará para o conteudo do topo
            novoNo->prox = *topo;
            *topo= novoNo;
        }
        cout << "Inserção realizada com sucesso!\n";
    }
}

void exibirElemento(Pilha* topo){
    int x;
    x = pilhaVazia(topo);
    if(x!=0){//pilha não está vazia
        No *noAux = *topo;
        cout << "Nome: " << noAux->nome  << "\n";
        cout << "Cargo: " << noAux->nome  << "\n";
        cout << "Salário: " << noAux->nome  << "\n";
    }
}

void removerElemento(Pilha *topo){
    int x;
    x = pilhaVazia(topo);
    if(x!=0){//pilha não está vazia
        No *noAux = *topo;
        *topo = noAux->prox;
        delete noAux;
    }
}

void liberarPilha(Pilha *topo){
    if(topo != nullptr){
        No *noAux;
        while((*topo) != nullptr){
            noAux = *topo;
            *topo = noAux->prox;//*topo=topo->prox;
            delete noAux;
            //ou chamar a função removerElemento
            // removerElemento(topo);
        }
        delete topo;
    }
}
