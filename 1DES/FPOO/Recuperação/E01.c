#include <stdio.h>
int main() {
    int num1, num2, soma;

    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &num1);

	printf("Digite o segundo numero inteiro:");
    scanf("%d", &num2);

    soma = num1 + num2;
    
    printf("A soma de %d e %d eh igual a %d\n", num1, num2, soma);

    return 0;
}


