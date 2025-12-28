#include <iostream>
#include <cstring>
using namespace std;

struct Aluno{
string nome, nomed;
float nota;
};
void situacaoaluno(Aluno *ptraluno){

    cout << "Digite seu nome:"<< endl;
    getline(cin,ptraluno->nome);
    cout << "Digite o nome da disciplina:"<< endl;
    getline(cin,ptraluno->nomed);
    cout << "Digite sua nota (de 0.0 a 100):"<< endl;
    cin>> ptraluno -> nota;


    cout << "Seu nome:"<< ptraluno->nome << endl;
    cout << "Nome da disciplina:"<< ptraluno->nomed << endl;
 if (ptraluno->nota >= 60.00){
    cout << "Situação: Aprovado"<< endl;
}
 else if(ptraluno->nota < 60.00){
    cout << "Situação: Reprovado" << endl;
}
}

int main()
{
   Aluno cadaluno;

   Aluno *ptraluno;

   ptraluno = &cadaluno;

   situacaoaluno(&cadaluno);

    return 0;
}
