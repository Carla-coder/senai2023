/* Neste programa, o usuário preenche o vetor vetor com 6 números inteiros. 
Em seguida, usamos um loop para trocar os valores da primeira metade do vetor com os valores correspondentes da segunda metade. 
Finalmente, exibimos o vetor com os valores trocados de maneira inversa na tela.*/

#include <stdio.h>

int main(){
    int vetor[6];
    int i, temp;

    // Solicita ao usuário que preencha o vetor
    printf("Digite 6 numeros inteiros separados por espacos:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
	// Troca os valores de maneira inversa 
	/* O loop for é configurado para iterar apenas três vezes (i varia de 0 a 2) porque estamos trocando os elementos da primeira metade do vetor com os correspondentes da segunda metade.
Dentro do loop, criamos uma variável temporária chamada temp para armazenar temporariamente o valor do elemento na posição i do vetor.
Em seguida, atribuímos o valor do elemento na posição 5 - i (ou seja, a posição correspondente na segunda metade do vetor) à posição i.
Finalmente, atribuímos o valor armazenado em temp à posição 5 - i, que é a posição inversa na segunda metade do vetor.
Isso efetivamente troca os valores das posições da primeira metade do vetor com os valores correspondentes da segunda metade, realizando a inversão desejada. 
Após a conclusão do loop, o vetor estará com os valores trocados de maneira inversa */
    for (i = 0; i < 3; i++) {
        temp = vetor[i];
        vetor[i] = vetor[5 - i];
        vetor[5 - i] = temp;
    }

    // Exibe o vetor com os valores trocados
    printf("\nVetor com os valores trocados de maneira inversa:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

