#include <iostream>
#include "FilaEstatica.h"
#include <windows.h>

using namespace std;


int main(){
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    char op;
    FILA Fila;
    criarFila(&Fila);
    do{
        cout << "Fila Estática!\n"
                "Informe a opção desejada:\n"
                "1 - Inserir elemento na fila.\n"
                "2 - Exibir o primeiro elemento.\n"
                "3 - Exibir ultimo elemento.\n"
                "4 - Remover elemento da fila.\n"
                "5 - Exibir elementos da fila.\n"
                "6 - Exibir elementos da fila ao contrário.\n"
                "7 - Exibir elementos da fila maiores que zero.\n"
                "S - Sair do menu.\n"
                "--> ";
        cin >> op;
        op = toupper(op);

        switch (op){
        case '1':
            inserirElemento(&Fila);
            break;
        case '2':{
            int x = filaEhVazia(&Fila);
            if(x==1)
                exibirElemento(Fila.dados[Fila.inicio]);
            }
            break;
        case '3':{
            int x = filaEhVazia(&Fila);
            if(x==1)
                exibirElemento(Fila.dados[Fila.fim]);
            }
            break;
        case '4':
            removerElemento(&Fila);
            break;
        case '5':
            exibirFila(&Fila);
            break;
        case '6':
            exibirFilaoContrario(&Fila);
            break;
        case '7':
            exibirFilamaiorquezero(&Fila);
            break;
        case 'S':
            cout << "Saindo do menu!!\n";
            break;
        default: cout << "Opção inválida!";
        }
        cout <<"\n-------------------------------\n\n";
    }while (op!='S');
    return 0;
}
