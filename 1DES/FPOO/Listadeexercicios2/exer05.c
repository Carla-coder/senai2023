#include <stdio.h>
int main(){
	char a[10];
	float b;
	float c;

	printf("Digite o nome do produto:");
	scanf("%s", &a);
	printf("Digite o preco do produto: R$", b);
	scanf("%f", &b);
	
	if(b < 1000){
		b = b * 1.05;
		printf("O valor do produto %s com aumento de 5%% e de R$%.2f", a , b);
		
	}else{
		b = b * 1.07;
		printf(" O valor do produto %s com aumento de 7%% e de R$%.2f", a , b);
	}
	return 0; 
}
