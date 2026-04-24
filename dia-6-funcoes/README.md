# 💻 Projeto C++ - Funções (Dia 6)

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Beginner Friendly](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)

---

> 💡 **Nota:** Este projeto faz parte da série para iniciantes em C++. Aqui vais aprender a organizar o código usando funções.

---

##  Sobre o Projeto

Neste exemplo, vamos dividir o código em partes menores chamadas **funções**, tornando-o mais organizado e reutilizável.

 Objetivo:

* Criar funções
* Reutilizar código
* Organizar melhor o programa

---

## Código

```cpp id="6w9t2v"
#include <iostream>
#include <string>
using namespace std;

// 🔹 Função para mostrar mensagem inicial
void mostrarBoasVindas(string nome) {
    cout << "Bem-vindo(a), " << nome << "! 😄" << endl;
}

// 🔹 Função para mostrar menu
void mostrarMenu() {
    cout << endl;
    cout << "1 - Correr atras do rato" << endl;
    cout << "2 - Comer queijo" << endl;
    cout << "3 - Dormir" << endl;
    cout << "0 - Sair" << endl;
}

// 🔹 Função para processar escolha
void processarEscolha(int escolha) {
    if (escolha == 1) {
        cout << "Voce correu atras do rato! 🏃" << endl;
    }
    else if (escolha == 2) {
        cout << "Voce comeu queijo 🧀" << endl;
    }
    else if (escolha == 3) {
        cout << "Voce foi dormir 😴" << endl;
    }
    else if (escolha == 0) {
        cout << "Saindo do jogo... 👋" << endl;
    }
    else {
        cout << "Opcao invalida 😅" << endl;
    }
}

int main() {
    string nome;
    int escolha;

    cout << "Digite o teu nome: ";
    cin >> nome;

    mostrarBoasVindas(nome);

    do {
        mostrarMenu();
        cout << "Opcao: ";
        cin >> escolha;

        processarEscolha(escolha);

    } while (escolha != 0);

    return 0;
}
```

---

##  Explicação do Código

###  O que é uma função?

Uma função é um bloco de código que executa uma tarefa específica.

---

###  Criar função

```cpp id="wqk3x2"
void mostrarMenu()
```

* `void` → não retorna valor
* `mostrarMenu` → nome da função

---

### 🔹 Chamar função

```cpp id="d9xk21"
mostrarMenu();
```

Executa a função.

---

### 🔹 Função com parâmetro

```cpp id="k3m2lp"
void mostrarBoasVindas(string nome)
```

Recebe dados (neste caso, o nome).

---

### 🔹 Reutilização

A mesma função pode ser usada várias vezes sem repetir código.

---

## ⚙️ Como executar

```bash id="b7t4xm"
g++ funcoes.cpp -o funcoes
./funcoes
```

---

## Exemplo de execução

```id="z2y9pd"
Digite o teu nome: Erica

Bem-vindo(a), Erica!

1 - Correr atras do rato
2 - Comer queijo
3 - Dormir
0 - Sair

Opcao: 2

Voce comeu queijo 🧀
```

---

## Objetivo Educacional

Neste projeto aprendeste:

* Criar funções
* Organizar código
* Evitar repetição

---

## Próximo passo

 No próximo dia:

* Mini projeto final (juntando tudo 🔥)

---

## Autora

**Erica Tatiana**
🚀 Desenvolvedora em evolução

---

## ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ 😄
