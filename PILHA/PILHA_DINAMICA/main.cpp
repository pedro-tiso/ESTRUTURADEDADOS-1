#include <iostream>
#include <windows.h>
#include "pilhaDinamica.h"

using namespace std;

int main(){
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    char opc;

    Pilha *topo = criarPilha();
    do{
        cout << "Informe a opção desejada!\n"
                "1 - inserir um elemento na pilha.\n"
                "2 - exibir o topo da pilha.\n"
                "3 - remover o topo da pilha.\n"
                "0 - sair do menu.\n"
                "--> ";
        fflush(stdin);
        cin >> opc;

        switch(opc){
        case '1':
            inserirElemento(topo);
            break;
        case '2':
            exibirElemento(topo);
            break;
        case '3':
            removerElemento(topo);
            break;
        case '0':
            cout<<"\nSaindo do menu!\n";
            break;
            default: cout <<"\nOpção Inválida!\n";
        }
        cout<<"\n-------------------\n\n";
    }while(opc!='0');

    liberarPilha(topo);

    //system("clear||cls");
    return 0;
}
