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