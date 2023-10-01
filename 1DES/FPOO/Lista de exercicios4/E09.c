/* Neste programa, o usu�rio preenche o vetor vetor com 10 n�meros inteiros. 
Enquanto isso, calculamos a soma e o total de n�meros pares e a soma e o total de n�meros �mpares. 
Em seguida, calculamos as m�dias para ambos os grupos, levando em considera��o o total. 
Por fim, exibimos todos os resultados na tela */

#include <stdio.h>

int main(){
    int vetor[10];
    int somaPares = 0, somaImpares = 0;
    int totalPares = 0, totalImpares = 0;
    int i;
    float mediaPares, mediaImpares;

    // Solicita ao usu�rio que preencha o vetor
    printf("Digite 10 numeros inteiros separados por espa�os:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);

        // Verifica se o n�mero � par ou �mpar e atualiza as vari�veis correspondentes
        if (vetor[i] % 2 == 0) {
            somaPares += vetor[i];
            totalPares++;
        } else {
            somaImpares += vetor[i];
            totalImpares++;
        }
    }

    // Calcula a m�dia dos n�meros pares e �mpares
    mediaPares = (totalPares > 0) ? somaPares / totalPares : 0;
    mediaImpares = (totalImpares > 0) ? somaImpares / totalImpares : 0;

    // Exibe os resultados
    printf("\nSoma e Media dos Numeros Pares:\n");
    printf("Soma: %d\n", somaPares);
    printf("Media: %.2f\n", mediaPares);

    printf("\nSoma e Media dos Numeros Impares:\n");
    printf("Soma: %d\n", somaImpares);
    printf("M�dia: %.2f\n", mediaImpares);

    printf("\nTotal de Numeros Pares: %d\n", totalPares);
    printf("Total de Numeros Impares: %d\n", totalImpares);

    return 0;
}

