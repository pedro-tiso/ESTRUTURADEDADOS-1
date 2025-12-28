#include <iostream>

using namespace std;

int main()
{
    int vet[5],i;
    i = 0;
    do{
        cout << "Informe um número positivo: " <<endl;
        cin >> vet[i];

        if(vet[i]<0){
            cout << "Número inválido, informe outro."<< endl;
            cout << endl;
        }
        else{
            i++;
        }
    }

    while(i<=4);

   cout << endl;
    for(i=0;i<=4;i++){
        cout << vet[i] << "\t";
    }
}
