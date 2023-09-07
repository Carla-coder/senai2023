#include <stdio.h>

int main(){
    int numeros[5];
    int i, j, temp;

    // Solicita ao usu�rio que insira os n�meros
    printf("Digite 5 numeros inteiros separados por espa�os:");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordena os n�meros em ordem decrescente usando o algoritmo de sele��o
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (numeros[i] < numeros[j]) {
                // Troca os n�meros de posi��o
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Exibe os n�meros em ordem decrescente
    printf("\nNumeros em Ordem Decrescente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d", numeros[i]);
    }

    return 0;
}

