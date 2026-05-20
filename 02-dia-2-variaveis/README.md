# 💻 Projeto C++ - Variáveis com História (Dia 2)

\

---

> 💡 **Nota:** Este exemplo foi feito para tornar o aprendizado mais divertido, usando uma pequena história com personagens.

---

## 📌 Sobre o Projeto

Neste exemplo, vamos usar variáveis para contar uma pequena história entre dois personagens 🐱🐭

🎯 Objetivo:

* Trabalhar com variáveis
* Misturar texto e dados
* Tornar o código mais divertido

---

## 💻 Código

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // 🐱 Personagem 1
    string nomeGato = "Tommy";
    int idadeGato = 5;
    float velocidadeGato = 20.5;

    // 🐭 Personagem 2
    string nomeRato = "Jerryzinho";
    int idadeRato = 2;
    float velocidadeRato = 25.0;

    // 🍕 Outros dados
    int quantidadeQueijo = 3;
    bool ratoFugiu = true;

    cout << "=== HISTORIA DO GATO E DO RATO ===" << endl;
    cout << endl;

    // Introdução
    cout << nomeGato << " eh um gato com " << idadeGato << " anos." << endl;
    cout << nomeRato << " eh um rato com " << idadeRato << " anos." << endl;
    cout << endl;

    // Situação
    cout << nomeGato << " viu " << nomeRato << " a roubar " << quantidadeQueijo << " queijos!" << endl;
    cout << "Velocidade do gato: " << velocidadeGato << " km/h" << endl;
    cout << "Velocidade do rato: " << velocidadeRato << " km/h" << endl;
    cout << endl;

    // Lógica simples
    if (velocidadeRato > velocidadeGato) {
        cout << nomeRato << " eh mais rapido e conseguiu fugir! 😆" << endl;
    } else {
        cout << nomeGato << " conseguiu apanhar o rato! 😼" << endl;
    }

    cout << endl;

    // Booleano
    if (ratoFugiu) {
        cout << "No final... o rato escapou com o queijo 🧀" << endl;
    } else {
        cout << "O gato ganhou desta vez!" << endl;
    }

    cout << endl;
    cout << "Fim da historia 😂" << endl;

    return 0;
}
```

---

## 🧠 O que estás a aprender aqui

### 🔹 Variáveis diferentes

* `string` → nomes
* `int` → idades, quantidades
* `float` → velocidades
* `bool` → verdadeiro/falso

---

### 🔹 Misturar texto com variáveis

```cpp
cout << nomeGato << " eh um gato com " << idadeGato << " anos." << endl;
```

---

### 🔹 Pequena lógica (if)

```cpp
if (velocidadeRato > velocidadeGato)
```

Aqui o programa toma uma decisão!

---

## ⚙️ Como executar

```bash
g++ historia.cpp -o historia
./historia
```

---

## 📁 Resultado esperado (exemplo)

```
=== HISTORIA DO GATO E DO RATO ===

Tommy eh um gato com 5 anos.
Jerryzinho eh um rato com 2 anos.

Tommy viu Jerryzinho a roubar 3 queijos!
Velocidade do gato: 20.5 km/h
Velocidade do rato: 25 km/h

Jerryzinho eh mais rapido e conseguiu fugir! 😆

No final... o rato escapou com o queijo 🧀

Fim da historia 😂
```

---

## 🎯 Objetivo Educacional

Neste exercício aprendeste:

* Criar várias variáveis
* Usar diferentes tipos de dados
* Fazer comparações simples
* Tornar o código mais interessante

---

## 📚 Próximo passo

👉 No próximo dia:

* Entrada de dados (`cin`)
* O utilizador vai participar na história 😏

---

## 👩🏽‍💻 Autora

**Erica Tatiana**
🚀 Desenvolvedora em evolução

---

## ⭐ Apoio

Se te fez rir e aprender, deixa uma ⭐ 😄
