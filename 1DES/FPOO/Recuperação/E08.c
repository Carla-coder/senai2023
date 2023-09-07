#include <stdio.h>
#include <string.h>
int main(){
    char nomes[5][50];
    int idades[5];
    int idade_mais_velha = 0;
	int i; 

    for (i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d:", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a idade da pessoa %d:", i + 1);
        scanf("%d", &idades[i]);

        if (idades[i] > idade_mais_velha) {
            idade_mais_velha = idades[i];
        }
    }

    printf("\nA idade da pessoa mais velha eh: %d anos\n", idade_mais_velha);

    return 0;
}

