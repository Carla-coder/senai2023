#include <stdio.h>
int main(){
    int num1, num2, num3;
    float media;

    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro:");
    scanf("%d", &num2);

    printf("Digite o terceiro numero inteiro:");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A media dos numeros %d, %d e %d eh igual a %.2f\n", num1, num2, num3, media);

    return 0;
}

