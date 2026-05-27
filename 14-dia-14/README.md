#  C++ Dia 14 - Classes e Objetos

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![OOP](https://img.shields.io/badge/Topic-Classes%20%26%20Objects-red?style=for-the-badge)

---

> 💡 **Nota:** Hoje vais entrar oficialmente no mundo da Programação Orientada a Objetos (POO).

---

#  Sobre o Projeto

Nos dias anteriores usaste:
* `struct`
* funções
* vectors

Agora vais aprender:
* classes
* objetos
* métodos
* organização profissional de código

---

#  Objetivo

Aprender:

* o que é uma classe
* o que é um objeto
* criar métodos
* organizar programas como aplicações reais

---

#  O que é uma Classe?

Uma classe é como um **molde**.

Exemplo:

* Classe = “Personagem”
* Objetos = Tommy, Jerryzinho, Spike

 Todos têm:

* nome
* idade
* ações

---

#  Código

```cpp id="class14"
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
```

---

#  Explicação do Código

##  Criar classe

```cpp id="classdef14"
class Personagem
```

Cria um molde para personagens.

---

##  Atributos

```cpp id="classattr14"
string nome;
int idade;
```

São os dados da classe.

---

##  Método

```cpp id="classmethod14"
void apresentar()
```

Função dentro da classe.

---

##  Objeto

```cpp id="classobj14"
Personagem p1;
```

Cria um objeto baseado na classe.

---

##  Aceder aos dados

```cpp id="classaccess14"
p1.nome
```

Usa `.` para aceder aos atributos e métodos.

---

#  Como executar

## 1. Compilar

```bash id="classcomp14"
g++ classes.cpp -o classes
```

---

## 2. Executar

```bash id="classrun14"
./classes
```

---

#  Resultado esperado

```id="classout14"
=== PERSONAGEM ===
Nome: Tommy
Idade: 5

=== PERSONAGEM ===
Nome: Jerryzinho
Idade: 2
```

---

#  Objetivo Educacional

Neste projeto aprendeste:

* Criar classes
* Criar objetos
* Trabalhar com métodos
* Introdução à POO

---

#  Exercício

 Agora tenta sozinho:

Cria uma classe chamada `Carro` com:

* marca
* modelo
* ano

Depois:

* cria 2 carros
* cria um método chamado `mostrarDados()`
* mostra os dados no ecrã

---

#  Próximo passo

 Dia 15:

* Construtores 
* Criar objetos automaticamente

---

#  Autora

**Erica Tatiana**
 Desenvolvedora em evolução

---

# ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
