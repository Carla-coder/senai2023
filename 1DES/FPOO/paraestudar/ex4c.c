#include<stdio.h>
#include<locale.h>
#include<time.h>
int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int v[50];
	int posicoes[50];
	int contp = 0;
	int i, num;
	//Gerar os n�meros aleat�rios para o vetor
	for(i = 0; i < 50; i++){
		v[i] = rand() % 100;
		printf("[%d]%d\n",i,v[i]);
	}
	//Entrada
	printf("Digite um n�mero inteiro\n");
	scanf("%d",&num);
	//Processamento
	for(i = 0; i < 50; i++){
		if(v[i] == num){
			posicoes[contp] = i;
			contp++;
		}
	}
	//Sa�da
	if(contp > 0){
		for(i = 0; i < contp; i++)
			printf("Encontrei na posi��o %d\n", posicoes[i]);
	}
	else printf("N�o encontrei");
	//Desafio 1 (Mostrar todas as posi��es em que o n�mero for encontrado caso seja repetido)
}

