#ifndef FILAESTATICA_H_INCLUDED
#define FILAESTATICA_H_INCLUDED
#define MAX 5
struct FILA{
    int dados[MAX];
    int qt, inicio, fim;
};
void criarFila(FILA *Fila);
int filaEhCheia(FILA *Fila);
int filaEhVazia(FILA *Fila);
void inserirElemento(FILA *Fila);
void removerElemento(FILA *Fila);
void exibirElemento(int elemento);
void exibirFila(FILA *Fila);
void exibirFilaoContrario(FILA *Fila);
void exibirFilamaiorquezero(FILA *Fila);
#endif // FILAESTATICA_H_INCLUDED
