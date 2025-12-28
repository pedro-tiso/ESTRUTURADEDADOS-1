#include <iostream>
#include <cstring>

using namespace std;

struct Cadastro {
string nome, cargo;
int ano;
double sal;
};
void cadastrar (Cadastro *cad){
    int i;

    for(i=0; i < 5 ; i++){
    cad[i].ano = 2026;
    cout << "Qual seu nome? ";
    getline(cin, cad[i].nome);
    do{
    cout << "Qual o seu ano de de ingresso na empresa?";
    cin >> cad[i].ano;
    }
    while((cad[i].ano) > 2025);
    cin.ignore();
    cout<<"Qual seu cargo na empresa?";
    getline(cin,cad[i].cargo);
    cout <<"Qual seu salário?";
    cin >> cad[i].sal;
    cin.ignore();
    cout << endl;
    cout << endl;
    }
    cout << endl;
    cout << endl;
};
void mostrar (Cadastro *cad){
    int i, j = 0;
    double maior = 0;
    for (i = 0 ; i < 5 ; i ++){
    if((cad[i].sal) > maior){
        j = i;
    maior = cad[i].sal;
    }
    }
    cout << "Nome do funcionario com maior salario: " << cad[j].nome <<"\n";
    cout << "Maior salário: " << cad[j].sal << "\n";
};
int main()
{
    Cadastro *cad = new Cadastro[5];

     cadastrar(cad);
     mostrar(cad);

    delete [] cad;

    return 0;
}
