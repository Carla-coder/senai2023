/*Exerc�cio 2: Crie uma fun��o chamada contaElementos que conta quantas vezes um determinado n�mero aparece em um vetor de inteiros. 
A fun��o deve retornar a contagem.Neste exemplo, a fun��o contaElementos percorre o vetor vetor em um loop for e verifica quantas vezes o n�mero procurado aparece. 
A contagem � incrementada toda vez que o n�mero � encontrado. A fun��o retorna a contagem total de ocorr�ncias desse n�mero no vetor.
O programa principal (main()) demonstra o uso dessa fun��o com um exemplo em que contamos quantas vezes o n�mero 20 aparece no vetor. */

#include <stdio.h>

int contaElementos(int vetor[], int tamanho, int numero) {
    int contagem = 0;

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            contagem++;  // Incrementa a contagem quando o n�mero � encontrado
        }
    }

    return contagem;
}

int main() {
    int vetor[] = {10, 20, 30, 20, 40, 20};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int numeroProcurado = 20;

    int contagem = contaElementos(vetor, tamanho, numeroProcurado);

    printf("O n�mero %d aparece %d vezes no vetor.\n", numeroProcurado, contagem);

    return 0;
}

