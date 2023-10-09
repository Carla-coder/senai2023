/* 2. Crie um programa que leia o arquivo CSV anterior e acrescente uma coluna chamada Idade com a idade calculada a partir da data de nascimento,
 e salve os dados em um novo arquivo CSV chamado saida.csv.
  O programa contém erros!!!! */

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

FILE *entrada;
char arqEntrada[] = "entrada.csv";
FILE *saida;
char arqSaida[] = "saida.csv";

struct Pessoa {
	int id;
	char nome[50];
	char nascimento[11];
	int idade;
};

int contLinhas(){
	int cont = 0;
	char linha[100];
	entrada = fopen(arqEntrada,"r");
	if(entrada == NULL)
		printf("Erro ao ler arquivo.");
	else{
		fgets(linha, 100, entrada);
		while(fgets(linha, 100, entrada)!= NULL)
			cont++;
	}		
	fclose(entrada);
	return cont;
}

struct Pessoa getPessoa(char *linha){
	struct Pessoa p;
	p.id = atoi(strtok(linha,";"));
	strcpy(p.nome,strtok(NULL,";"));
	strcpy(p.nascimento,strtok(NULL,";"));
	return p;
}

/* o erro esta em strptime ocorre porque a função strptime não está incluída diretamente na biblioteca padrão do C.
Ela faz parte da biblioteca de manipulação de tempo e data, que geralmente é vinculada com a biblioteca libdatetime no Linux
Para corrigir esse erro, você deve incluir a biblioteca de manipulação de tempo e data no momento da compilação.*/

	struct tm dataNascimento;
	struct tm dataAtual;

	// Convertendo a data de nascimento para um struct tm
	strptime(p->nascimento, "%d/%m/%Y", &dataNascimento);

	// Obtendo a data atual
	time_t t = time(NULL);
	struct tm *data = localtime(&t);

	// Convertendo a data atual para um struct tm
	dataAtual = *data;

	// Calculando a idade
	p->idade = (difftime(mktime(&dataAtual), mktime(&dataNascimento)) / 31557600);
}

int main(){
	printf("O arquivo possui %d linhas\n", contLinhas());

	// Criando um vetor da estrutura Pessoas
	struct Pessoa p[contLinhas()];

	// Lendo o arquivo de entrada e separando os dados na Estrutura
	char linha[100];
	int cont = 0, i;
	entrada = fopen(arqEntrada,"r");
	if(entrada == NULL)
		printf("Erro ao ler arquivo.");
	else{
		fgets(linha, 100, entrada);
		while(fgets(linha, 100, entrada)!= NULL){
			p[cont] = getPessoa(linha);
			cont++;
		}
	}

	// Calculando a idade de cada pessoa
	for (i = 0; i < cont; i++) {
		calcularIdade(&p[i]);
	}

	// Criando o arquivo de saída
	saida = fopen(arqSaida,"w");
	if (saida == NULL) {
		printf("Erro ao criar arquivo de saída.");
		return 1;
	}

	// Escrevendo as colunas no arquivo de saída
	fprintf(saida, "id;nome;nascimento;idade\n");
	for (i = 0; i < cont; i++) {
		fprintf(saida, "%d;%s;%s;%d\n", p[i].id, p[i].nome, p[i].nascimento, p[i].idade);
	}

	// Fechando os arquivos
	fclose(entrada);
	fclose(saida);
	return 0;
}
