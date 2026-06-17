#  C++ Dia 16 - Encapsulamento (`private` e `public`) 

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![OOP](https://img.shields.io/badge/Topic-Encapsulation-red?style=for-the-badge)

---

> 💡 **Nota:** Hoje vais aprender um dos pilares da Programação Orientada a Objetos (POO): o Encapsulamento.

---

#  Sobre o Projeto

Até agora criámos classes com atributos públicos.

Exemplo:

```cpp
class Pessoa {
public:
    string nome;
    int idade;
};
```

O problema é que qualquer pessoa pode alterar os dados diretamente.

Hoje vais aprender a:

 proteger dados
 controlar acesso
 criar classes mais seguras

---

#  Objetivo

Aprender:

* `private`
* `public`
* getters
* setters
* encapsulamento

---

#  O que é Encapsulamento?

Encapsulamento significa:

👉 esconder os dados internos da classe
👉 permitir acesso apenas através de métodos controlados

É como um cofre :

* os dados ficam protegidos
* só entram e saem através de regras

---

#  Código

```cpp
#include <iostream>
#include <string>

using namespace std;

class Aluno {

private:

    string nome;
    float nota;

public:

    // Construtor
    Aluno(string n, float nt) {
        nome = n;
        nota = nt;
    }

    // Setter
    void setNota(float novaNota) {

        if (novaNota >= 0 && novaNota <= 20) {
            nota = novaNota;
        }
        else {
            cout << "Nota invalida!" << endl;
        }

    }

    // Getter
    float getNota() {
        return nota;
    }

    string getNome() {
        return nome;
    }

    void mostrarDados() {

        cout << endl;
        cout << "Nome: " << nome << endl;
        cout << "Nota: " << nota << endl;

    }

};

int main() {

    Aluno aluno1("Erica", 16);

    aluno1.mostrarDados();

    cout << endl;
    cout << "Atualizando nota..." << endl;

    aluno1.setNota(18);

    aluno1.mostrarDados();

    return 0;
}
```

---

#  Explicação do Código

##  `private`

```cpp
private:
    string nome;
    float nota;
```

Os atributos ficam protegidos.

❌ Isto deixa de funcionar:

```cpp
aluno1.nota = 20;
```

---

##  Setter

```cpp
void setNota(float novaNota)
```

Permite alterar a nota de forma controlada.

---

##  Validação

```cpp
if (novaNota >= 0 && novaNota <= 20)
```

Impede notas inválidas.

---

##  Getter

```cpp
float getNota()
```

Permite ler o valor da nota.

---

#  Vantagens do Encapsulamento

 Mais segurança
 Menos erros
 Código profissional
 Melhor manutenção

---

#  Como executar

## 1. Compilar

```bash
g++ encapsulamento.cpp -o encapsulamento
```

---

## 2. Executar

```bash
./encapsulamento
```

---

#  Resultado esperado

```text
Nome: Erica
Nota: 16

Atualizando nota...

Nome: Erica
Nota: 18
```

---

#  Objetivo Educacional

Neste projeto aprendeste:

* Encapsulamento
* `private`
* `public`
* Getters
* Setters
* Proteção de dados

---

#  Exercício

 Agora tenta sozinho:

Cria uma classe `ContaBancaria` com:

* titular
* saldo

Regras:

 saldo deve ser `private`

Cria métodos:

* `depositar()`
* `levantar()`
* `mostrarSaldo()`

Valida para que ninguém possa levantar mais dinheiro do que possui.

---

#  Próximo passo

👉 Dia 17:

* Herança 
* Reutilização de classes
* Relação Pai → Filho

---

# 👩🏽‍💻 Autora

**Erica Tatiana**
 Desenvolvedora em evolução

---

# ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
