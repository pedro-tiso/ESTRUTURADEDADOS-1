#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string nome, nomdi,*ptrn, *ptrndi;
    double n, *ptrnota;

    cout << "Digite seu nome: " << endl;
    getline(cin,nome);
    cout << "Digite o nome da disciplina: " << endl;
    cin.ignore();
    getline(cin,nomdi);
    cout << "Digite sua nota (0.0 a 100): " << endl;
    cin >> n;

    ptrn = &nome;
    ptrndi = &nomdi;
    ptrnota = &n;

    cout << "Nome: " << *ptrn<<endl;
    cout << "Nome da disciplina: " << *ptrndi<<endl;
    if(*ptrnota >=60.00){
        cout << "Situação: Aprovado" << endl;
    }

    else if(*ptrnota < 60.00){
        cout << "Situação: Reprovado" << endl;
    }
    return 0;
}
