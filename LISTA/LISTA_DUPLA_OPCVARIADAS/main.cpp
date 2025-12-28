#include <iostream>
#include "listaDupla.h"
#include<windows.h>

using namespace std;
char menuInicial();
char menuSaida();

int main(){
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    char menu;
    int inf, n;
    Lista* lista = criarLista();
    do{
        menu=menuInicial();
        switch(menu){
        case '1':
            cout << "Informe o elemento a ser inserido na lista: ";
            cin >> inf;
            inserirElementoListaDupla(lista, inf);
            break;
        case '2':
            cout << "Informe o elemento a ser removido da lista: ";
            cin >> inf;
            removerElementoListaDupla(lista, inf);
            break;
       case '3':
            exibirElementosListaDupla(lista);
            break;
        case '4':
           // verificar se um determinado elemento está na lista
           cout << "Informe o elemento a ser consultado: ";
           cin >> inf;
            consultarElementoListaDupla(lista,inf);
            break;
        case '5':
            exibirElementosListaPares(lista);
            break;
        case '6':
            cout << "Digite um número para dividir os elementos: ";
            cin >> n;
             exibirElementosListaDiv(lista,n);
            break;
        case '7':
             VerificaListaPolindroma(lista);
            break;
        case '8':
             somaElementosListaDupla(lista);
            break;
        case '9':
             encontraMenorElementoListaDupla(lista);
            break;
        case 'S': cout <<"Saindo do programa!\n"; break;
        default: cout<< "Opção inválida!";
        }
        cout<<"\n-------------------\n\n";
    }while(menu!='S');
    excluirListaDupla(lista);
    return 0;
}
char menuInicial(){
    char menu;
    cout <<"\n --------- Menu --------\n"
            "1 - para inserir um elemento na lista ordenada dupla\n"
            "2 - para remover um elemento da lista ordenada dupla\n"
            "3 - exibir elementos cadastrados\n"
            "4 - verificar se uma informação está na lista dupla.\n"
            "5 - verificar quantos elementos pares existem na lista dupla.\n"
            "6 - verificar quantos elementos e quais são divisiveis pelo numero digitado.\n"
            "7 - verificar se a lista é polindroma.\n"
            "8 - Somar os elementos da lista.\n"
            "9 - Encontrar o menor elemento da lista.\n"
            "S - sair do menu.\n"
            "--> ";
    fflush(stdin);
    cin>>menu;
    menu = toupper(menu);
    return menu;
}
