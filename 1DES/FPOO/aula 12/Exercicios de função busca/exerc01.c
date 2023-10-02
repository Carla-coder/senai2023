/*Exercício 1: Escreva uma função chamada buscaElemento que recebe um vetor de inteiros, seu tamanho e um número a ser procurado. 
A função deve retornar a posição (índice) do número no vetor ou -1 se o número não estiver presente.
Neste exemplo, a função buscaElemento percorre o vetor vetor em um loop for e compara cada elemento com o número procurado. 
Se o número for encontrado, a função retorna a posição (índice) desse número no vetor. 
Se o número não for encontrado após percorrer todo o vetor, a função retorna -1 */

#include <stdio.h>

int buscaElemento(int vetor[], int tamanho, int numero) {
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return i;  // Número encontrado, retorna a posição (índice)
        }
    }
    return -1;  // Número não encontrado
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int numeroProcurado = 30;

    int posicao = buscaElemento(vetor, tamanho, numeroProcurado);

    if (posicao != -1) {
        printf("O numero %d foi encontrado na posicao %d.\n", numeroProcurado, posicao);
    } else {
        printf("O numero %d nao foi encontrado no vetor.\n", numeroProcurado);
    }

    return 0;
}


