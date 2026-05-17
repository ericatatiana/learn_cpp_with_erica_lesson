# C++ Dia 10 - Vetores (vector) 

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Intermediate](https://img.shields.io/badge/Level-Intermediate-orange?style=for-the-badge)

---

> 💡 **Nota:** Hoje vais aprender `vector`, que é uma versão mais avançada e flexível dos arrays.

---

#  Sobre o Projeto

No Dia 5 aprendeste arrays fixos.
Agora vais aprender **vetores (vector)**, que permitem:

 adicionar elementos dinamicamente
 não definir tamanho fixo
 trabalhar com listas reais

---

#  Objetivo

Aprender a:

* criar vetores
* adicionar elementos
* percorrer listas
* manipular dados dinamicamente

---

#  Código

```cpp id="v10vec1"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> personagens;
    string nome;
    int opcao;

    cout << "=== SISTEMA DE PERSONAGENS 📦 ===" << endl;

    do {
        cout <<   endl;
        cout << "1 - Adicionar personagem" << endl;
        cout << "2 - Mostrar personagens" << endl;
        cout << "0 - Sair" << endl;

        cout << "Opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite o nome do personagem: ";
            cin >> nome;

            personagens.push_back(nome);

            cout << "Personagem adicionado com sucesso 😄" << endl;
        }

        else if (opcao == 2) {
            cout << endl;
            cout << "=== LISTA DE PERSONAGENS ===" << endl;

            if (personagens.empty()) {
                cout << "Nenhum personagem adicionado 😅" << endl;
            } else {
                for (int i = 0; i < personagens.size(); i++) {
                    cout << i << " - " << personagens[i] << endl;
                }
            }
        }

        else if (opcao == 0) {
            cout << "Saindo... 👋" << endl;
        }

        else {
            cout << "Opcao invalida 😅" << endl;
        }

    } while (opcao != 0);

    return 0;
}
```

---

#  Explicação do Código

##  O que é vector?

```cpp id="vecdef1"
vector<string> personagens;
```

É uma lista dinâmica que pode crescer.

---

##  Adicionar elementos

```cpp id="vecadd1"
personagens.push_back(nome);
```

Adiciona um novo elemento no vetor.

---

##  Verificar se está vazio

```cpp id="vecempty1"
personagens.empty()
```

Retorna verdadeiro se não houver elementos.

---

##  Tamanho do vector

```cpp id="vecsize1"
personagens.size()
```

Mostra quantos elementos existem.

---

##  Percorrer vetor

```cpp id="vecfor1"
for (int i = 0; i < personagens.size(); i++)
```

Permite listar todos os elementos.

---

#  Como executar

## 1. Compilar

```bash id="veccomp1"
g++ vector.cpp -o vector
```

---

## 2. Executar

```bash id="vecrun1"
./vector
```

---

#  Exemplo de execução

```id="vecout1"
=== SISTEMA DE PERSONAGENS  ===

1 - Adicionar personagem
2 - Mostrar personagens
0 - Sair

Opcao: 1
Digite o nome do personagem: Tommy
Personagem adicionado com sucesso 😄

Opcao: 2

=== LISTA DE PERSONAGENS ===
0 - Tommy
```

---

#  Objetivo Educacional

Neste projeto aprendeste:

* Trabalhar com `vector`
* Adicionar elementos dinamicamente
* Criar menus interativos
* Manipular listas reais

---

#  Exercício

 Agora tenta sozinho:

Cria um sistema que:

* guarda nomes de alunos
* guarda notas
* mostra média das notas
* permite remover aluno (desafio)

---

#  Próximo passo

👉 Dia 11:

* Funções com retorno (`return`)
* Cálculos e lógica mais avançada 

---

# 👩🏽‍💻 Autora

**Erica Tatiana**
Desenvolvedora em evolução

---

# ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
