#include <stdio.h>
int main(){
	char nome[100];
	float salario;
	int salarionovo;
	int reajuste;
		printf("Digite seu nome:");
		scanf("%s",&nome);
		printf("Digite seu salario:");
		scanf("%f", &salario);
		printf("Insira o reajuste %%:");
		scanf("%d", &reajuste);
		salarionovo = (salario * (reajuste + 100))/ 100;
		printf("Ola, %s \nSeu salario novo e: %d", nome, salarionovo);
	return 0;
}
