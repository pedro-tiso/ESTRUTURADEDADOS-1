#include <iostream>

using namespace std;

int main()
{
    int v1,v2;
    int *ptr1,*ptr2,r;
     cout << "Digite o primeiro número: "<< endl;
     cin>>v1;
     cout << "Digite o segundo número: "<< endl;
     cin>>v2;

    ptr1=&v1;
    ptr2=&v2;

    r= *ptr1 + *ptr2;

    cout << "O resultado é: " << r;



    return 0;
}
