/* Neste programa, usamos tr�s vetores separados: cidades para armazenar os nomes das cidades, eleitores para armazenar o n�mero total de eleitores e votos para armazenar o total de votos apurados.
Calculamos a porcentagem de participa��o dos eleitores em cada cidade dividindo o total de votos pelo n�mero de eleitores e multiplicando por 100. Em seguida, exibimos as porcentagens de participa��o na tela para cada cidade.*/

#include <stdio.h>
#include <string.h>

int main(){
    // Declarando vetores para armazenar nomes, eleitores e votos de 5 cidades
    char cidades[5][50];
    int eleitores[5];
    int votos[5];
    int i;

    // Solicita ao usu�rio que insira informa��es sobre as cidades
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da cidade %d:", i + 1);
        scanf("%s", cidades[i]);
        printf("Digite o numero total de eleitores da cidade %d:", i + 1);
        scanf("%d", &eleitores[i]);
        printf("Digite o total de votos apurados na ultima eleicao na cidade %d:", i + 1);
        scanf("%d", &votos[i]);
    }

    // Calcula e exibe a porcentagem de participa��o dos eleitores em cada cidade
    printf("\nPorcentagem de Participacao dos Eleitores:\n");
    for (i = 0; i < 5; i++) {
        float participacao = ((float)votos[i] / eleitores[i]) * 100;
        printf("Cidade: %s - Participacao: %.2f%%\n", cidades[i], participacao);
    }

    return 0;
}

