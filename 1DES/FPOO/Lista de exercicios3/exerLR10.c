#include <stdio.h>
int main(){
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	
	printf("Digite um numero:");
	scanf("%d", &num1);
	
	printf("Digite um numero:");
	scanf("%d", &num2);
	
	printf("Digite um numero:");
	scanf("%d", &num3);
	
	printf("Digite um numero:");
	scanf("%d", &num4);
	
	printf("Digite um numero:");
	scanf("%d", &num5);
	
	if(num1 > num2 ){
		
		int temp = num1;
		num1 = num2;
		num2 = temp;
		
	}if(num2 > num3){
		
		int temp = num2;
		num2 = num3;
		num3 = temp;
		
	}if(num3 > num4){
		
		int temp = num3;
		num3 = num4;
		num4 = temp;
		
	}if(num4 > num5){
		
		int temp = num4;
		num4 = num5;
		num5 = temp;
	
	}if(num1 > num2){
		
		int temp = num1;
		num1 = num2;
		num2 = temp;
		 
	}if(num2 > num3){
		
		int temp = num2;
		num2 = num3;
		num3 = temp;
		
	}if(num3 > num4){
	
		int temp = num3;
		num3 = num4;
		num4 = temp;
	
	}if(num1 > num2){
		
		int temp = num1;
		num1 = num2;
		num2 = temp;
	
	}if(num2 > num3){
		
		int temp = num2;
		num2 = num3;
		num3 = temp;
		
	}if(num1 > num2){
	
		int temp = num1;
		num1 = num2;
		num2 = temp;
	
	} else
	
		printf("Ordem crescente: %d %d %d %d %d \n", num1, num2, num3, num4, num5);
	
	return 0;
}
