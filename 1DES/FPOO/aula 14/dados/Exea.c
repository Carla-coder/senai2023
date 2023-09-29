/* Exemplo mostrar a Pilha*/


#include <stdio.h>

int pilha[] = {21, 44, 35, 18, 8, 10};
int i;
void mostraPilha(){
	printf("Pilha:\n");
	for(i = 6; i > 0; i--) // ou usar (i = 0; i < 6; i++)
		printf("%d\n", pilha[i]);
}
int main(){
	mostraPilha();
}
