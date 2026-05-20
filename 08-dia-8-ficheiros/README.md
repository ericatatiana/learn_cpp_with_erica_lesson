# 💻 C++ Nível 2 - Dia 1: Trabalhando com Ficheiros 

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Level 2](https://img.shields.io/badge/Level-Intermediate-orange?style=for-the-badge)

---

> 💡 **Nota:** Esta aula faz parte do C++ Nível 2, onde começamos a desenvolver programas mais próximos de aplicações reais.

---

#  Sobre o Projeto

Neste projeto vais aprender a:

* Criar ficheiros `.txt`
* Guardar informações em ficheiros
* Trabalhar com a biblioteca `fstream`

---

#  Objetivo

Aprender como os programas conseguem:

* salvar dados
* criar arquivos automaticamente
* armazenar informações permanentemente

---

# 💻 Código

```cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    // Criar ficheiro
    ofstream arquivo("dados.txt");

    // Verificar se abriu corretamente
    if (arquivo.is_open()) {

        string nome;
        int idade;

        cout << "=== SISTEMA DE REGISTO ===" << endl;
        cout << endl;

        cout << "Digite o teu nome: ";
        cin >> nome;

        cout << "Digite a tua idade: ";
        cin >> idade;

        // Guardar no ficheiro
        arquivo << "Nome: " << nome << endl;
        arquivo << "Idade: " << idade << endl;

        cout << endl;
        cout << "Dados guardados com sucesso 😄" << endl;

        // Fechar ficheiro
        arquivo.close();

    } else {

        cout << "Erro ao abrir o ficheiro 😢" << endl;

    }

    return 0;
}
```

---

#  Explicação do Código

##  Biblioteca `fstream`

```cpp
#include <fstream>
```

Permite trabalhar com ficheiros em C++.

---

##  Criar ficheiro

```cpp
ofstream arquivo("dados.txt");
```

* `ofstream` → escreve em ficheiros
* `"dados.txt"` → nome do ficheiro

 Se o ficheiro não existir, o programa cria automaticamente.

---

##  Verificar abertura

```cpp
if (arquivo.is_open())
```

Confirma se o ficheiro foi aberto corretamente.

---

##  Guardar dados

```cpp
arquivo << "Nome: " << nome << endl;
```

Escreve informações dentro do ficheiro.

---

##  Fechar ficheiro

```cpp
arquivo.close();
```

 Muito importante para garantir que os dados sejam realmente guardados.

---

# ⚙️ Como executar

## 1. Compilar

```bash
g++ ficheiros.cpp -o ficheiros
```

---

## 2. Executar

```bash
./ficheiros
```

---

#  Resultado esperado

Após executar, será criado um ficheiro chamado:

```bash
dados.txt
```

Conteúdo:

```txt
Nome: Erica
Idade: 100
```

---

#  Objetivo Educacional

Neste projeto aprendeste:

* Criar ficheiros
* Guardar dados
* Trabalhar com `ofstream`
* Criar programas mais úteis

---

#  Exercício

 Agora tenta sozinho:

Cria um programa que:

* peça nome
* peça cidade
* peça profissão

E guarda tudo no ficheiro `usuario.txt`

---

#  Próximo passo

 No próximo dia:

* Ler dados do ficheiro (`ifstream`)
* Mostrar conteúdo no programa 

---

# 👩🏽‍💻 Autora

**Erica Tatiana**
 Desenvolvedora em evolução

---

#  Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
