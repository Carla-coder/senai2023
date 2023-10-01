#include <stdio.h>
#include <locale.h>

int main(){
	char nome[50];
	float peso;
	float altura;
	float imc;
	int continuar;
	do{
	
	printf("Digite seu nome:");
	scanf("%s", &nome);
	printf("Digite seu peso em kg:");
	scanf("%f", &peso);
	printf("Digite a sua altura em metros:");
	scanf("%f", &altura);
	imc = peso / (altura * altura);

	printf("O imc e: %.2f",imc);
	
	if(imc < 18) printf("\n Baixo peso ");
	else if(imc < 25) printf("\n Normal ");
	else if(imc < 30) printf("\n Sobrepeso ");
	else if(imc < 40) printf("\n Obesidade ");
	
	printf("\n Digite 1 para continuar ou 0 para sair:");
	scanf("%d", &continuar);
	
	}while(continuar);
	
	
	return 0;
}
