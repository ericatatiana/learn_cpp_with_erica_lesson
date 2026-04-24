#  Projeto C++ - Mini Projeto Final (Dia 7)

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Final Project](https://img.shields.io/badge/Level-Final-red?style=for-the-badge)

---

> 💡 **Nota:** Este projeto final junta todos os conceitos aprendidos: variáveis, decisões, loops, arrays e funções.

---

## 📌 Sobre o Projeto

Criamos um pequeno **jogo interativo** onde o utilizador escolhe personagens e ações.

 Conceitos usados:

* Variáveis
* Arrays
* `if/else`
* Loops (`while`)
* Funções

---

##  Código

```cpp
#include <iostream>
#include <string>
using namespace std;

// Dados
string personagens[3] = {"Tommy", "Jerryzinho", "Spike"};
int idades[3] = {5, 2, 7};

// Funções
void mostrarPersonagens() {
    cout << "=== PERSONAGENS DISPONIVEIS ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i << " - " << personagens[i] << " (" << idades[i] << " anos)" << endl;
    }
}

void mostrarMenu() {
    cout << endl;
    cout << "1 - Correr" << endl;
    cout << "2 - Comer" << endl;
    cout << "3 - Dormir" << endl;
    cout << "0 - Sair" << endl;
}

void executarAcao(int escolha, string personagem) {
    if (escolha == 1) {
        cout << personagem << " correu muito rapido! 🏃" << endl;
    }
    else if (escolha == 2) {
        cout << personagem << " comeu comida 🧀" << endl;
    }
    else if (escolha == 3) {
        cout << personagem << " foi dormir 😴" << endl;
    }
    else if (escolha == 0) {
        cout << "Saindo do jogo... 👋" << endl;
    }
    else {
        cout << "Opcao invalida 😅" << endl;
    }
}

int main() {
    int escolhaPersonagem;
    int escolhaAcao;
    bool continuar = true;

    cout << "=== JOGO FINAL 🐱🐭 ===" << endl;

    mostrarPersonagens();

    cout << "Escolhe um personagem: ";
    cin >> escolhaPersonagem;

    if (escolhaPersonagem < 0 || escolhaPersonagem > 2) {
        cout << "Personagem invalido!" << endl;
        return 0;
    }

    string personagemSelecionado = personagens[escolhaPersonagem];

    while (continuar) {
        mostrarMenu();
        cout << "Opcao: ";
        cin >> escolhaAcao;

        executarAcao(escolhaAcao, personagemSelecionado);

        if (escolhaAcao == 0) {
            continuar = false;
        }
    }

    return 0;
}
```

---

##  O que estás a aplicar

✔ Variáveis → guardar dados
✔ Arrays → lista de personagens
✔ Loops → repetir o jogo
✔ Condições → decisões
✔ Funções → organização

---

##  Como executar

```bash
g++ final.cpp -o final
./final
```

---

##  Exemplo de execução

```
=== JOGO FINAL ===

0 - Tommy (5 anos)
1 - Jerryzinho (2 anos)
2 - Spike (7 anos)

Escolhe um personagem: 1

1 - Correr
2 - Comer
3 - Dormir
0 - Sair

Opcao: 1

Jerryzinho correu muito rapido!
```

---

## Objetivo Educacional

Este projeto consolida:

* Lógica de programação
* Organização de código
* Interação com o utilizador

---

## 🏁 Conclusão

Parabéns! 
Com este projeto, já tens uma base sólida em C++.

---

## Próximos passos

* Vetores avançados
* Funções com retorno
* Ficheiros em C++
* Projetos maiores

---

## Autora

**Erica Tatiana**
🚀 Desenvolvedora em evolução

---

## ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ 😄
