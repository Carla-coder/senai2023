/*Exerc�cio 1: Escreva uma fun��o chamada buscaElemento que recebe um vetor de inteiros, seu tamanho e um n�mero a ser procurado. 
A fun��o deve retornar a posi��o (�ndice) do n�mero no vetor ou -1 se o n�mero n�o estiver presente.
Neste exemplo, a fun��o buscaElemento percorre o vetor vetor em um loop for e compara cada elemento com o n�mero procurado. 
Se o n�mero for encontrado, a fun��o retorna a posi��o (�ndice) desse n�mero no vetor. 
Se o n�mero n�o for encontrado ap�s percorrer todo o vetor, a fun��o retorna -1 */

#include <stdio.h>

int buscaElemento(int vetor[], int tamanho, int numero) {
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return i;  // N�mero encontrado, retorna a posi��o (�ndice)
        }
    }
    return -1;  // N�mero n�o encontrado
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


