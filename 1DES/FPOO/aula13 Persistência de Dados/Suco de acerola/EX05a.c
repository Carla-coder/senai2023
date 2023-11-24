#include <stdio.h>

int main() {
    FILE *arq = fopen("suco.in", "r");
    
    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int N, F;
    while (1) {
        fscanf(arq, "%d %d", &N, &F);
        if (N == 0 && F == 0) {
            break; // Final da entrada
        }

        double volume = (double)F / (N * 50.0); // Cálculo do volume em litros

        printf("%.2f\n", volume); // Imprime o volume com duas casas decimais
    }

    // Fecha o arquivo após o uso
    fclose(arq);

    return 0;
}

