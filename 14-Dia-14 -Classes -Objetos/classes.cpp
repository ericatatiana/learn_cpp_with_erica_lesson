#include <iostream>
#include <string>

using namespace std;

//  Classe
class Personagem {

public:

    string nome;
    int idade;

    //  Metodo
    void apresentar() {

        cout << endl;
        cout << "=== PERSONAGEM ===" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;

    }

};

int main() {

    //  Criacao de objetos
    Personagem p1;
    Personagem p2;

    // Dados do personagem 1
    p1.nome = "Tommy";
    p1.idade = 5;

    // Dados do personagem 2
    p2.nome = "Jerryzinho";
    p2.idade = 2;

    // Mostrar dados
    p1.apresentar();
    p2.apresentar();

    return 0;
}
