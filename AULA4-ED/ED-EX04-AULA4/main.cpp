#include <iostream>

using namespace std;

int main()
{
      int i;
      double *ptrvet;
     ptrvet = new double [5];

      for(i=0 ; i<5 ; i++){
        cout << "Digite um número para posição " << i+1 << " do vetor: ";
        cin >> ptrvet[i];
      }
      cout << endl;
      cout << endl;
      for(i=0 ; i<5 ; i++){
        cout << "Número da posição " << i+1 << " do vetor: " << ptrvet[i];
        cout<<endl;
      }
      cout << endl;
      cout << endl;
      cout << "Número maiores que 13: ";
      cout << endl;
      for(i=0 ; i<5 ; i++){
            if(ptrvet[i]>13){
        cout << "Número da posição " << i+1 << " do vetor: " << ptrvet[i];
        cout << endl;
            }

      }

      delete [] ptrvet;
    return 0;
}
