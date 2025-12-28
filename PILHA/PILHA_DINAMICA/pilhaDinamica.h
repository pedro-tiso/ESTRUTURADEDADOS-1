#ifndef PILHADINAMICA_H_INCLUDED
#define PILHADINAMICA_H_INCLUDED

struct PILHA{
    char nome[50], cargo[50];
    double salario;
    PILHA *prox;
};
typedef struct PILHA *Pilha;
typedef struct PILHA No;

Pilha* criarPilha();
int pilhaVazia(Pilha *topo);
void inserirElemento(Pilha *topo);
void exibirElemento(Pilha* topo);
void removerElemento(Pilha *topo);
void liberarPilha(Pilha *topo);
#endif // PILHADINAMICA_H_INCLUDED
