#include <stdio.h>
int main(){
	float a, b, c;
	printf("Digite o valor de a:");
	scanf("%f", &a);
	printf("Digite o valor de b:");
	scanf("%f", &b);
	printf("Digite o valor de c:");
	scanf("%f", &c);
	if(a != b && a != c && a != c){
		printf("Triangulo Escaleno");
	}else if(a ==b && a == c){
		printf("Triangulo Equilatero");
	}else
		printf("Triangulo Isosceles");
	return 0;
}
