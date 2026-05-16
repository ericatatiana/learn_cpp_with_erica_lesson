#  C++ Dia 9 - Lendo Dados de Ficheiros 

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Intermediate](https://img.shields.io/badge/Level-Intermediate-orange?style=for-the-badge)

---

> 💡 **Nota:** Nesta aula vais aprender a ler informações guardadas em ficheiros `.txt` usando C++.

---

#  Sobre o Projeto

No dia anterior aprendeste a:
 criar ficheiros
 guardar dados

Agora vais aprender a:
 abrir ficheiros
 ler conteúdo
 mostrar dados no programa

---

#  Objetivo

Aprender como os programas:

* recuperam informações guardadas
* leem ficheiros
* mostram conteúdo ao utilizador

---

#  Código

```cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    // Abrir ficheiro para leitura
    ifstream arquivo("dados.txt");

    string linha;

    cout << "=== LEITOR DE FICHEIROS 📖 ===" << endl;
    cout << endl;

    // Verificar se abriu corretamente
    if (arquivo.is_open()) {

        cout << "Conteudo do ficheiro:" << endl;
        cout << "----------------------" << endl;

        // Ler linha por linha
        while (getline(arquivo, linha)) {

            cout << linha << endl;

        }

        // Fechar ficheiro
        arquivo.close();

        cout << endl;
        cout << "Leitura concluida com sucesso 😄" << endl;

    } else {

        cout << "Erro ao abrir o ficheiro 😢" << endl;
        cout << "Verifica se o ficheiro existe." << endl;

    }

    return 0;
}
```

---

#  Explicação do Código

##  `ifstream`

```cpp
ifstream arquivo("dados.txt");
```

* `ifstream` → usado para ler ficheiros
* `"dados.txt"` → ficheiro que será aberto

---

##  Verificar abertura

```cpp
if (arquivo.is_open())
```

Confirma se o ficheiro foi aberto corretamente.

---

##  Ler linha por linha

```cpp
while (getline(arquivo, linha))
```

* `getline()` → lê uma linha completa
* o loop continua até ao fim do ficheiro

---

##  Mostrar conteúdo

```cpp
cout << linha << endl;
```

Mostra cada linha no ecrã.

---

##  Fechar ficheiro

```cpp
arquivo.close();
```

Fecha o ficheiro após a leitura.

---

#  Como executar

## 1. Compilar

```bash
g++ leitura.cpp -o leitura
```

---

## 2. Executar

```bash
./leitura
```

---

#  Exemplo do ficheiro `dados.txt`

```txt
Nome: Erica
Idade: 100
Cidade: Maputo
```

---

#  Resultado esperado

```bash
=== LEITOR DE FICHEIROS 📖 ===

Conteudo do ficheiro:
----------------------

Nome: Erica
Idade: 100
Cidade: Maputo

Leitura concluida com sucesso 😄
```

---

#  Objetivo Educacional

Neste projeto aprendeste:

* Abrir ficheiros
* Ler dados
* Trabalhar com `ifstream`
* Ler linha por linha

---

#  Exercício

 Agora tenta sozinho:

Cria um programa que:

* leia um ficheiro chamado `frases.txt`
* mostre todas as frases no ecrã
* conte quantas linhas existem no ficheiro

---

#  Próximo passo

 No próximo dia:

* Vetores (`vector`)
* Listas dinâmicas 

---

# 👩🏽‍💻 Autora

**Erica Tatiana**
Desenvolvedora em evolução

---

# ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
