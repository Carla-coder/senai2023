#include <stdio.h>
int main(){
	int num, i;
	printf("Digite um numero:");
	scanf("%d", &num);

	for(i=0;i<=num;i++){
		if(i%2){
		printf("%d",i);
		}
	}
	return 0;
	
	
}
