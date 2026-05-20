#  Projeto C++ - Arrays (Dia 5)

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Beginner Friendly](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)

---

> 💡 **Nota:** Este projeto faz parte da série para iniciantes em C++. Aqui vais aprender a trabalhar com arrays (listas de dados).

---

##  Sobre o Projeto

Neste exemplo, vamos guardar vários valores numa lista e percorrê-los usando loops.

Objetivo:

* Aprender o que são arrays
* Guardar múltiplos dados
* Percorrer dados com `for`

---

##  Código

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array de nomes
    string nomes[3] = {"Tommy", "Jerryzinho", "Spike"};

    // Array de idades
    int idades[3] = {5, 2, 7};

    cout << "=== PERSONAGENS DO JOGO 🐱🐭 ===" << endl;
    cout << endl;

    // Mostrar todos os personagens
    for (int i = 0; i < 3; i++) {
        cout << "Nome: " << nomes[i] << endl;
        cout << "Idade: " << idades[i] << " anos" << endl;
        cout << "------------------------" << endl;
    }

    cout << endl;

    // Escolher personagem
    int escolha;
    cout << "Escolhe um personagem (0, 1 ou 2): ";
    cin >> escolha;

    cout << endl;

    if (escolha >= 0 && escolha < 3) {
        cout << "Voce escolheu: " << nomes[escolha] << endl;
        cout << "Idade: " << idades[escolha] << " anos" << endl;
    } else {
        cout << "Escolha invalida 😅" << endl;
    }

    return 0;
}
```

---

##  Explicação do Código

###  O que é um array?

Um array é uma estrutura que guarda vários valores do mesmo tipo.

---

###  Criar arrays

```cpp
string nomes[3] = {"Tommy", "Jerryzinho", "Spike"};
```

Guarda 3 nomes numa única variável.

---

###  Aceder a elementos

```cpp
nomes[0]
nomes[1]
nomes[2]
```

Começa sempre no índice **0**

---

###  Percorrer com loop

```cpp
for (int i = 0; i < 3; i++)
```

Percorre todos os elementos do array.

---

### Validação

```cpp
if (escolha >= 0 && escolha < 3)
```

Garante que o utilizador escolheu um valor válido.

---

##  Como executar

```bash
g++ arrays.cpp -o arrays
./arrays
```

---

## Exemplo de execução

```
=== PERSONAGENS DO JOGO ===

Nome: Tommy
Idade: 5 anos
------------------------

Nome: Jerryzinho
Idade: 2 anos
------------------------

Nome: Spike
Idade: 7 anos
------------------------

Escolhe um personagem (0, 1 ou 2): 1

Voce escolheu: Jerryzinho
Idade: 2 anos
```

---

## Objetivo Educacional

Neste projeto aprendeste:

* Criar arrays
* Guardar vários dados
* Usar loops com arrays
* Validar entradas

---

## Próximo passo

No próximo dia:

* Funções (organizar código)
* Reutilizar lógica 

---

## 👩🏽‍💻 Autora

**Erica Tatiana**
🚀 Desenvolvedora em evolução

---

## ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ 😄
