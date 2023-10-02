/*Exercício 2: Crie uma função chamada contaElementos que conta quantas vezes um determinado número aparece em um vetor de inteiros. 
A função deve retornar a contagem.Neste exemplo, a função contaElementos percorre o vetor vetor em um loop for e verifica quantas vezes o número procurado aparece. 
A contagem é incrementada toda vez que o número é encontrado. A função retorna a contagem total de ocorrências desse número no vetor.
O programa principal (main()) demonstra o uso dessa função com um exemplo em que contamos quantas vezes o número 20 aparece no vetor. */

#include <stdio.h>

int contaElementos(int vetor[], int tamanho, int numero) {
    int contagem = 0;

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            contagem++;  // Incrementa a contagem quando o número é encontrado
        }
    }

    return contagem;
}

int main() {
    int vetor[] = {10, 20, 30, 20, 40, 20};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int numeroProcurado = 20;

    int contagem = contaElementos(vetor, tamanho, numeroProcurado);

    printf("O número %d aparece %d vezes no vetor.\n", numeroProcurado, contagem);

    return 0;
}

