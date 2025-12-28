#include <iostream>

using namespace std;
void preenche (double *v1, double *v2, int *n){
    int i;
 for(i = 0; i < *n ; i++){

    v1[i] = -1;
    do{
    cout << "Insira um número para o vetor 1, posição " << i+1 << ": "<<endl;
    cin >> v1[i];}

    while(v1[i]<0 || v1[i]>10);

 }
 cout << endl;
 cout << endl;
 for(i = 0; i < *n ; i++){
     v2[i] = -1;
    do{
    cout << "Insira um número para o vetor 2, posição " << i+1 << ": "<<endl;
    cin >> v2[i];}

    while(v2[i]<0 || v2[i]>10);

 }
}

void somar (double *v1, double *v2, int *n, double *sum){
    int i;
 for(i = 0; i < *n ; i++){
    sum[i] = v1[i] + v2[i];
 }
 cout << endl;
 cout << endl;
}

void mostra (int *n, double *sum){
    int i;
 for(i = 0; i < *n ; i++){
    cout << "Soma das duas posições " << i +1 << ": " << sum[i] << "\n";
 }
}
int main()
{
    double *vet1, *vet2, *soma;
    int *qtd = new int;
    cout << "Qual será o tamanho do vetor?"<<endl;
    cin >> *qtd;
    cout << endl;


    vet1 = new double [*qtd];
    vet2 = new double [*qtd];
    soma = new double [*qtd];
    preenche(vet1, vet2, qtd);
    somar(vet1, vet2, qtd, soma);
    mostra(qtd, soma);

    delete [] vet1;
    delete [] vet2;
    delete [] soma;
    delete qtd;

    return 0;
}
