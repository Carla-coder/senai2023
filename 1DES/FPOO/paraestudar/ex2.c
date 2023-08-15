/*
Desenvolva um programa que leia a velocidade de um carro (km/h)
e a dist�ncia a ser percorrida (km) por ele.
Calcule e apresente na tela, quanto tempo (horas) ser� necess�rio
para o carro percorrer a dist�ncia informada.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int velocidade, distancia;
	float tempo;
	//Entradas
	printf("Digite a velocidade do carro em km/h: ");
	scanf("%d",&velocidade);
	printf("Digite a dist�ncia em km: ");
	scanf("%d",&distancia);
	//Processamento
	tempo = (float) distancia / velocidade;
	//Sa�da
	printf("Esta dist�ncia ser� percorrida em %.1f horas",tempo);
}
