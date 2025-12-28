#include <iostream>
#include "listaEncadeada.h"
#include<windows.h>

using namespace std;
char menuInicial();
char menuSaida();

int main(){
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    char menu;
    int dado;
    Lista* lista = criarLista();
    do{
        menu=menuInicial();
        switch(menu){
        case '1':
            cout << "Informe o elemento a ser inserido na lista: ";
            cin >> dado;
            inserirElementoLista (lista, dado);
            break;
        case '2':
            cout << "Informe o elemento a ser removido da lista: ";
            cin >> dado;
            removerElementoLista(lista, dado);
            break;
       case '3':
            exibirElementosLista(lista);
            break;
        case '4':
           // verificar se um determinado elemento está na lista
            consultarElementoLista(lista,dado);
            break;
        case 'S': cout <<"Saindo do programa!\n"; break;
        default: cout<< "Opção inválida!";
        }
       // menu = menuSaida();
        //system("clear||cls");
    }while(menu!='S');
    liberarLista(lista);
    return 0;
}
char menuInicial(){
    char menu;
    cout <<"\n --------- Menu --------\n"
            "1 - para inserir um elemento na lista ordenada\n"
            "2 - para remover um elemento da lista ordenada\n"
            "3 - exibir elementos cadastrados\n"
            "4 - verificar se uma informação está na lista.\n"
            "S - sair do menu.\n"
            "--> ";
    fflush(stdin);
    cin>>menu;
    menu = toupper(menu);
    return menu;
}
