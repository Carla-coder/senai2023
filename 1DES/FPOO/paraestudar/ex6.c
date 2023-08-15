#include<stdio.h>
#include<locale.h>
#include<time.h>
int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));//Utiliza o rel�gio do PC para gerar pseudo aleat�rios
	int v[100]; //Vetor a ser classificado
	int i, j; //Contadores
	int aux; //Auriliar para fazer trocas
	int igual; //Validar se o n�mero gerado � igual a algum outro
	
	
	//Gera 100 n�meros aleat�rios de 0 a 1000 e sem duplicatas
	i = 0;
	do{
		//Gerar um n�mero aleat�rio
		aux = rand() % 1000;
		igual = 0;
		//Percorre o vetor comparando o n�mero gerado com todos os outros
		for(j = 0; j < i; j++){
			//se encontrar um igual no vetor transforma o igual a verdadeiro
			if(v[j] == aux)	igual = 1;
		}
		if(igual == 0){
			v[i] = aux;
			i++;
		}
	}while(i<100);
	

	//Processamento - Algoritmo de classifica��o e troca
	for(i = 0; i < 100; i++){
		for(j = i + 1; j < 100; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	//Sa�da com o vetor ordenado
	for(i = 0; i < 100; i++){
		printf("[%d]:%d\n",i,v[i]);
	}
}
