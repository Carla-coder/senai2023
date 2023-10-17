#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile = fopen("esquerda.in", "r");
    FILE *outputFile = fopen("esquerda.out", "w");
    int i;

    if (inputFile == NULL || outputFile == NULL) {
        printf("Erro ao abrir o arquivo de entrada/saída.\n");
        return 1;
    }

    int N;
    while (fscanf(inputFile, "%d", &N) == 1 && N != 0) {
        char comandos[N];
        fscanf(inputFile, "%s", comandos);

        char direcao = 'N'; // Direção inicial é norte

        for (i = 0; i < N; i++) {
            if (comandos[i] == 'E') {
                // Virar à esquerda
                if (direcao == 'N') {
                    direcao = 'O';
                } else if (direcao == 'O') {
                    direcao = 'S';
                } else if (direcao == 'S') {
                    direcao = 'L';
                } else {
                    direcao = 'N';
                }
            } else {
                // Virar à direita
                if (direcao == 'N') {
                    direcao = 'L';
                } else if (direcao == 'L') {
                    direcao = 'S';
                } else if (direcao == 'S') {
                    direcao = 'O';
                } else {
                    direcao = 'N';
                }
            }
        }

        fprintf(outputFile, "%c\n", direcao);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

