#include <stdio.h>
//Fun��o que retorna a soma de dois parametros inteiros
int soma(int a, int b){
	return a + b;
}

int main(){
	printf("A soma de 10 + 10 = %d", soma a + b); //exemplo de fun��o
	return 0;
}

//Fun��o que retorna a media de dois parametros inteiros
int media(int a, int b){
	return (a + b) / 2;
}

int main(){
	printf("A media de 84 + 16 = %d", media(84, 16)); //exemplo de fun��o
	return 0;
}

//exemplo de um procedimento que escreve uma frase 100 vezes
void procedimentoBart(){ //n�o possue nenhum parametro
	int i;
	for(i = 0; i < 100; i ++)
		printf("n�o vou atormentar a Lisa\n");
}

// procedimento que escreve uma frase qualquer "n" vezes
void frases(char frase[], int n){ //prossue 2 parametros char e int
	int i;
	for( i = 0; i < n; i ++)
	printf("%s\n", frase);
}

int main(){
	frases("Palmeiras n�o tem MUNDIAL", 5);
	return 0;
}


