#include <stdio.h>
int main(){
    float raio, altura, area_superficie, volume;
    const float PI = 3.14159265359; 

	printf("Digite o raio do cilindro (em cm):");
    scanf("%f", &raio);

	printf("Digite a altura do cilindro (em cm):");
    scanf("%f", &altura);

    area_superficie = 2 * PI * raio * (raio + altura);

    volume = PI * raio * raio * altura;

 	printf("A area da superficie do cilindro eh %.2f cm^2\n", area_superficie);
    printf("O volume do cilindro eh %.2f cm^3\n", volume);

    return 0;
}

