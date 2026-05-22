#  C++ Dia 12 - Struct (`struct`) 🧱

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Intermediate](https://img.shields.io/badge/Level-Intermediate-orange?style=for-the-badge)

---

> 💡 **Nota:** Hoje vais aprender `struct`, que permite criar tipos de dados personalizados em C++.

---

#  Sobre o Projeto

Até agora usámos:
✔ variáveis separadas
✔ arrays
✔ vectors

Agora vais aprender:
 agrupar dados relacionados
 criar estruturas organizadas
 preparar base para POO (Programação Orientada a Objetos)

---

#  Objetivo

Aprender a:

* criar `struct`
* guardar múltiplos dados
* organizar informações
* trabalhar com objetos simples

---

#  Código

```cpp id="struct1"
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
```

---

#  Explicação do Código

##  O que é `struct`?

```cpp id="structdef1"
struct Personagem
```

Permite criar um novo tipo de dado personalizado.

---

##  Atributos

```cpp id="structattr1"
string nome;
int idade;
string poder;
```

São as informações que pertencem ao personagem.

---

##  Criar objeto

```cpp id="structobj1"
Personagem p1;
```

Cria uma variável do tipo `Personagem`.

---

##  Aceder aos dados

```cpp id="structaccess1"
p1.nome
```

Usa `.` para aceder aos atributos.

---

#  Como executar

## 1. Compilar

```bash id="structcomp1"
g++ struct.cpp -o struct
```

---

## 2. Executar

```bash id="structrun1"
./struct
```

---

#  Resultado esperado

```id="structout1"
=== SISTEMA DE PERSONAGENS 🧱 ===

Nome: Tommy
Idade: 5
Poder: Super velocidade

Nome: Jerryzinho
Idade: 2
Poder: Invisibilidade
```

---

#  Objetivo Educacional

Neste projeto aprendeste:

* Criar `struct`
* Organizar dados
* Criar objetos simples
* Trabalhar com atributos

---

#  Exercício

 Agora tenta sozinho:

Cria uma `struct` chamada `Aluno` com:

* nome
* idade
* curso
* nota final

Depois:

* cria 2 alunos
* mostra os dados no ecrã

---

#  Próximo passo

 Dia 13:

* Mini sistema completo 😏
* juntar:

  * vector
  * struct
  * funções
  * ficheiros

---

#  Autora

**Erica Tatiana**
 Desenvolvedora em evolução

---

# ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
