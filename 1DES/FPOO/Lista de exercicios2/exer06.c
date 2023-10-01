#include <stdio.h>
int main(){
	int num1, num2, num3, num4, num5, num6;
	printf("\nDigite um numero inteiro:");
	scanf("%d" "%d" "%d" "%d" "%d" "%d", &num1, &num2, &num3, &num4, &num5, &num6);
	
	if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num1 > num6){
		printf("%d e o maior numero", num1);
	}else if(num2 > num3 && num2 > num4 && num2 > num5 && num2 > num6){
		printf("%d e o maior numero", num2);
	}else if(num3 > num4 && num3 > num5 && num3 > num6){
		printf("%d e o maior numero", num3);
	}else if(num4 > num5 && num4 > num6){
		printf("%d e o amior numero", num4);
	}else if(num5 > num6){
		printf("%d e o maior numero", num5);
	}else{
		printf("%d e o maior numero", num6);	
	}
	return 0;
}
