#include <stdio.h>
int main(){
	int n1, n2, n3, n4, n5;
	int ordem;
	
		printf("Digite 5 numeros inteiros por espacos:");
		scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
		
	if(n1 > n2){
		ordem = n1;
		n1 = n2;
		n2 = ordem;
	}
	if(n2 > n3){
		ordem = n2;
		n2 = n3;
		n3 = ordem;
	}
	if(n3 > n4){
		ordem = n3;
		n3 = n4;
		n4 = ordem;
	}
	if(n4 > n5){
		ordem = n4;
		n4 = n5;
		n5 = ordem;
	}
	if(n1 > n2){
		ordem = n1;
		n1 = n2;
		n2 = ordem;
	}	
	if(n2 > n3){
		ordem = n2;
		n2 = n3;
		n3 = ordem;
	}
	if(n3 > n4){
	    ordem = n3;
		n3 = n4;
		n4 = ordem;	
	}
	if(n1 > n2){
		ordem = n1;
		n1 > n2;
		n2 = ordem;
	}
	if(n2 > n3){
		ordem = n2;
		n2 = n3;
		n3 = ordem;
	}
	if(n1 > n2){
		ordem = n1;
		n1 = n2;
		n2 = ordem;
	}
	
	printf("Numeros em ordem crescente:");
	printf("\n%d \n%d \n%d \n%d \n%d", n1, n2, n3, n4, n5);
	
	
	
	return 0;
}
