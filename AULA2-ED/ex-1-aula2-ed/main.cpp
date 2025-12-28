#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    //Tentei alterar de tudo mas várias das saídas não estão sendo
    //exibidas com os resultados esperados.
    SetConsoleCP(1254);
    SetConsoleOutputCP(1254);
    int x=2, y=10, *ptr1, *ptr2;
    char letra = 'P', *ptrLetra;
    ptr1 = &x;
    ptr2 = nullptr;
    cout << "Valor de ptr de x: "<< ptr1;
    cout << "\nValor de x de forma indireta: " << *ptr1;
    cout << "\nEndereço de ptr1:"<<&ptr1;
    cout << "\nValor de x: "<<x;
    cout << "\nEndreço de x: "<<&x;
    cout << endl;
    cout << endl;

    ptr2=&y;
    *ptr2=5;

    cout << "Valor de ptr de y: "<< ptr2;
    cout << "\nValor de y de forma indireta: " << *ptr2;
    cout << "\nEndereço de ptr2:"<<&ptr2;
    cout << "\nValor de y: "<<y;
    cout << "\nEndreço de y: "<<&y;
    cout << endl;
    cout << endl;

     ptrLetra=&letra;
    *ptrLetra='t';

    cout << "Valor de ptr da letra: "<< static_cast<void*>(ptrLetra);
    cout << "\nValor da letra de forma indireta: " << *ptrLetra;
    cout << "\nEndereço de ptrLetra:"<<&ptrLetra;
    cout << "\nValor da letra: "<<letra;
    cout << "\nEndreço de y: "<<static_cast<void*>(&letra);
    cout << endl;
    cout << endl;

    return 0;
}
