#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int v1[5];
	int v2[5];
	int i;
	
	//Entradas para o vetor1
	printf("Usu�rio, informe 5 valores:");
	for(i = 0; i < 5; i++){
		scanf("%d",&v1[i]);
	}
	//Entradas para o vetor2
	printf("Usu�rio, mais informe 5 valores:");
	for(i = 0; i < 5; i++){
		scanf("%d",&v2[i]);
	}
	
	//Processamento e Sa�da
	for(i = 0; i < 5; i++){
		printf("%d\n",v1[i]+v2[4-i]);
	}
}
