#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float alqueires, caminhoes, voltas, totalalqueires, totalcaminhao;
	
	printf("\nUm caminh�o consegue transportar 18 toneladas de laranjas em uma viagem que faz entre a fazenda e a f�brica de suco de laranja. Um alqueire de terra produz em m�dia 250 toneladas de laranjas. Fa�a um programa que leia quantos caminh�es e quantos alqueires uma fazenda produtora de laranjas possui, calcule e apresente na tela quantas viagens de caminh�o ser�o necess�rias para transportar toda a colheita de laranjas.");

	printf("\n\nDigite a quantidade de alqueires de a fazendo possui: ");
	scanf("%d", &alqueires);
	
	printf("Digite a quantidade de caminh�es de a fazendo possui: ");
	scanf("%d", &caminhoes);
	
	totalalqueires = alqueires * 250;
	totalcaminhao = caminhoes * 18;
	
	voltas= totalalqueires/totalcaminhao;
	
	printf(" O total de voltas ser� %.2f", voltas);
	return 0;
}
