//*Fa�a um programa que pe�a ao usuario digitar um numero qualquer por�m s� termine quando o ususario digitar o numero 4*//
#include <stdio.h>
int main(){
	int i;
	do{
		printf("Digite um numero inteiro:");
		scanf("%d", &i);	
		}while(i != 4);
	return 0;
}
