/* Neste exemplo, temos uma fun��o busca que realiza uma busca linear em um vetor de inteiros.
Ela recebe tr�s par�metros: o vetor no qual procurar, o tamanho do vetor e a chave que estamos procurando.
A fun��o percorre o vetor elemento por elemento e compara cada elemento com a chave. Se encontrar a chave, retorna a posi��o onde a chave foi encontrada. 
Caso contr�rio, se n�o encontrar a chave ap�s percorrer todo o vetor, retorna -1 para indicar que a chave n�o foi encontrada.
No main(), chamamos a fun��o busca para procurar a chave 30 no vetor e exibimos a posi��o se a chave for encontrada ou uma mensagem de que a chave n�o foi encontrada caso contr�rio.*/


#include <stdio.h>


// Fun��o de busca linear
int busca( int vetor[], int tamanho, int chave) {
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i; // Chave encontrada, retorna a posi��o
        }
    }
    return -1; // Chave n�o encontrada, retorna -1
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int chave = 30;
    int resultado = busca(vetor, tamanho, chave);

    if (resultado != -1) {
        printf("Chave %d encontrada na posicao %d.\n", chave, resultado);
    } else {
        printf("Chave %d nao encontrada no vetor.\n", chave);
    }

    return 0;
}






