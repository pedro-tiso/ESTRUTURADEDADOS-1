#ifndef LISTADUPLA_H_INCLUDED
#define LISTADUPLA_H_INCLUDED

struct No{
    int info;
    No *prox, *ant;
};

struct Lista{
    No *inicioLista;
    int qtd;
};

Lista* criarLista();
int listaEhVazia(Lista *lista);
void inserirElementoListaDupla(Lista* lista, int inf);
void removerElementoListaDupla(Lista *lista, int inf);
void consultarElementoListaDupla(Lista *lista, int inf);
void exibirElementosListaDupla(Lista *lista);
void excluirListaDupla(Lista *lista);
void excluirListaDupla(Lista *lista);
void exibirElementosListaPares(Lista *lista);
void exibirElementosListaDiv(Lista *lista,int n);
void VerificaListaPolindroma(Lista *lista);
void somaElementosListaDupla(Lista *lista);
void encontraMenorElementoListaDupla(Lista *lista);
#endif // LISTADUPLA_H_INCLUDED
