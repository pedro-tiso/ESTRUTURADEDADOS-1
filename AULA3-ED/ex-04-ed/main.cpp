#include <iostream>
#include <cstring>

using namespace std;

struct Cadastro {
string nome, cargo;
int ano;
double sal;
};
void cadastrar (Cadastro *cad){
    cad->ano = 2026;
    cout << "Qual seu nome? ";
    getline(cin, cad->nome);
    do{
    cout << "Qual o seu ano de de ingresso na empresa?";
    cin >> cad->ano;
    }
    while((cad->ano) > 2025);
    cin.ignore();
    cout<<"Qual seu cargo na empresa?";
    getline(cin,cad->cargo);
    cout <<"Qual seu salário?";
    cin >> cad->sal;

    cout << endl;
    cout << endl;
};
void mostrar (Cadastro *cad){
    cout << "Nome: " << cad-> nome <<"\n";
    cout << "Ano de ingresso: " << cad-> ano << "\n";
    cout << "Cargo: " << cad->cargo << "\n";
    cout << "Salário: " << cad -> sal << "\n";
};
int main()
{
    Cadastro *cad = new Cadastro;

     cadastrar(cad);
     mostrar(cad);

    delete cad;

    return 0;
}
