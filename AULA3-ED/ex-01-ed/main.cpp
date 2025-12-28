#include <iostream>

using namespace std;

int main()
{
 double *vet1, *vet2, *vetresul;
 int qtd, i;

 cout << "Qual será o tamanho dos vetores?" << endl;
 cin >> qtd;
 cout<< endl;

 vet1 = new double [qtd];
 for(i = 0; i < qtd ; i++){
    vet1[i] = -1;
    do{
    cout << "Insira um número para o vetor 1, posição " << i+1 << ": "<<endl;
    cin >> vet1[i];}

    while(vet1[i]>0 || vet1[i]<10);

 }
 vet2 = new double[qtd];
 cout << endl;
 cout << endl;
 for(i = 0; i < qtd ; i++){
    do{
    cout << "Insira um número para o vetor 2, posição " << i+1 << ": "<<endl;
    cin >> vet2[i];}

    while(vet2[i]>0 || vet2[i]<10);

 }
 cout << endl;
 cout << endl;
 for(i = 0; i < qtd ; i++){
    cout << "Vetor 1, posição "<<  i+1 << ": " << vet1[i];

 }
 cout << endl;
 cout << endl;
 for(i = 0; i < qtd ; i++){
    cout << "Vetor 2, posição "<<  i+1 << ": " << vet2[i];

 }
 cout << endl;
 cout << endl;
  vetresul = new double [qtd];
 for(i = 0; i < qtd ; i++){
    vetresul[i] = vet1[i]+vet2[i];
    cout << "Vetor 3, posição "<<  i+1 << ": " << vetresul[i];

 }
 delete[] vet1;
 delete [] vet2;
 delete [] vetresul;
    return 0;
}
