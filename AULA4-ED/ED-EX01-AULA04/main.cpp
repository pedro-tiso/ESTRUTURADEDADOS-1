#include <iostream>

using namespace std;
void somar (int *soma){
    int a, b;
    cout << "Digite o primeiro número: " << endl;
    cin >> a;
    cout << "Digite o segundo número: " << endl;
    cin >> b;

*soma=(a*3)+(b*3);
}
int main()
{
int soma;
somar(&soma);

cout << "O valor do primeiro numero x3 somado ao segundo x3 é: " << soma;
    return 0;
}

