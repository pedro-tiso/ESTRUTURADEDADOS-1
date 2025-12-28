#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED

struct Node{
    int info;
    Node *prox;
};

struct Lista{
    Node *inicioLista;
    int qtd;
};

Lista* criarLista();
int listaEhVazia(Lista *lista);
void inserirElementoLista(Lista *lista, int dado);
void removerElementoLista(Lista *lista, int dado);
void exibirElementosLista(Lista *lista);
void consultarElementoLista(Lista *lista, int dado);
void liberarLista(Lista *lista);
#endif // LISTAENCADEADA_H_INCLUDED
