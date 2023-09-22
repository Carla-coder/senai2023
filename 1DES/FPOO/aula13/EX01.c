#include <stdio.h>

int main() {
    FILE *arquivo;
    int numero;
    int soma = 0;

    // Abre o arquivo para leitura
    arquivo = fopen("dados.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Conteudo do arquivo:\n");

    // Lê os números do arquivo e calcula a soma
    while (fscanf(arquivo, "%d", &numero) != EOF) {
        printf("%d ", numero);
        soma += numero;
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("\nSoma dos numeros: %d\n", soma);

    return 0;
}

