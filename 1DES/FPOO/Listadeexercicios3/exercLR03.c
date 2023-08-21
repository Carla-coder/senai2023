#include <stdio.h>
int main(){
	int cont, valor;
	printf("Digite um valor:");
	scanf("%d", &valor);
	for(cont = 0; cont <= valor; cont++){
		printf("%d",cont);
	}
	return 0;
}
