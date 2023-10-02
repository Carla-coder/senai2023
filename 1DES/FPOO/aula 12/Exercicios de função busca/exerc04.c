/*Exerc�cio 4: Implemente uma fun��o chamada buscaMinimo que encontra o menor n�mero em um vetor de inteiros e retorna esse valor.
Neste exemplo, a fun��o buscaMinimo come�a assumindo que o primeiro elemento do vetor � o m�nimo.
Em seguida, ela percorre o restante do vetor em um loop for, comparando cada elemento com o m�nimo atual. 
Se um elemento menor for encontrado, o valor m�nimo � atualizado. Ao final do loop, a fun��o retorna o valor m�nimo encontrado.
O programa principal (main()) demonstra o uso dessa fun��o com um exemplo em que encontramos o menor n�mero no vetor. 
Note que a fun��o verifica se o tamanho do vetor � maior que zero para evitar problemas em vetores vazios ou com tamanhos inv�lidos.*/


#include <stdio.h>

int buscaMinimo(int vetor[], int tamanho) {
    if (tamanho <= 0) {
        return -1;  // Vetor vazio ou tamanho inv�lido, retornar um valor indicando erro
    }

    int minimo = vetor[0];  // Assumimos que o primeiro elemento � o m�nimo inicialmente

    for (i = 1; i < tamanho; i++) {
        if (vetor[i] < minimo) {
            minimo = vetor[i];  // Atualiza o m�nimo se encontrar um valor menor
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

