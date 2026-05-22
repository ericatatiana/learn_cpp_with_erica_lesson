
#include <iostream>
#include <string>

using namespace std;

//  Criacao da struct
struct Personagem {

    string nome;
    int idade;
    string poder;

};

int main() {

    //  Criacao de objetos
    Personagem p1;
    Personagem p2;

    // Dados do personagem 1
    p1.nome = "Tommy";
    p1.idade = 5;
    p1.poder = "Super velocidade";

    // Dados do personagem 2
    p2.nome = "Jerryzinho";
    p2.idade = 2;
    p2.poder = "Invisibilidade";

    cout << "=== SISTEMA DE PERSONAGENS 🧱 ===" << endl;
    cout << endl;

    // Mostrar personagem 1
    cout << "Nome: " << p1.nome << endl;
    cout << "Idade: " << p1.idade << endl;
    cout << "Poder: " << p1.poder << endl;

    cout << endl;

    // Mostrar personagem 2
    cout << "Nome: " << p2.nome << endl;
    cout << "Idade: " << p2.idade << endl;
    cout << "Poder: " << p2.poder << endl;

    return 0;
}
