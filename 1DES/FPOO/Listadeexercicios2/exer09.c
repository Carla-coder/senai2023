#include <stdio.h>
int main(){
	int sal;
	int sal2;
	printf("Digite o salario atual:");
	scanf("%d", &sal);
	
	if(1500 <= sal && sal < 1750){
		sal2 = sal * 1.15;
	}else if(1750 <= sal && sal < 2000){
		sal2 = sal * 1.12;
	}else if(2000 <= sal && sal < 3000){
		sal2 = sal * 1.09;
	}else if(3000 <= sal){
		sal2 = sal * 1.06;
	}else{
		sal2 = sal;
	}
		printf("Salario: %.2f", sal2);
	return 0;
	
	
}
