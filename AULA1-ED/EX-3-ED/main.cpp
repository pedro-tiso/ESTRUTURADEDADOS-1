#include <iostream>

using namespace std;

int main()
{
    int vet[7],i, acum, div;
    acum = 0;
    for (i=0;i<7;i++){
        cout << "Insira um número para a posição " << i+1 << " do vetor: ";
        cin >> vet[i];
        acum = acum + vet[i];
        if((vet[i]%8)==0){
            div++;
        }
    }
    cout << endl;
    cout << endl;

    cout << "A soma dos vetores é: " << acum << "." << endl;
    cout << endl;
    cout << endl;
    cout << div << " dos vetores são divisíveis por 8.";
    cout<< endl;

}
