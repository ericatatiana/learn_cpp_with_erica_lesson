#  C++ Dia 11 - Funções com Retorno (`return`) 

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Intermediate](https://img.shields.io/badge/Level-Intermediate-orange?style=for-the-badge)

---

> 💡 **Nota:** Hoje vais aprender funções que retornam valores usando `return`.

---

#  Sobre o Projeto

Nos dias anteriores aprendeste:
✔ criar funções
✔ organizar código

Agora vais aprender:
 devolver valores
 fazer cálculos
 reutilizar resultados

---

#  Objetivo

Aprender a:

* criar funções com retorno
* calcular valores
* usar `return`
* tornar programas mais inteligentes

---

#  Código

```cpp id="retfunc1"
#include <iostream>
using namespace std;

//  Funcao para somar numeros
int somar(int a, int b) {
    int resultado = a + b;

    return resultado;
}

//  Funcao para calcular media
float calcularMedia(float n1, float n2) {
    float media = (n1 + n2) / 2;

    return media;
}

int main() {

    int numero1, numero2;
    float nota1, nota2;

    cout << "=== SISTEMA DE CALCULOS 🔥 ===" << endl;
    cout << endl;

    // Soma
    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    int soma = somar(numero1, numero2);

    cout << endl;
    cout << "Resultado da soma: " << soma << endl;

    cout << endl;

    // Media
    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    float mediaFinal = calcularMedia(nota1, nota2);

    cout << endl;
    cout << "Media final: " << mediaFinal << endl;

    // Verificacao
    if (mediaFinal >= 10) {
        cout << "Aprovado 😄" << endl;
    } else {
        cout << "Reprovado 😢" << endl;
    }

    return 0;
}
```

---

#  Explicação do Código

##  Função com retorno

```cpp id="returndef1"
int somar(int a, int b)
```

* `int` → a função devolve um número inteiro
* `a` e `b` → parâmetros

---

##  `return`

```cpp id="returnex1"
return resultado;
```

Devolve o valor calculado pela função.

---

##  Guardar retorno

```cpp id="returnsave1"
int soma = somar(numero1, numero2);
```

Recebe o valor devolvido pela função.

---

##  Função de média

```cpp id="mediafunc1"
float calcularMedia(float n1, float n2)
```

Retorna um valor decimal (`float`).

---

#  Como executar

## 1. Compilar

```bash id="retcomp1"
g++ retorno.cpp -o retorno
```

---

## 2. Executar

```bash id="retrun1"
./retorno
```

---

#  Exemplo de execução

```id="retout1"
=== SISTEMA DE CALCULOS 🔥 ===

Digite o primeiro numero: 10
Digite o segundo numero: 5

Resultado da soma: 15

Digite a primeira nota: 14
Digite a segunda nota: 16

Media final: 15
Aprovado 😄
```

---

#  Objetivo Educacional

Neste projeto aprendeste:

* Criar funções com retorno
* Trabalhar com cálculos
* Reutilizar valores
* Organizar lógica

---

#  Exercício

 Agora tenta sozinho:

Cria um programa que:

* tenha uma função para multiplicar números
* tenha uma função para calcular idade futura
* use `return` nas duas funções

---

#  Próximo passo

 Dia 12:

* `struct`
* Criar tipos personalizados 😏

---

# 👩🏽‍💻 Autora

**Erica Tatiana**
Desenvolvedora em evolução

---

# ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
