/* Neste exemplo, temos uma função busca que realiza uma busca linear em um vetor de inteiros.
Ela recebe três parâmetros: o vetor no qual procurar, o tamanho do vetor e a chave que estamos procurando.
A função percorre o vetor elemento por elemento e compara cada elemento com a chave. Se encontrar a chave, retorna a posição onde a chave foi encontrada. 
Caso contrário, se não encontrar a chave após percorrer todo o vetor, retorna -1 para indicar que a chave não foi encontrada.
No main(), chamamos a função busca para procurar a chave 30 no vetor e exibimos a posição se a chave for encontrada ou uma mensagem de que a chave não foi encontrada caso contrário.*/


#include <stdio.h>


// Função de busca linear
int busca( int vetor[], int tamanho, int chave) {
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i; // Chave encontrada, retorna a posição
        }
    }
    return -1; // Chave não encontrada, retorna -1
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






