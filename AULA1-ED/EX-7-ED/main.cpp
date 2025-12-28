#include <iostream>
#include <cctype>
using namespace std;

void soma() {
    float a, b;
    cout << "Informe o primeiro numero: ";
    cin >> a;
    cout << "Informe o segundo numero: ";
    cin >> b;
    cout << "Resultado da soma: " << a + b << endl;
}

void multiplicacao() {
    float a, b, c;
    cout << "Informe o primeiro numero: ";
    cin >> a;
    cout << "Informe o segundo numero: ";
    cin >> b;
    cout << "Informe o terceiro numero: ";
    cin >> c;
    cout << "Resultado da multiplicacao: " << a * b * c << endl;
}

void divisao() {
    float a, b;
    cout << "Informe o dividendo: ";
    cin >> a;
    cout << "Informe o divisor: ";
    cin >> b;
    if (b != 0) {
        cout << "Resultado da divisao: " << a / b << endl;
    } else {
        cout << "Divisor invalido" << endl;
    }
}

int main() {
    char op;
    do {
        cout << "Menu:" << endl;
        cout << "A - Soma de dois numeros" << endl;
        cout << "B - Multiplicacao de tres numeros" << endl;
        cout << "C - Divisao de dois numeros" << endl;
        cout << "S - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> op;
        op = toupper(op);
        if (op == 'A') soma();
        else if (op == 'B') multiplicacao();
        else if (op == 'C') divisao();
    } while (op != 'S');
}
