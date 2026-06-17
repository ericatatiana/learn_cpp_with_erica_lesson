#  C++ Dia 15 - Construtores 

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![OOP](https://img.shields.io/badge/Topic-Constructors-red?style=for-the-badge)

---

> 💡 **Nota:** Hoje vais aprender construtores, que permitem inicializar objetos automaticamente.

---

#  Sobre o Projeto

Até agora aprendeste:
✔ classes
✔ objetos
✔ métodos

Agora vais aprender:
 construtores
 inicialização automática
 código mais limpo e profissional

---

#  Objetivo

Aprender a:

* criar construtores
* inicializar objetos automaticamente
* evitar repetição de código
* melhorar a organização

---

#  O que é um Construtor?

Um construtor é uma função especial da classe que:
👉 é chamada automaticamente quando o objeto é criado
👉 serve para inicializar dados

---

#  Código

```cpp id="ctor15"
#include <iostream>
#include <string>

using namespace std;

class Personagem {

public:
    string nome;
    int idade;

    //  Construtor
    Personagem(string n, int i) {
        nome = n;
        idade = i;
    }

    //  Metodo
    void mostrar() {
        cout << endl;
        cout << "=== PERSONAGEM ===" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }
};

int main() {

    //  Objetos com construtor
    Personagem p1("Tommy", 5);
    Personagem p2("Jerryzinho", 2);
    Personagem p3("Spike", 7);

    p1.mostrar();
    p2.mostrar();
    p3.mostrar();

    return 0;
}
```

---

#  Explicação do Código

##  Construtor

```cpp id="ctordef15"
Personagem(string n, int i)
```

É chamado automaticamente quando crias o objeto.

---

##  Inicialização direta

```cpp id="ctorinit15"
Personagem p1("Tommy", 5);
```

O objeto já nasce com dados.

---

##  Vantagem

Antes:

```cpp
p1.nome = "Tommy";
p1.idade = 5;
```

Agora:

```cpp
Personagem p1("Tommy", 5);
```

 Mais rápido e limpo.

---

#  Como executar

## 1. Compilar

```bash id="ctorcomp15"
g++ construtores.cpp -o construtores
```

---

## 2. Executar

```bash id="ctorrun15"
./construtores
```

---

#  Resultado esperado

```id="ctorout15"
=== PERSONAGEM ===
Nome: Tommy
Idade: 5

=== PERSONAGEM ===
Nome: Jerryzinho
Idade: 2

=== PERSONAGEM ===
Nome: Spike
Idade: 7
```

---

#  Objetivo Educacional

Neste projeto aprendeste:

* Criar construtores
* Inicializar objetos automaticamente
* Melhorar organização do código
* Base da programação orientada a objetos

---

#  Exercício

 Agora tenta sozinho:

Cria uma classe `Aluno` com:

* nome
* idade
* nota

E:

* usa construtor
* cria 3 alunos
* mostra os dados no ecrã

---

#  Próximo passo

 Dia 16:

* Encapsulamento 
* private vs public
* segurança de dados

---

# 👩🏽‍💻 Autora

**Erica Tatiana**
 Desenvolvedora em evolução

---

# ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
