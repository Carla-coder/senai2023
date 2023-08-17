#include <stdio.h>
int main(){
	float preco;
	printf("Digite o preco do produto: R$");
	scanf("%f" , &preco);
	if(preco > 1000){
		preco = preco * 0.92;
		printf("O preco do produto com o desconto de 8%% e de R$%.2f" , preco);
	}else{
		printf("O preco final e:R$ %.2f", preco);	
	}
	return 0;
}
