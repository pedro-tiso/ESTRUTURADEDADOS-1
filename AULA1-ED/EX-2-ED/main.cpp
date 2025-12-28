#include <iostream>

using namespace std;

int main()
{
    int vet[10],i;

    for (i=0;i<10;i++){
        cout << "Insira um número para a posição " << i+1 << " do vetor: ";
        cin >> vet[i];
    }
    cout << endl;
    for (i=0;i<10;i++){
        cout << vet[i] << "\t";
    }
     cout << endl;
     cout << endl;
    for (i=9;i>=0;i--){
        cout << vet[i] << "\t";
    }

}
