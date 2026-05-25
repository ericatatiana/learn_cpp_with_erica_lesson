#  C++ Dia 13 - Mini Sistema Completo 

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Mini System](https://img.shields.io/badge/Project-Mini%20System-red?style=for-the-badge)

---

> 💡 **Nota:** Hoje vamos juntar tudo o que aprendeste até agora para criar um mini sistema funcional em C++.

---

#  Sobre o Projeto

Neste projeto vais usar:

✔ `struct`
✔ `vector`
✔ funções
✔ loops
✔ menus
✔ lógica de programação

---

#  Objetivo

Criar um pequeno sistema de gestão de alunos que:

* adiciona alunos
* mostra alunos
* guarda notas
* calcula média

---

#  Código

```cpp id="mini13"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//  Struct
struct Aluno {

    string nome;
    int idade;
    float nota;

};

//  Vector
vector<Aluno> alunos;

//  Funcao adicionar aluno
void adicionarAluno() {

    Aluno novo;

    cout << endl;
    cout << "Nome do aluno: ";
    cin >> novo.nome;

    cout << "Idade: ";
    cin >> novo.idade;

    cout << "Nota final: ";
    cin >> novo.nota;

    alunos.push_back(novo);

    cout << endl;
    cout << "Aluno adicionado com sucesso 😄" << endl;
}

//  Mostrar alunos
void mostrarAlunos() {

    cout << endl;
    cout << "=== LISTA DE ALUNOS ===" << endl;

    if (alunos.empty()) {

        cout << "Nenhum aluno registado 😢" << endl;

    } else {

        for (int i = 0; i < alunos.size(); i++) {

            cout << endl;
            cout << "Aluno #" << i + 1 << endl;
            cout << "Nome: " << alunos[i].nome << endl;
            cout << "Idade: " << alunos[i].idade << endl;
            cout << "Nota: " << alunos[i].nota << endl;

            if (alunos[i].nota >= 10) {
                cout << "Status: Aprovado 😄" << endl;
            } else {
                cout << "Status: Reprovado 😢" << endl;
            }
        }
    }
}

//  Calcular media geral
float calcularMediaTurma() {

    float soma = 0;

    for (int i = 0; i < alunos.size(); i++) {

        soma += alunos[i].nota;

    }

    if (alunos.size() > 0) {
        return soma / alunos.size();
    }

    return 0;
}

int main() {

    int opcao;

    do {

        cout << endl;
        cout << "=== SISTEMA ESCOLAR 🚀 ===" << endl;
        cout << "1 - Adicionar aluno" << endl;
        cout << "2 - Mostrar alunos" << endl;
        cout << "3 - Media da turma" << endl;
        cout << "0 - Sair" << endl;

        cout << "Opcao: ";
        cin >> opcao;

        if (opcao == 1) {

            adicionarAluno();

        }

        else if (opcao == 2) {

            mostrarAlunos();

        }

        else if (opcao == 3) {

            float media = calcularMediaTurma();

            cout << endl;
            cout << "Media da turma: " << media << endl;
        }

        else if (opcao == 0) {

            cout << "Saindo do sistema 👋" << endl;

        }

        else {

            cout << "Opcao invalida 😅" << endl;

        }

    } while (opcao != 0);

    return 0;
}
```

---

#  Explicação do Projeto

##  `struct`

```cpp id="m13struct"
struct Aluno
```

Cria um tipo personalizado para guardar dados dos alunos.

---

##  `vector`

```cpp id="m13vector"
vector<Aluno> alunos;
```

Guarda vários alunos dinamicamente.

---

##  Funções

```cpp id="m13func"
void adicionarAluno()
```

Organizam e reutilizam código.

---

##  Média da turma

```cpp id="m13media"
return soma / alunos.size();
```

Calcula média automaticamente.

---

#  Como executar

## 1. Compilar

```bash id="m13comp"
g++ sistema.cpp -o sistema
```

---

## 2. Executar

```bash id="m13run"
./sistema
```

---

#  Exemplo de execução

```id="m13out"
=== SISTEMA ESCOLAR 🚀 ===

1 - Adicionar aluno
2 - Mostrar alunos
3 - Media da turma
0 - Sair

Opcao: 1

Nome do aluno: Erica
Idade: 21
Nota final: 17

Aluno adicionado com sucesso 😄
```

---

#  Objetivo Educacional

Neste projeto aprendeste:

* Criar mini sistemas
* Trabalhar com `struct`
* Trabalhar com `vector`
* Organizar lógica
* Criar menus funcionais

---

#  Exercício

 Agora melhora o sistema:

Tenta adicionar:

* remoção de alunos
* pesquisa por nome
* guardar dados em ficheiro
* editar notas

---

#  Próximo passo

 Dia 14:

* Programação Orientada a Objetos (POO)
* Classes e objetos 

---

#  Autora

**Erica Tatiana**
 Desenvolvedora em evolução

---

#  Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
