/* Exercício 5: Crie uma função chamada mediaElementos que calcula a média dos elementos em um vetor de números de ponto flutuante.
Neste exemplo, a função mediaElementos começa verificando se o tamanho do vetor é maior que zero para evitar problemas em vetores vazios ou com tamanhos inválidos. 
Em seguida, ela calcula a soma de todos os elementos do vetor e, finalmente, calcula a média dividindo a soma pelo tamanho do vetor.
O programa principal (main()) demonstra o uso dessa função com um exemplo em que calculamos a média dos elementos no vetor de ponto flutuante. 
O resultado é formatado para exibir duas casas decimais. */

#include <stdio.h>

float mediaElementos(float vetor[], int tamanho) {
    if (tamanho <= 0) {
        return 0.0;  // Vetor vazio ou tamanho inválido, retornar 0.0
    }

    float soma = 0.0;

    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];  // Soma todos os elementos do vetor
    }

    return soma / tamanho;  // Calcula a média dividindo a soma pelo tamanho
}

int main() {
    float vetor[] = {10.0, 20.0, 30.0, 40.0, 50.0};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    float media = mediaElementos(vetor, tamanho);

    printf("A media dos elementos no vetor eh: %.2f\n", media);

    return 0;
}

