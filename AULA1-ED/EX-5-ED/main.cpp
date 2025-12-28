#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct aluno {
int ano, pront;
string nome;
};
int main()
{
aluno aluno;

    cout << "Informe o nome do aluno: ";
    cin.ignore();
    getline(cin, aluno.nome);
    cout << "Informe o ano de nascimento do aluno: ";
    cin >> aluno.ano;
    cout << "Informe o prontuário: ";
    cin >> aluno.pront;
    cout <<endl;
    cout << endl;
    cout << "O aluno " << aluno.nome << " do prontuário " << aluno.pront << " tem " << 2025 - aluno.ano << " em 2025.";
