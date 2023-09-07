/* Um técnico de uma empresa de jogos está desenvolvendo seu motor de desenvolvimento de jogos. O processo atual do software se encontra no cálculo de movimento de pontos. o protótipo é exibido na figura a seguir.
O que será impresso após a execução desse algoritmo? */

#include <stdio.h>
#include <locale.h>
int inicio(){
	int x1 = 10;
	int y1 = 10;
	int x2 = (20 + 10) * -1;
	int y2 = 110 - 10 / y1;
	
	if(x1 < x2)
		printf("X1 a esquerda");
	else if(x1 == x2)
		printf("Mesmo ponto horizontal");
	else
		printf("X1 a direita");
		
	if(y1 < y2)
		printf("Y1 acima");
	else if(y1 == y2)
		printf("Mesmo ponto vertical");
		else
			printf("Y1 abaixo");
}

int main(){
	setlocale(LC_ALL,"");
    inicio();
	return 0;
}
