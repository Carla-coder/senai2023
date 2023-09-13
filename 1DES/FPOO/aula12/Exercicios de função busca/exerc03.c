/* Exercício 3: Escreva uma função chamada buscaMaximo que encontra o maior número em um vetor de inteiros e retorna esse valor.
este exemplo, a função buscaMaximo começa assumindo que o primeiro elemento do vetor é o máximo. 
Em seguida, ela percorre o restante do vetor em um loop for, comparando cada elemento com o máximo atual. 
Se um elemento maior for encontrado, o valor máximo é atualizado. Ao final do loop, a função retorna o valor máximo encontrado.
O programa principal (main()) demonstra o uso dessa função com um exemplo em que encontramos o maior número no vetor. 
Note que a função verifica se o tamanho do vetor é maior que zero para evitar problemas em vetores vazios ou com tamanhos inválidos.*/

#include <stdio.h>

int buscaMaximo(int vetor[], int tamanho) {
    if (tamanho <= 0) {
        return -1;  // Vetor vazio ou tamanho inválido, retornar um valor indicando erro
    }

    int maximo = vetor[0];  // Assumimos que o primeiro elemento é o máximo inicialmente

    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];  // Atualiza o máximo se encontrar um valor maior
        }
    }

    return maximo;
}

int main() {
    int vetor[] = {10, 20, 30, 5, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int maximo = buscaMaximo(vetor, tamanho);

    printf("O maior numero no vetor eh: %d\n", maximo);

    return 0;
}

