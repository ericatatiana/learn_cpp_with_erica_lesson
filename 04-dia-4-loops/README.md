# 💻 Projeto C++ - Loops (for & while) (Dia 4)

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Beginner Friendly](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)

---

> 💡 **Nota:** Este projeto faz parte da série para iniciantes em C++. Aqui vais aprender a repetir ações usando ciclos (`for` e `while`).

---

## 📌 Sobre o Projeto

Vamos evoluir o jogo do gato e do rato para:

* Repetir o menu até o utilizador decidir sair
* Usar `while` para manter o programa em execução
* Usar `for` para repetir ações específicas

---

## 💻 Código

```cpp id="q4c8rn"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomeJogador;
    int escolha;
    bool continuar = true;

    cout << "=== JOGO DO GATO E DO RATO 🐱🐭 ===" << endl;
    cout << "Digite o teu nome: ";
    cin >> nomeJogador;

    while (continuar) {
        cout << endl;
        cout << "Olá, " << nomeJogador << "! Escolhe uma acao:" << endl;
        cout << "1 - Correr atras do rato" << endl;
        cout << "2 - Comer queijo" << endl;
        cout << "3 - Dormir" << endl;
        cout << "0 - Sair do jogo" << endl;

        cout << "Opcao: ";
        cin >> escolha;

        cout << endl;

        if (escolha == 1) {
            cout << "Voce correu atras do rato! 🏃" << endl;

            // Loop for (repetição)
            for (int i = 1; i <= 3; i++) {
                cout << "Correndo... passo " << i << endl;
            }

            cout << "O rato escapou! 😆" << endl;
        }
        else if (escolha == 2) {
            cout << "Voce decidiu comer queijo 🧀" << endl;
        }
        else if (escolha == 3) {
            cout << "Voce foi dormir 😴" << endl;
        }
        else if (escolha == 0) {
            cout << "Saindo do jogo... ate logo! 👋" << endl;
            continuar = false;
        }
        else {
            cout << "Opcao invalida 😅" << endl;
        }
    }

    return 0;
}
```

---

## 🧠 Explicação do Código

### 🔹 Loop `while`

```cpp id="5c6o3h"
while (continuar)
```

Repete o programa enquanto a condição for verdadeira.

---

### 🔹 Variável de controlo

```cpp id="g7x2lp"
bool continuar = true;
```

Controla quando o programa deve parar.

---

### 🔹 Loop `for`

```cpp id="k2s1vz"
for (int i = 1; i <= 3; i++)
```

Repete um bloco de código várias vezes.

---

### 🔹 Parar o loop

```cpp id="4y9m3s"
continuar = false;
```

Termina o programa.

---

## ⚙️ Como executar

```bash id="1d6k8r"
g++ jogo_loop.cpp -o jogo_loop
./jogo_loop
```

---

## 📁 Exemplo de execução

```id="p2j8nm"
Olá, Erica! Escolhe uma acao:
1 - Correr atras do rato
2 - Comer queijo
3 - Dormir
0 - Sair do jogo

Opcao: 1

Correndo... passo 1
Correndo... passo 2
Correndo... passo 3

O rato escapou! 😆
```

---

## 🎯 Objetivo Educacional

Neste projeto aprendeste:

* Repetir ações com `while`
* Controlar execução do programa
* Usar `for` para repetir tarefas

---

## 📚 Próximo passo

👉 No próximo dia:

* Arrays (listas de dados)
* Guardar múltiplas informações 🔥

---

## 👩🏽‍💻 Autora

**Erica Tatiana Manuel Langa**
🚀 Desenvolvedora em evolução

---

## ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ 😄
