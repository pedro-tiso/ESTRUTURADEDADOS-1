#include <iostream>
#include <string>
using namespace std;
struct animal {
    int idade;
    string nome, raca, nomed, telefone;
};
int main() {
    animal vet[5];
    int i, maisVelho = 0;
    for (i = 0; i < 5; i++) {
        cout << "Informe o nome do animal: ";
        getline(cin, vet[i].nome);
        cout << "Informe a raça do animal: ";
        getline(cin, vet[i].raca);
        cout << "Informe a idade do animal: ";
        cin >> vet[i].idade;
        cin.ignore();
        cout << "Informe o nome do dono: ";
        getline(cin, vet[i].nomed);
        cout << "Informe o telefone do dono: ";
        getline(cin, vet[i].telefone);
        cout << endl;
    }
    for (i = 0; i < 5; i++) {
        cout << "O nome do animal é " << vet[i].nome << endl;
        cout << "A raça do animal é: " << vet[i].raca << endl;
        cout << "A idade do animal é: " << vet[i].idade << endl;
        cout << "O nome do dono é: " << vet[i].nomed << endl;
        cout << "O telefone do dono é: " << vet[i].telefone << endl;
        cout << endl;
        if (vet[i].idade > vet[maisVelho].idade) {
            maisVelho = i;
        }
    }
    cout << "O animal mais velho é " << vet[maisVelho].nome << " e o dono é " << vet[maisVelho].nomed << endl;
}
