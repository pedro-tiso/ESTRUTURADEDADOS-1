#ifndef FILADINAMICA_H_INCLUDED
#define FILADINAMICA_H_INCLUDED

struct No{
 int dados;
 No *prox;
};

struct Fila {
No *inicio;
No *fim;
};

Fila* criarFila();
int filaehvazia(Fila *fila);
int inserirelemento (Fila *fila);
int removerelemento (Fila *fila);
void exibirprimeiro(Fila *fila);
void exibirfila(Fila *fila);
void excluirfila(Fila *fila);
void exibirultimo(Fila *fila);
void exibirqtd(Fila *fila);
void exibirinversa(Fila *fila);
#endif // FILADINAMICA_H_INCLUDED
