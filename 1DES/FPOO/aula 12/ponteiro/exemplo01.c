//Exemplo de Ponteiro: Serve para economizar mem�ria do computador
#include <stdio.h>
int main(){
	char nome[] = "Marcelo"; // vetor com 7 bytes
	char *ponteiro = nome;// ponteiro com 1 byte que aponta para o vetor nome
	printf("%s\n", nome);
	printf("%c\n", ponteiro[0]);//se apontar para  aposi��o 6 aparece a letra O
	return 0;
}
