//*Faça um programa que escreva na tela os numerais de 0 a 20 de 2 em 2*//
#include <stdio.h>
int main(){
	int i;
	for(i = 1; i <= 20; i+=2)//exemplo exibindo os numerais ímpares.Para exibir numerais pares coloca-se i = 0//
			printf("%d\n", i);
	return 0;
}
