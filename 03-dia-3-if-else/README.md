# 💻 Projeto C++ - Decisões com if/else (Dia 3)

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Beginner Friendly](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)

---

> 💡 **Nota:** Este projeto faz parte de uma série para iniciantes em C++, mostrando de forma simples como usar decisões (`if/else`).

---

## 📌 Sobre o Projeto

Neste exemplo, vamos criar uma história onde o programa toma decisões com base em condições.

🎯 Objetivo:

* Aprender `if`, `else if` e `else`
* Criar lógica no programa
* Tornar o código interativo

---

## 💻 Código

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomeJogador;
    int escolha;

    cout << "=== JOGO DO GATO E DO RATO 🐱🐭 ===" << endl;
    cout << endl;

    cout << "Digite o teu nome: ";
    cin >> nomeJogador;

    cout << endl;
    cout << "Olá, " << nomeJogador << "! 😄" << endl;
    cout << "Escolhe uma acao:" << endl;
    cout << "1 - Correr atras do rato" << endl;
    cout << "2 - Comer queijo" << endl;
    cout << "3 - Dormir" << endl;

    cout << "Opcao: ";
    cin >> escolha;

    cout << endl;

    if (escolha == 1) {
        cout << "Voce decidiu correr atras do rato! 🏃" << endl;
        cout << "O rato fugiu muito rapido... 😆" << endl;
    }
    else if (escolha == 2) {
        cout << "Voce preferiu comer o queijo 🧀" << endl;
        cout << "Boa escolha... mas o rato escapou!" << endl;
    }
    else if (escolha == 3) {
        cout << "Voce decidiu dormir 😴" << endl;
        cout << "Enquanto isso... o rato fez uma festa na cozinha 😂" << endl;
    }
    else {
        cout << "Opcao invalida 😅 tenta novamente!" << endl;
    }

    cout << endl;
    cout << "Fim do jogo 😏" << endl;

    return 0;
}
```

---

## 🧠 Explicação do Código

### 🔹 Entrada de dados

```cpp
cin >> nomeJogador;
```

O utilizador escreve informação.

---

### 🔹 Estrutura if

```cpp
if (escolha == 1)
```

Executa algo se a condição for verdadeira.

---

### 🔹 else if

```cpp
else if (escolha == 2)
```

Testa outra condição.

---

### 🔹 else

```cpp
else
```

Executa quando nenhuma condição é válida.

---

## ⚙️ Como executar

```bash
g++ jogo.cpp -o jogo
./jogo
```

---

## 📁 Exemplo de execução

```
Digite o teu nome: Erica

Olá, Erica!
Escolhe uma acao:
1 - Correr atras do rato
2 - Comer queijo
3 - Dormir

Opcao: 1

Voce decidiu correr atras do rato!
O rato fugiu muito rapido... 😆

Fim do jogo 😏
```

---

## 🎯 Objetivo Educacional

Neste projeto aprendeste:

* Tomar decisões no código
* Usar `if`, `else if` e `else`
* Criar interação com o utilizador

---

## 📚 Próximo passo

👉 No próximo dia:

* Ciclos (`for` e `while`)
* Repetir ações no programa 🔁

---

## 👩🏽‍💻 Autora

**Erica Tatiana Manuel Langa**
🚀 Desenvolvedora em evolução

---

## ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ 😄
