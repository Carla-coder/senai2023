#include <stdio.h>
#include <locale.h>

//Fun��o que retorna a soma de dois parametros inteiros
int soma(int a, int b){
	return a + b;
}

//Fun��o que retorna a media de dois parametros inteiros
int media(int a, int b){
	return (a + b) / 2;
}

//exemplo de um procedimento que escreve uma frase 100 vezes
void procedimentoBart(){ //n�o possue nenhum parametro
	int i;
	for(i = 0; i < 100; i ++)
		printf("n�o vou atormentar a Lisa\n");
}

// procedimento que escreve uma frase qualquer "n" vezes
void frases(char *frase, int n){ //prossue 2 parametros - char e int -
	int i;
	for( i = 0; i < n; i ++)
	printf("%s\n", frase);
}

// Fun��o que calcula a m�dia de 3 notas
float media3(float a, float b, float c){
	return (a + b + c) / 3;
}

// Fun��o que calcula a m�dia de "n" notas
float mediaN(float notas[], int n){
	float total = 0;
	int i;
	for(i = 0; i < n; i++){
		total += notas[i];
		return total / n;
}	
	
int main(){
	setlocale(LC_ALL,"");
	float notas[] = { 10, 10, 10, 10, 10, 10, 5, 5, 5, 5, 5, 5};
	int bytes = sizeof(notas);
	int elementos = bytes / sizeof(notas[0]);
	printf("Tamanho do vetor em bytes = %d\n", bytes);
	printf("Quantidade de elementos do vetor = %d\n", elementos);
	printf("%.1f", mediaN(notas, elementos));
	return 0;
}




