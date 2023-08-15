/*Desenvolva um programa que leia o raio (cm) e a altura (cm) de um cilindro.
Calcule e mostre a �rea (cm2) e o volume (cm3) do cilindro.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float raio, altura, area, volume;
	const float pi = 3.14;
	
	//entrada
	printf("Para descobrir a �rea e o volume do cilindro, digite:\n");
	printf("\n-Raio do cilindro:");
	scanf("%f", &raio);
	printf("-Altura do cilindro:");
	scanf("%f", &altura);
	
	//processamento
	area = ( 2 * pi * raio * altura) + 2 * (pi * (raio * raio));
	volume = pi * (raio * raio) * altura;
	
	//sa�da
	printf("\nUm cilindro de raio %.1f cm e altura %.1f cm tem �rea total de: %.2f cm�", raio, altura, area);
	printf("\n\nUm cilindro de volume %.1f cm e altura %.1f cm tem volume de: %.2f cm�", raio, altura, volume);
	
}

