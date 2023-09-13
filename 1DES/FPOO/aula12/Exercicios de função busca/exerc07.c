/*Exercício 7: Implemente uma função chamada buscaImpar que encontre o primeiro número ímpar em um vetor de inteiros e retorne esse valor.
Se nenhum número ímpar for encontrado, a função deve retornar -1.
Neste exemplo, a função buscaImpar percorre o vetor vetor em um loop for e verifica se cada elemento é ímpar usando o operador % (módulo) para verificar se o resultado da divisão por 2 é diferente de zero.
Se um número ímpar for encontrado, a função retorna esse valor. Se nenhum número ímpar for encontrado após percorrer todo o vetor, a função retorna -1.
O programa principal (main()) demonstra o uso dessa função com um exemplo em que encontramos o primeiro número ímpar no vetor. */

#include <stdio.h>

int buscaImpar(int vetor[], int tamanho) {
    for ( i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            return vetor[i];  // Número ímpar encontrado, retorna o valor
        }
    }
    return -1;  // Nenhum número ímpar encontrado
}

int main() {
    int vetor[] = {10, 15, 7, 8, 25};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int numeroImpar = buscaImpar(vetor, tamanho);

    if (numeroImpar != -1) {
        printf("O primeiro numero impar encontrado eh: %d\n", numeroImpar);
    } else {
        printf("Nenhum numero impar foi encontrado no vetor.\n");
    }

    return 0;
}

