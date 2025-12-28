#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

struct Pilha {
int dados[5];
int topo, qtd;
};

void criarpilha(Pilha *ptrpilha);
void inserirpilha(Pilha *ptrpilha);
void exibepilha(Pilha *ptrpilha);
void removepilha(Pilha *ptrpilha);
void mostratodos (Pilha *ptrpilha);
void inserirpilhadesempilha(Pilha *ptrpilha);
#endif // PILHA_H_INCLUDED
