/* 2. Crie um programa que leia o arquivo CSV anterior e acrescente uma coluna chamada Idade com a idade calculada a partir da data de nascimento,
 e salve os dados em um novo arquivo CSV chamado saida.csv.
  O programa cont�m erros!!!! */

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

/* o erro esta em strptime ocorre porque a fun��o strptime n�o est� inclu�da diretamente na biblioteca padr�o do C.
Ela faz parte da biblioteca de manipula��o de tempo e data, que geralmente � vinculada com a biblioteca libdatetime no Linux
Para corrigir esse erro, voc� deve incluir a biblioteca de manipula��o de tempo e data no momento da compila��o.*/

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

	// Criando o arquivo de sa�da
	saida = fopen(arqSaida,"w");
	if (saida == NULL) {
		printf("Erro ao criar arquivo de sa�da.");
		return 1;
	}

	// Escrevendo as colunas no arquivo de sa�da
	fprintf(saida, "id;nome;nascimento;idade\n");
	for (i = 0; i < cont; i++) {
		fprintf(saida, "%d;%s;%s;%d\n", p[i].id, p[i].nome, p[i].nascimento, p[i].idade);
	}

	// Fechando os arquivos
	fclose(entrada);
	fclose(saida);
	return 0;
}
