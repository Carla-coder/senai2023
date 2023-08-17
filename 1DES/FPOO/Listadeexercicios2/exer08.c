#include <stdio.h>
int main(){
	int a, b;
	int maior; 
	int menor;
	
	printf("Digite dois numeros:", a, b);
	scanf("%d %d", &a, &b);
	
	if(a > b){
		maior = a;
		a = b;
		b = maior;	
	}
	if(b > a){
		maior = b;
		b = a;
		a = maior;
	}
	if(a < b){
		menor = a;
		a = b;
		b = menor;
	}
	if(b < a){
		menor = b;
		b = a;
		a = menor;
	}
		printf("\nO numero maior e:");
		printf("%d", b);
		printf("\nO numero menor e:");
		printf("%d",a);
	return 0;
	
}
