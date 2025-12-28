#include <iostream>

using namespace std;

int main()
{
   int n1,n2,result;

   do{
    cout << "Digite o primeiro número" << endl;
    cin >> n1;
    cout << "Digite o segundo número" << endl;
    cin >> n2;

    if(n2<=0){
        cout << "O divisor não pode ser menor ou igual a zero." << endl;
    }

   }
   while(n2<=0);

   result = n1/n2;

   cout << "O resultado da divisão foi: " << result;
}
