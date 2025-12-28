#include <iostream>

using namespace std;

int main()
{
 double vet[10],*pvet, i;

 pvet=vet;

 for(i = 0; i < 10; i++){
    cout << "Digite um número para posição " << i+1 << " : ";
    cin >> *pvet;
    pvet++;
    cout << endl;
    cout << endl;
 }
  pvet=vet;

  for(i = 0; i < 10; i++){
    cout << "Número da posição " << i+1 << " : " << *pvet;
    cout << endl;
    cout << endl;
    pvet++;
 }
    return 0;
}
