#include <iostream>
#include "pilha2.h"
using namespace std;

int main()
{
    Pilha pilha;
    criarpilha(&pilha);
    int opc;
    do{
    cout << "Informe a opção desejada: \n"
            "1-Para inserir nome e idade na pilha\n"
            "2-Para exibir o último nome e idade da pilha\n"
            "3-Para remover o último nome e idade da pilha\n"
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
   excluipilha(&pilha);
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
