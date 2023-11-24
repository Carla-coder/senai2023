#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	FILE *arquivo;
	char linha[100]; // de vez de usar a palavra "linha" pode usar "str"	
	/* lê linha por linha*/
	
	arquivo = fopen("arquivo.txt","r");
	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo\n");
		return 1;
	}
	 while(fgets (linha,100,arquivo)!= NULL){
	 	printf("%s", linha);
	}
	fclose(arquivo);
	return 0;
	
}
