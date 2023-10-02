/*Exercício 4: Implemente uma função chamada buscaMinimo que encontra o menor número em um vetor de inteiros e retorna esse valor.
Neste exemplo, a função buscaMinimo começa assumindo que o primeiro elemento do vetor é o mínimo.
Em seguida, ela percorre o restante do vetor em um loop for, comparando cada elemento com o mínimo atual. 
Se um elemento menor for encontrado, o valor mínimo é atualizado. Ao final do loop, a função retorna o valor mínimo encontrado.
O programa principal (main()) demonstra o uso dessa função com um exemplo em que encontramos o menor número no vetor. 
Note que a função verifica se o tamanho do vetor é maior que zero para evitar problemas em vetores vazios ou com tamanhos inválidos.*/


#include <stdio.h>

int buscaMinimo(int vetor[], int tamanho) {
    if (tamanho <= 0) {
        return -1;  // Vetor vazio ou tamanho inválido, retornar um valor indicando erro
    }

    int minimo = vetor[0];  // Assumimos que o primeiro elemento é o mínimo inicialmente

    for (i = 1; i < tamanho; i++) {
        if (vetor[i] < minimo) {
            minimo = vetor[i];  // Atualiza o mínimo se encontrar um valor menor
        }
    }

    return minimo;
}

int main() {
    int vetor[] = {10, 20, 5, 30, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int minimo = buscaMinimo(vetor, tamanho);

    printf("O menor numero no vetor eh: %d\n", minimo);

    return 0;
}

