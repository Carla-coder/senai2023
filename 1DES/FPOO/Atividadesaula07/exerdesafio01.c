#include <stdio.h>
int main(){
	char nome[10];
	int i;
	int dias;
	float somaa, somab;
	int decisao = 1;
	while(decisao){
		somaa = 0;
		somab = 0;
		printf("Digite seu nome:");
		scanf("%s", &nome);
		printf("Digite o numero de dias:");
		scanf("%d", &dias);
		printf("\n");
		float a[dias];
		float b[dias];
	for(i = 0; i < dias; i++){
		printf("Digite a pressao Sistolica da semana:\n");
		scanf("%f", &a[i]);
		printf("Digite a pressao Diastolica da semana:\n");
		scanf("%f", &b[i]);
		printf("\n");
	}
	for(i =0; i < dias; i++){
		somaa += a[i];
		somab += b[i];
	}	
		somaa /= dias;
		somab /= dias;
		printf("Sua pressao media sis e dis e igual a %.2f %.2f \n", somaa,somab);
		printf("Deseja continuar usando o programa? 1 para Sim e 0 para Nao:");
		scanf("%d", decisao);
		
	}
	return 0;
}
