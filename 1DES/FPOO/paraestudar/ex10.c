/*Desenvolva um programa 
que leia o nome de uma cidade, o n�mero total de eleitores e
o n�mero total de votos apurados na �ltima elei��o. O programa dever� calcular e 
exibir a porcentagem de participa��o dos eleitores desta cidade na �ltima elei��o.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char cidade [30];
	int votos,eleitores;
	float porcentagem;
	
	printf("Cidade: \n");
	scanf("%s",cidade);
	printf("Quantidade de eleitores: \n");
	scanf("%d",&eleitores);
	printf("Quantidade de votos: \n");
	scanf("%d",&votos);
	
	porcentagem = (float) votos*100/eleitores;
	
	printf("A %% de participa��o na elei��o da cidade %s foi de %.2f %%",cidade,porcentagem);
	
}

