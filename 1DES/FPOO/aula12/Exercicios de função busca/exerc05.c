/* Exerc�cio 5: Crie uma fun��o chamada mediaElementos que calcula a m�dia dos elementos em um vetor de n�meros de ponto flutuante.
Neste exemplo, a fun��o mediaElementos come�a verificando se o tamanho do vetor � maior que zero para evitar problemas em vetores vazios ou com tamanhos inv�lidos. 
Em seguida, ela calcula a soma de todos os elementos do vetor e, finalmente, calcula a m�dia dividindo a soma pelo tamanho do vetor.
O programa principal (main()) demonstra o uso dessa fun��o com um exemplo em que calculamos a m�dia dos elementos no vetor de ponto flutuante. 
O resultado � formatado para exibir duas casas decimais. */

#include <stdio.h>

float mediaElementos(float vetor[], int tamanho) {
    if (tamanho <= 0) {
        return 0.0;  // Vetor vazio ou tamanho inv�lido, retornar 0.0
    }

    float soma = 0.0;

    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];  // Soma todos os elementos do vetor
    }

    return soma / tamanho;  // Calcula a m�dia dividindo a soma pelo tamanho
}

int main() {
    float vetor[] = {10.0, 20.0, 30.0, 40.0, 50.0};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    float media = mediaElementos(vetor, tamanho);

    printf("A media dos elementos no vetor eh: %.2f\n", media);

    return 0;
}

