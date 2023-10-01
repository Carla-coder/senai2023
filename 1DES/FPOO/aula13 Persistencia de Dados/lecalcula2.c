#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivoEntrada, *arquivoSaida;
    char nome[100];
    float nota1, nota2, nota3, media;
    char status[20];

    // Abre o arquivo de entrada para leitura
    arquivoEntrada = fopen("arquivo.txt", "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Abre o arquivo de saída para escrita
    arquivoSaida = fopen("resultados.txt", "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(arquivoEntrada);
        return 1;
    }

    // Processa o arquivo de entrada linha por linha
    while (fscanf(arquivoEntrada, "%s %f %f %f", nome, &nota1, &nota2, &nota3) != EOF) {
        // Calcula a média
        media = (nota1 + nota2 + nota3) / 3.0;

        // Determina o status (aprovado ou reprovado)
        if (media >= 5.0) {
            strcpy(status, "Aprovado");
        } else {
            strcpy(status, "Reprovado");
        }

        // Exibe na tela
        printf("Nome: %s, Media: %.2f, Status: %s\n", nome, media, status);

        // Salva no arquivo de saída
        fprintf(arquivoSaida, "Nome: %s, Media: %.2f, Status: %s\n", nome, media, status);
    }

    // Fecha os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    return 0;
}

