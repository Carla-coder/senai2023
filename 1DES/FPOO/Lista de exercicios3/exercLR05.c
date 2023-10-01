#include <stdio.h>
int main(){
	int cont, valor;

	printf("Digite um valor:");
	scanf("%d", &valor);
	cont = 0;
	while(cont <= valor){
	printf("%d", cont);
	cont+=2;
	}
	return 0;
}

