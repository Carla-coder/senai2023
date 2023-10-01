#include <stdio.h>
int main(){
	char nomeprod;
	float preco;
	float valor;
	printf("Digite o nome do produto:\n");
	scanf("%s", &nomeprod);
	printf("Digite o preco: R$\n");
	scanf("%f", &preco);
	valor = preco * 0.05;
	printf("Com o reajuste de 5%% o produto %s esta custando agora R$%.2f", nomeprod, valor);
return 0;
}
