#include <stdio.h>
#include <string.h>

int main(){
	char cidade[50];
	char nome[50];
	int num[6];
	int votos, brancos, nulos, turno;
	
	printf("Digite o nome da cidade:");
	scanf("%s", &cidade);
	printf("Digite o numero de candidatos:");
	scanf("%d", &num);
	printf("Digite o nome do primeiro candidato:");
	scanf("%s",&nome);
	printf("Digite o total de votos:");
	scanf("%d",&votos);
	printf("Digite o nome do segundo candidato:");
	scanf("%s",&nome);
	printf("Digite o total de votos:");
	scanf("%d",&votos);
	printf("Digite o nome do terceiro candidato:");
	scanf("%s",&nome);
	printf("Digite o total de votos:");
	scanf("%d",&votos);
	printf("Digite o nome do quarto candidato:");
	scanf("%s",&nome);
	printf("Digite o total de votos:");
	scanf("%d",&votos);
	printf("Digite o nome do quinto candidato:");
	scanf("%s",&nome);
	printf("Digite o total de votos:");
	scanf("%d",&votos);
	printf("Digite o nome do sexto candidato:");
	scanf("%s",&nome); 
	printf("Digite o total de votos:");
	scanf("%d",&votos);
	printf("Digite o numero de votos brancos:");
	scanf("%d",&brancos);
	printf("Digite o numero de votos nulos:");
	scanf("%d",&nulos);
	
	if(votos >= 200000 && votos <= 10000 && turno > 200000)
		printf("Votos validos");
		scanf("%d %d %d %2.f", brancos, nulos, turno);
		
	else if(votos <= 200000 && votos >= 10000 && turno < 200000)
		printf("Votos invalidos");
	    scanf("%d %d %d %2.f", brancos, nulos, turno);
	else 	
		printf("Nao havera segundo turno", turno);
	
		
	
	
	
	return 0;
}
