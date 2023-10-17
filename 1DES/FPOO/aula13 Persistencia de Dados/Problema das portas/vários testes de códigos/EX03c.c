#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile = fopen("portas.in", "r");
    FILE *outputFile = fopen("portas.out", "w");
   	FILE *portas_abertas;
   	FILE *primeiraPorta;
	int i, j;
    int contador = 0;

    if (inputFile == NULL || outputFile == NULL) {
        printf("Erro ao abrir os arquivos de entrada/saída.\n");
        return 1;
    }

    int N;
    while (fscanf(inputFile, "%d", &N) == 1 && N != 0) {
        int *portas_abertas = malloc(sizeof(int) * N);

        // Inicializa todas as portas como fechadas
        for (i = 0; i < N; i++) {
            portas_abertas[i] = 0;
        }

        // Simula o processo de abrir/fechar as portas
        for (i = 1; i <= N; i++) {
            for (j = i - 1; j < N; j += i) {
                // Inverte o estado da porta
                portas_abertas[j] = !portas_abertas[j];
            }
        }

        // Imprime as portas que foram abertas e fechadas
        printf("Portas abertas: ");
        for (i = 0; i < N; i++) {
            if (portas_abertas[i]) {
                printf("%d ", i + 1);
            }
        }
        printf("\n");

        free(portas_abertas);
    }
    

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

