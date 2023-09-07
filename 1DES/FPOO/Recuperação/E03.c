#include <stdio.h>
#include <string.h>
int main(){
    char nomes[5][50];
    float notas[5][2];
    char resultado[5][20];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a primeira nota (de 0 a 10) do aluno %d:", i + 1);
        scanf("%f", &notas[i][0]);
        printf("Digite a segunda nota (de 0 a 10) do aluno %d: ", i + 1);
        scanf("%f", &notas[i][1]);

        float media = (notas[i][0] + notas[i][1]) / 2;

        if (media >= 5.0) {
            strcpy(resultado[i], "Aprovado");
        } else {
            strcpy(resultado[i], "Reprovado");
        }
    }

   	printf("\nResultados:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno: %s\n", nomes[i]);
        printf("Media: %.2f\n", (notas[i][0] + notas[i][1]) / 2);
        printf("Resultado: %s\n", resultado[i]);
        printf("\n");
    }

    return 0;
}

