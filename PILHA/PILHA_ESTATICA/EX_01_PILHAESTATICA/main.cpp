#include <iostream>
#include "pilha.h"

using namespace std;

int main()
{

    Pilha pilha;
    criarpilha(&pilha);
    int opc;
    do{
    cout << "Informe a opção desejada: \n"
            "1-Para inserir um elemento na pilha\n"
            "2-Para exibir um elemento na pilha\n"
            "3-Para remover um elemento na pilha\n"
            "4-Para empilhar desempilhando\n"
            "5-Para mostrar todos os elementos da fila\n"
            "0-Para sair\n"
            "-->";
    cin >> opc;

       switch(opc)
       {
    case 1:
   inserirpilha(&pilha);
    break;
    case 2:
   exibepilha(&pilha);
    break;
    case 3:
   removepilha(&pilha);
    break;
    case 4:
   inserirpilhadesempilha(&pilha);
    break;
    case 5:
   mostratodos(&pilha);
    break;
    case 0:
   cout << "--Saindo do menu!--\n";
    break;

    default:

    cout << "Número inválido";
       }
       cout << "\n--------------\n\n";
}
while(opc!=0);

}
