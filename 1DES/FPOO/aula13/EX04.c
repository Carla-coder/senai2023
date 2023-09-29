/* Resultado do exercicio Esquerda, Volvér!!! */

#include <stdio.h>

int main() {
    FILE *arq = fopen("esquerda.in", "r");
    int i;
    
    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int N;
    while (1) {
        fscanf(arq, "%d", &N);
        if (N == 0) {
            break; // Final da entrada
        }

        char comandos[N];
        fscanf(arq, "%s", comandos);

        char direcao = 'N'; // Inicialmente com o rosto para o norte

        for (i = 0; i < N; i++) {
            if (comandos[i] == 'E') {
                // Gira para a esquerda
                if (direcao == 'N') direcao = 'O';
                else if (direcao == 'O') direcao = 'S';
                else if (direcao == 'S') direcao = 'L';
                else if (direcao == 'L') direcao = 'N';
            } else if (comandos[i] == 'D') {
                // Gira para a direita
                if (direcao == 'N') direcao = 'L';
                else if (direcao == 'L') direcao = 'S';
                else if (direcao == 'S') direcao = 'O';
                else if (direcao == 'O') direcao = 'N';
            }
        }

        printf("%c\n", direcao); // Imprime a direção final
    }

    // Fecha o arquivo após o uso
    fclose(arq);

    return 0;
}

