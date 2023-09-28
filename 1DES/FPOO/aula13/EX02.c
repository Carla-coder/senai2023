/* "Crie outro programa que leia o arquivo anterior e mostre na tela o conteúdo do arquivo 
Grave um arquivo chamado "resultado.txt" para a  média dos números contidos no arquivo.*/

#include <stdio.h>

int main() {
    FILE *arquivo;
    FILE *resultado;
    int numero;
    int soma = 0;
    int contador = 0; 
    float media;

    // Abre o arquivo "dados.txt" para leitura
    arquivo = fopen("dados.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Abre o arquivo "resultado.txt" para escrita
    resultado = fopen("resultado.txt", "w");

    // Verifica se o arquivo "resultado.txt" foi aberto com sucesso
    if (resultado == NULL) {
        printf("Erro ao criar o arquivo 'resultado.txt'.\n");
        fclose(arquivo);
        return 1;
    }

    // Lê os números do arquivo "dados.txt" e calcula a soma e o contador
    while (fscanf(arquivo, "%d", &numero) != EOF) {
        soma += numero;
        contador++;
    }

    // Calcula a média
    if (contador > 0) {
        media = soma / contador;
    } else {
        media = 0.0;
    }

    // Fecha o arquivo "dados.txt"
    fclose(arquivo);

    // Escreve a média no arquivo "resultado.txt"
    fprintf(resultado, "Media dos numeros: %.1f\n", media);

    // Fecha o arquivo "resultado.txt"
    fclose(resultado);

    printf("Conteudo do arquivo 'dados.txt' lido com sucesso.\n");
    printf("Media dos numeros gravada no arquivo 'resultado.txt'.\n");

    return 0;
}

