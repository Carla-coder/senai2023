#include <stdio.h>
int main(){
	int numero;
	int contador = 0;
	printf("Tabuada \n\n");
	printf("Digite um numero:");
	scanf("%d", &numero);	
	for(contador = 0; contador <= 10; contador++){
		printf("%d x %d = %d\n", numero,contador,numero * contador);	
	}
	return 0;
}
