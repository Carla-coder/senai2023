#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	char nome[5][15];
	char aux[15];
	int i, j;
	
	//Entrada usando string = vetor de caracteres
	for(i = 0; i < 5; i++){
		printf("Digite o nome da %d� pessoa: ", i + 1);
		scanf("%s",&nome[i]);
	}
	
	//Processamento - Algoritmo de classifica��o e troca
	//Utilizando apenas a primeira letra
	for(i = 0; i < 5; i++){
		for(j = i + 1; j < 5; j++){
			if(nome[i][0] > nome[j][0]){
				strcpy(aux, nome[i]);
				strcpy(nome[i], nome[j]);
				strcpy(nome[j], aux);
			}
		}
	}
	
	//Sa�da
	for(i = 0; i < 5; i++)
		printf("%s\n",nome[i]);
}
