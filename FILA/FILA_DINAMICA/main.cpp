#include <iostream>
#include "FilaDinamica.h"
#include <cctype>

using namespace std;

int main()
{
    char op;
   Fila *fila = criarFila();

    do{
     cout << "Fila Dinâmica!!"
              "\n--------------"
              "\nInforme a opção:"
              "\n1- Inserir elemento na fila."
              "\n2- Remover elemento na fila."
              "\n3- Exibir primeiro elemento da fila."
              "\n4- Exibir elementos na fila."
              "\n5- Exibir último elemento da fila."
              "\n6- Exibir fila inversa."
              "\n7- Exibir quantidade de elementos da fila."
              "\nS- Sair do programa."
              "\n-->";

              cin >> op;
              op = toupper(op);

              switch(op){
          case '1':{
              int x=inserirelemento(fila);
            break;
          }
          case '2':
            removerelemento(fila);
            break;
          case '3':
              exibirprimeiro(fila);
            break;
         case '4':
             exibirfila(fila);
            break;
         case '5':
             exibirultimo(fila);
            break;
         case '6':
             exibirinversa(fila);
            break;
         case '7':
             exibirqtd(fila);
            break;
        case 'S':
            cout << "\nSaindo do programa.";
            break;

        default:
            cout<<"\nOpção inválida.";
              }
    }
    while (op!='S');
    return 0;
}
