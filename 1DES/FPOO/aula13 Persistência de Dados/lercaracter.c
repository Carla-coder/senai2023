#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	FILE *arquivo;
	char c;
	
	/*  aqui o arquivo lê caracter por caracter*/
	
	arquivo = fopen("arquivo.txt", "r"); // "r" leitura
	if(arquivo == NULL)
		printf("Erro, não foi possivel abrir o arquivo\n");
	else{
		while((c=fgetc(arquivo)) != EOF)
		putchar(c); // coloca o caracter c na tela
	}
	fclose(arquivo);
	return 0;
	
}
