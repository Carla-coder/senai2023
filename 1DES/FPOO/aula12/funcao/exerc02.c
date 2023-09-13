// 2.Crie uma função que calcule a média de N notas
#include <stdio.h>
	float media(float a, float b, float c){
	return (a + b + c) / 3;
}
	
int main(){
	printf("%.1f", media(10,7,2));
	return 0;
}
