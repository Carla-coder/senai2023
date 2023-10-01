/* Neste programa, o usuário preenche o vetor vetor com 10 números inteiros. 
Enquanto isso, calculamos a soma e o total de números pares e a soma e o total de números ímpares. 
Em seguida, calculamos as médias para ambos os grupos, levando em consideração o total. 
Por fim, exibimos todos os resultados na tela */

#include <stdio.h>

int main(){
    int vetor[10];
    int somaPares = 0, somaImpares = 0;
    int totalPares = 0, totalImpares = 0;
    int i;
    float mediaPares, mediaImpares;

    // Solicita ao usuário que preencha o vetor
    printf("Digite 10 numeros inteiros separados por espaços:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);

        // Verifica se o número é par ou ímpar e atualiza as variáveis correspondentes
        if (vetor[i] % 2 == 0) {
            somaPares += vetor[i];
            totalPares++;
        } else {
            somaImpares += vetor[i];
            totalImpares++;
        }
    }

    // Calcula a média dos números pares e ímpares
    mediaPares = (totalPares > 0) ? somaPares / totalPares : 0;
    mediaImpares = (totalImpares > 0) ? somaImpares / totalImpares : 0;

    // Exibe os resultados
    printf("\nSoma e Media dos Numeros Pares:\n");
    printf("Soma: %d\n", somaPares);
    printf("Media: %.2f\n", mediaPares);

    printf("\nSoma e Media dos Numeros Impares:\n");
    printf("Soma: %d\n", somaImpares);
    printf("Média: %.2f\n", mediaImpares);

    printf("\nTotal de Numeros Pares: %d\n", totalPares);
    printf("Total de Numeros Impares: %d\n", totalImpares);

    return 0;
}

