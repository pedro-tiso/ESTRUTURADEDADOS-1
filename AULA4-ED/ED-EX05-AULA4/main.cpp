#include <iostream>

using namespace std;
void recebe (double *vet){
    int i;

    for(i = 0; i <6; i++){
        cout << "Digite um número para posição " << i+1 << " do vetor: ";
        cin >> vet[i];
    }
     cout << endl;
      cout << endl;
}
void mostra (double *vet){
    int i;
    for(i=0 ; i<6 ; i++){
        cout << "Número da posição " << i+1 << " do vetor: " << vet[i];
        cout<<endl;
      }
      cout << endl;
      cout << endl;
      cout << "Número negativos: ";
      cout << endl;
      for(i=0 ; i<6 ; i++){
            if(vet[i]<0){
        cout << "Número da posição " << i+1 << " do vetor: " << vet[i];
        cout << endl;
            }
}
}
int main()
{
    double *vetor;

    vetor = new double [6];

    recebe(vetor);
    mostra(vetor);

    delete[] vetor;
    return 0;
}
