#include <stdio.h>
//Função que retorna a soma de dois parametros inteiros
int soma(int a, int b){
	return a + b;
}

int main(){
	printf("A soma de 10 + 10 = %d", soma a + b); //exemplo de função
	return 0;
}

//Função que retorna a media de dois parametros inteiros
int media(int a, int b){
	return (a + b) / 2;
}

int main(){
	printf("A media de 84 + 16 = %d", media(84, 16)); //exemplo de função
	return 0;
}

//exemplo de um procedimento que escreve uma frase 100 vezes
void procedimentoBart(){ //não possue nenhum parametro
	int i;
	for(i = 0; i < 100; i ++)
		printf("não vou atormentar a Lisa\n");
}

// procedimento que escreve uma frase qualquer "n" vezes
void frases(char frase[], int n){ //prossue 2 parametros char e int
	int i;
	for( i = 0; i < n; i ++)
	printf("%s\n", frase);
}

int main(){
	frases("Palmeiras não tem MUNDIAL", 5);
	return 0;
}


