/* Neste programa, o usu�rio preenche o vetor vetor com 6 n�meros inteiros. 
Em seguida, usamos um loop para trocar os valores da primeira metade do vetor com os valores correspondentes da segunda metade. 
Finalmente, exibimos o vetor com os valores trocados de maneira inversa na tela.*/

#include <stdio.h>

int main(){
    int vetor[6];
    int i, temp;

    // Solicita ao usu�rio que preencha o vetor
    printf("Digite 6 numeros inteiros separados por espacos:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
	// Troca os valores de maneira inversa 
	/* O loop for � configurado para iterar apenas tr�s vezes (i varia de 0 a 2) porque estamos trocando os elementos da primeira metade do vetor com os correspondentes da segunda metade.
Dentro do loop, criamos uma vari�vel tempor�ria chamada temp para armazenar temporariamente o valor do elemento na posi��o i do vetor.
Em seguida, atribu�mos o valor do elemento na posi��o 5 - i (ou seja, a posi��o correspondente na segunda metade do vetor) � posi��o i.
Finalmente, atribu�mos o valor armazenado em temp � posi��o 5 - i, que � a posi��o inversa na segunda metade do vetor.
Isso efetivamente troca os valores das posi��es da primeira metade do vetor com os valores correspondentes da segunda metade, realizando a invers�o desejada. 
Ap�s a conclus�o do loop, o vetor estar� com os valores trocados de maneira inversa */
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

