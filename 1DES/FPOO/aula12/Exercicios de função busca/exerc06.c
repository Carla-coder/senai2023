/*Exercício 6: Escreva uma função chamada buscaPar que encontre o primeiro número par em um vetor de inteiros e retorne esse valor. 
Se nenhum número par for encontrado, a função deve retornar -1.
Neste exemplo, a função buscaPar percorre o vetor vetor em um loop for e verifica se cada elemento é par usando o operador % (módulo). 
Se um número par for encontrado, a função retorna esse valor. Se nenhum número par for encontrado após percorrer todo o vetor, a função retorna -1.
O programa principal (main()) demonstra o uso dessa função com um exemplo em que encontramos o primeiro número par no vetor. */

#include <stdio.h>

int buscaPar(int vetor[], int tamanho) {
    for ( i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            return vetor[i];  // Número par encontrado, retorna o valor
        }
    }
    return -1;  // Nenhum número par encontrado
}

int main() {
    int vetor[] = {10, 15, 7, 8, 25};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int numeroPar = buscaPar(vetor, tamanho);

    if (numeroPar != -1) {
        printf("O primeiro numero par encontrado eh: %d\n", numeroPar);
    } else {
        printf("Nenhum numero par foi encontrado no vetor.\n");
    }

    return 0;
}

