#include <iostream>
#include <cstring>

using namespace std;
struct Cadastro{
string nome, sexo;
int idade, cpf;

};
void preenche (Cadastro *cad){
cout << "Digite seu nome: ";
getline(cin, cad ->nome);
cout << "Digite seu sexo (M ou F): ";
getline (cin, cad -> sexo);
cout << "Digite sua idade: ";
cin >> cad -> idade;
cout << "Digite seu CPF: ";
cin >> cad -> cpf;
}

void exibe (Cadastro *cad){
cout << "Nome: " << cad ->nome;
cout<<endl;
cout << "Sexo: " << cad ->sexo;
cout<<endl;
cout << "Idade: " << cad -> idade;
cout<<endl;
cout << "CPF: " << cad -> cpf;
}
int main()
{
    Cadastro cad;

    preenche(&cad);
    cout <<  endl;
    cout << endl;
    exibe(&cad);
    return 0;
}
