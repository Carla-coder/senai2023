#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    FILE *entrada, *saida;
    char nome[100];
    float nota, media;
    
    

    // Abra o arquivo de entrada para leitura
    entrada = fopen("arquivo.txt", "r");

    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada\n");
        return 1;
    }

    // Abra o arquivo de saída para escrita
    saida = fopen("resultados.txt", "w");

    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída\n");
        fclose(entrada);
        return 1;
    }

    // Processar o arquivo de entrada linha por linha
    while (fscanf(entrada, "%s %f", nome, &nota) == 2) {
        // Calcular a média
        media = nota;
        printf(saida, "%s", nome);

        // Determinar o status (aprovado ou reprovado)
        if (media >= 5.0) {
           printf(saida, "Aprovado\n");
        } else {
        	printf(saida, "Reprovado\n");
        }
	}

    // Feche os arquivos
    fclose(entrada);
    fclose(saida);
    
    printf("Processamento concluido. Resultados salvos em 'resultados.txt'\n");
    return 0;
}

