#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int v[10]; //Vetor a ser classificado
	int i, j; //Contadores
	int aux; //Auriliar para fazer trocas
	
	//10 entradas sem valida��o
	for(i = 0; i < 10; i++){
		printf("Digite o %d� valor inteiro: ",i+1);
		scanf("%d",&v[i]);
	}
	
	//Processamento - Algoritmo de classifica��o e troca
	for(i = 0; i < 10; i++){
		for(j = i + 1; j < 10; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	//Sa�da com o vetor ordenado
		for(i = 0; i < 10; i++){
		printf("[%d]:%d\n",i+1,v[i]);
	}
}
