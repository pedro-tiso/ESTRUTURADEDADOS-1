#include <iostream>

using namespace std;
void calc(double *ptrn1, double *ptrn2, double *ptrresult){
*ptrresult=*ptrn1 + *ptrn2;

}
int main()
{
   double n1, n2,r, *ptrn1,*ptrn2,*ptrresult;
   r = 0;

   cout << "Digite o primeiro número" << endl;
   cin >> n1;
   cout << "Digite o segundo número" << endl;
   cin >> n2;

   ptrn1=&n1;
   ptrn2=&n2;
   ptrresult=&r;

   calc(&n1,&n2,&r);

   cout << "O resultado da soma dos dois números apresentados foi: " << r << "."<<endl;
    return 0;
}
