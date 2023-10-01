#include <stdio.h>
int main(){
	int cont, valor1, valor2;
	printf("Digite um valor:");
	scanf("%d",&valor1);
	printf("Digite um valor:");
	scanf("%d",&valor2);
if(valor2 < valor1){
	cont = valor1;
	valor1 = valor2;
	valor2 = cont;
	}
	for(cont = valor1; cont <= valor2; cont++){
		printf("%d", cont);
	}
	
	return 0;
}
