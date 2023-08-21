#include <stdio.h>
int main(){
	int x, fat = 1;
	printf("Digite um numero:");
	scanf("%d", &x);
	if(x <= 0){
	printf("Digite um valor maior que zero:");
	}else{
	for(fat = 1; x > 1; x = x - 1){
		fat = fat * x;
	}
}
	printf("%d", fat);
	return 0;
}
