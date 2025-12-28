#include <iostream>

using namespace std;
void recebevet (int *ptrvet,int qtd){
int i;
for (i=0;i < qtd ; i++){
    cout << "Digite um número para posição " << i+1 << " do vetor: ";
    cin >> ptrvet[i];
}
cout << endl;
cout << endl;
}
void mostravet (int *ptrvet,int qtd){
int i;
for (i=0;i < qtd ; i++){
    cout << "Posição " << i+1 << " do vetor: " << ptrvet[i];
    cout<< endl;
}
}
void somavet (int *ptrvet,int qtd){
int i, sum = 0;
for (i=0;i < qtd ; i++){
    sum+=ptrvet[i];
}
cout << "A soma dos valores do vetor foi: " << sum;
}
int main()
{
    int qtd;

    cout << "Quantas posições terá seu vetor? " << endl;
    cin >> qtd;

    int vet[qtd];
    recebevet(vet, qtd);
    mostravet(vet, qtd);
    somavet(vet, qtd);

    return 0;
}
