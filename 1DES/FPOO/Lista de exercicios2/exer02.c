#include <stdio.h>
int main(){
	int salario;
	int salario2;
	int salario3;
	int filhos;
	 printf("Insira seu salario: R$");
	 scanf("%d", &salario);
	 
	 
	 if(salario < 2000){
	 	printf("Insira quantos filhos tem:\n");
	 	scanf("%d", &filhos);
	 	salario2 = filhos * 45;
	 	salario = salario + salario2;
	 	
	 	printf("Seu novo salario e de R$%d\n" , salario);
	 	return 0;
		
	}else{
	
	printf("Seu salario nao foi alterado.");
	return 0;
}
	 	
	 
	return 0;
}
