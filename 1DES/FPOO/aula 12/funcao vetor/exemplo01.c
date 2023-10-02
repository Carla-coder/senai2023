#include <stdio.h>
int funcao(int vetor[], int n){
	int i = 0;
	for(i = 0; i < n; i++)
	printf("%d\n",vetor[i]);
}

int main(){
	int numeros[] = {10,8,7,6};
	funcao(numeros, 4);
	return 0;
	
}
