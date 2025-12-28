#include <iostream>

using namespace std;
void pegavalor(int x);
void exibevalor (int x);
int main()
{
    int x;
    pegavalor(x);
    exibevalor(x);
    return 0;
}
void pegavalor (int x){
cout << "Digite um número: ";
cin >> x;
}
void exibevalor (int x){
cout << x;
}
