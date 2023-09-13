/*Exerc�cio 7: Implemente uma fun��o chamada buscaImpar que encontre o primeiro n�mero �mpar em um vetor de inteiros e retorne esse valor.
Se nenhum n�mero �mpar for encontrado, a fun��o deve retornar -1.
Neste exemplo, a fun��o buscaImpar percorre o vetor vetor em um loop for e verifica se cada elemento � �mpar usando o operador % (m�dulo) para verificar se o resultado da divis�o por 2 � diferente de zero.
Se um n�mero �mpar for encontrado, a fun��o retorna esse valor. Se nenhum n�mero �mpar for encontrado ap�s percorrer todo o vetor, a fun��o retorna -1.
O programa principal (main()) demonstra o uso dessa fun��o com um exemplo em que encontramos o primeiro n�mero �mpar no vetor. */

#include <stdio.h>

int buscaImpar(int vetor[], int tamanho) {
    for ( i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            return vetor[i];  // N�mero �mpar encontrado, retorna o valor
        }
    }
    return -1;  // Nenhum n�mero �mpar encontrado
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

