/*
	Desenvolva um programa que leia tr�s
	vari�veis (a, b, c) e resolva a
	express�o: ( a + b ) / c.
*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	//Configura��o das vari�veis
	int a, b, c, d; //Este programa utiliza 128 bits 16 bytes

	//Entradas do programa
	printf("Digite um valor para a = ");
	scanf("%d", &a);
	printf("Digite um valor para b = ");
	scanf("%d", &b);
	printf("Digite um valor para c = ");
	scanf("%d", &c);

	//Processamento
	d = (a + b) / c;
	
	//Sa�da do programa
	printf("O resultado da conta (a + b) / c = %d",d);
}

