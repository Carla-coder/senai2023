/*
Desenvolva um programa que leia o nome e o sal�rio de uma pessoa,
depois leia o valor do �ndice percentual (%) de reajuste do sal�rio.
Calcule e apresente na tela, o valor do novo sal�rio e o nome da pessoa.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[10];
	float salario, percentual, novoSalario;
	
	//Entradas
	printf("Digite o nome do funcion�rio:\n");
	scanf("%s",&nome);
	printf("Digite o sal�rio:\n");
	scanf("%f",&salario);
	printf("Qual ser� o �ndice percentual (%%) de reajuste:\n");
	scanf("%f",&percentual);
	//Processamento
	novoSalario = salario + salario * percentual / 100;
	//Sa�da
	printf("O novo sal�rio do %s �: R$ %.2f", nome, novoSalario);
}
