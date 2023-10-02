/* Exerc�cio 3: Escreva uma fun��o chamada buscaMaximo que encontra o maior n�mero em um vetor de inteiros e retorna esse valor.
este exemplo, a fun��o buscaMaximo come�a assumindo que o primeiro elemento do vetor � o m�ximo. 
Em seguida, ela percorre o restante do vetor em um loop for, comparando cada elemento com o m�ximo atual. 
Se um elemento maior for encontrado, o valor m�ximo � atualizado. Ao final do loop, a fun��o retorna o valor m�ximo encontrado.
O programa principal (main()) demonstra o uso dessa fun��o com um exemplo em que encontramos o maior n�mero no vetor. 
Note que a fun��o verifica se o tamanho do vetor � maior que zero para evitar problemas em vetores vazios ou com tamanhos inv�lidos.*/

#include <stdio.h>

int buscaMaximo(int vetor[], int tamanho) {
    if (tamanho <= 0) {
        return -1;  // Vetor vazio ou tamanho inv�lido, retornar um valor indicando erro
    }

    int maximo = vetor[0];  // Assumimos que o primeiro elemento � o m�ximo inicialmente

    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];  // Atualiza o m�ximo se encontrar um valor maior
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

