#include <stdio.h>

int main() {
    int vetor1[5];
    int vetor2[5];
    int resultado[5];
    int i;

    // Solicita ao usuário que insira valores para o primeiro vetor
    printf("Digite 5 valores inteiros para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Solicita ao usuário que insira valores para o segundo vetor
    printf("Digite 5 valores inteiros para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Calcula o inverso do segundo vetor e soma com o primeiro vetor
    for (i = 0; i < 5; i++) {
        resultado[i] = vetor1[i] + vetor2[4 - i]; // Calcula o inverso do segundo vetor
    }

    // Exibe o resultado da soma
    printf("Resultado da soma do primeiro vetor com o inverso do segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}

