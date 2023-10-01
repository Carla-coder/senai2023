#include <stdio.h>
#include <math.h>

int main() {
    FILE *arqEntrada = fopen("suco.in", "r");
    FILE *arqSaida = fopen("suco.out", "w");

    // Verifica se o arquivo de entrada foi aberto com sucesso
    if (arqEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Verifica se o arquivo de saída foi aberto com sucesso
    if (arqSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(arqEntrada); // Fecha o arquivo de entrada antes de encerrar
        return 1;
    }

    int N, F;
    while (1) {
        fscanf(arqEntrada, "%d %d", &N, &F);
        if (N == 0 && F == 0) {
            break; // Final da entrada
        }

        double volume = (double) F / (N * pow(50.0, 1.0/3.0)); // Cálculo do volume em litros

        fprintf(arqSaida, "%.2f\n", volume); // Escreve o volume no arquivo de saída com duas casas decimais
    }

    // Fecha os arquivos após o uso
    fclose(arqEntrada);
    fclose(arqSaida);

    return 0;
}



