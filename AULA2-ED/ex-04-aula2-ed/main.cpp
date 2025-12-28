#include <iostream>
#include <cstring>

using namespace std;
struct Animal{
string nome, especie, raca;
int idade;
};
void cadastrarAnimal(Animal *ptranimal){
   cout << "Digite o nome do animal: "<<endl;
    getline(cin,ptranimal->nome);
    cout << "Digite a espécie do animal: " <<endl;
    //cin.ignore();
    getline(cin,ptranimal->especie);
    cout << "Digite a raça do animal: " << endl;
    //cin.ignore();
    getline(cin,ptranimal->raca);
    cout << "Digite a idade do animal: " << endl;
    cin >> ptranimal->idade;
}
void ExibirCadastro(Animal *ptranimal){
    cout << "Nome do animal: " << ptranimal->nome<<endl;
    cout << "Espécie do animal: " << ptranimal->especie<<endl;
    cout << "Raça do animal: " << ptranimal->raca<<endl;
    cout << "Idade do animal: " << ptranimal->idade<<endl;
}
int main()
{
    Animal cadanimal;
    Animal *ptranimal = &cadanimal;
    cadastrarAnimal(&cadanimal);
    ExibirCadastro(&cadanimal);

    return 0;
}
