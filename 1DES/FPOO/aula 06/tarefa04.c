#include <stdio.h>
int main(){
	int i;
	do{
		printf("Digite um numero inteiro:");
		scanf("%d",&i);
		printf("O quadrado � %d\n",i * i);
	}while(i != 4);
	
	return 0;
}
