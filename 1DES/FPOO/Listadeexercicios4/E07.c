#include <stdio.h>

int main(){
    int numeros[5];
    int i, j, temp;

    // Solicita ao usuário que insira os números
    printf("Digite 5 numeros inteiros separados por espaços:");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordena os números em ordem decrescente usando o algoritmo de seleção
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (numeros[i] < numeros[j]) {
                // Troca os números de posição
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Exibe os números em ordem decrescente
    printf("\nNumeros em Ordem Decrescente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d", numeros[i]);
    }

    return 0;
}

