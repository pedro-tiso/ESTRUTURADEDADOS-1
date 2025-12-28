#ifndef PILHA2_H_INCLUDED
#define PILHA2_H_INCLUDED
#include <cstring>
struct Pilha{
char nome[5][5];
int idade[5], topo;
};
void criarpilha(Pilha *ptrpilha);
void inserirpilha (Pilha *ptrpilha);
void exibepilha(Pilha *ptrpilha);
void excluipilha(Pilha *ptrpilha);
#endif // PILHA2_H_INCLUDED
