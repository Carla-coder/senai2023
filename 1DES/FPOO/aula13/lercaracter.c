#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	FILE *arquivo;
	char c;
	
	/*  aqui o arquivo l� caracter por caracter*/
	
	arquivo = fopen("arquivo.txt", "r");
	if(arquivo == NULL)
		printf("Erro, n�o foi possivel abrir o arquivo\n");
	else{
		while((c=fgetc(arquivo)) != EOF)
		putchar(c);
	}
	fclose(arquivo);
	return 0;
	
}
