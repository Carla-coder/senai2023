/*Exerc�cio 6: Escreva uma fun��o chamada buscaPar que encontre o primeiro n�mero par em um vetor de inteiros e retorne esse valor. 
Se nenhum n�mero par for encontrado, a fun��o deve retornar -1.
Neste exemplo, a fun��o buscaPar percorre o vetor vetor em um loop for e verifica se cada elemento � par usando o operador % (m�dulo). 
Se um n�mero par for encontrado, a fun��o retorna esse valor. Se nenhum n�mero par for encontrado ap�s percorrer todo o vetor, a fun��o retorna -1.
O programa principal (main()) demonstra o uso dessa fun��o com um exemplo em que encontramos o primeiro n�mero par no vetor. */

#include <stdio.h>

int buscaPar(int vetor[], int tamanho) {
    for ( i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            return vetor[i];  // N�mero par encontrado, retorna o valor
        }
    }
    return -1;  // Nenhum n�mero par encontrado
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

