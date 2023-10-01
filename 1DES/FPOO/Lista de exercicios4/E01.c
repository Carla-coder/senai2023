#include <stdio.h>

int main() {
    // Declaração de arrays para armazenar os nomes e salários
    char nomes[5][50];
    float salarios[5],percentual_reajuste, novo_salario; 
    int i;

    // Solicita ao usuário que insira os nomes e salários das 5 pessoas
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da %d pessoa:", i + 1);
        scanf("%s", nomes[i]);

        printf("\nDigite o salario de %s:\nR$ ", nomes[i]);
        scanf("%f", &salarios[i]);
    }

    // Solicita ao usuário que insira o percentual de reajuste
    
    	printf("Digite o percentual de reajuste (%%): ");
    	scanf("%f", &percentual_reajuste);

    // Calcula e apresenta o novo salário e nome das 5 pessoas com reajuste
    	printf("\nNovos salarios apos o reajuste:\n");

    for (i = 0; i < 5; i++) {
        novo_salario = salarios[i] + (salarios[i] * percentual_reajuste) / 100;
        salarios[i] + i;
        
        printf("\n%s R$%.0f", nomes[i], novo_salario);
    }

    return 0;
}






