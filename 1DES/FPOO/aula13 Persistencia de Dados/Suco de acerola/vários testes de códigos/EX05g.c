#include <stdio.h> /*Inclui as bibliotecas padr�o do C: stdio.h para entrada e sa�da de dados e math.h para fun��es matem�ticas.*/
#include <math.h>

/*Declara��o e abertura de dois ponteiros de arquivo (FILE *) para leitura ("r") e escrita ("w"). 
O primeiro, arqEntrada, aponta para o arquivo de entrada chamado "suco.in", e o segundo, arqSaida, aponta para o arquivo de sa�da chamado "suco.out".*/
int main() {
    FILE *arqEntrada = fopen("suco.in", "r"); 
    FILE *arqSaida = fopen("suco.out", "w");

 /*  Verifica se o arquivo de entrada foi aberto com sucesso usando uma condicional if. 
 Se n�o foi poss�vel abrir o arquivo, exibe uma mensagem de erro na tela com printf e retorna 1 
 para indicar que ocorreu um erro durante a execu��o.*/ 
	if (arqEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }
/*Verifica se o arquivo de sa�da foi aberto com sucesso da mesma forma que o arquivo de entrada. 
Se n�o foi poss�vel abrir o arquivo de sa�da, exibe uma mensagem de erro na tela com printf, 
fecha o arquivo de entrada com fclose para evitar vazamentos de recursos e retorna 1 para indicar que ocorreu um erro.*/
    if (arqSaida == NULL) {
        printf("Erro ao abrir o arquivo de sa�da.\n");
        fclose(arqEntrada); // Fecha o arquivo de entrada antes de encerrar
        return 1;
    }
/*Declara��o das vari�veis inteiras N e F. Em seguida, entra em um loop while infinito, que ser� interrompido mais tarde com break.*/
    int N, F;
    while (1) {
        fscanf(arqEntrada, "%d %d", &N, &F); /*Usa fscanf para ler dois n�meros inteiros do arquivo de entrada e armazen�-los nas vari�veis N e F. 
		Os n�meros devem estar no formato "N F" no arquivo de entrada.*/
        if (N == 0 && F == 0) { /*Verifica se N e F s�o ambos iguais a zero. Se forem, isso indica o final da entrada, ent�o o loop � interrompido usando break.*/
            break; // Final da entrada
        }
/*Calcula o volume usando a f�rmula (F / (N * pow(50.0, 1.0/3.0))), onde pow � uma fun��o da biblioteca math.h para calcular a pot�ncia. 
O resultado � armazenado na vari�vel volume.*/
        double volume = (double) F / (N * pow(50.0, 1.0/3.0)); // C�lculo do volume em litros
/*Usa fprintf para escrever o valor calculado na vari�vel volume no arquivo de sa�da, formatando-o com duas casas decimais ("%.2f") 
e adicionando uma quebra de linha (\n) para separar as sa�das de cada caso.*/
        fprintf(arqSaida, "%.2f\n", volume); // Escreve o volume no arquivo de sa�da com duas casas decimais
    }

    // Fecha os arquivos ap�s o uso
    fclose(arqEntrada);
    fclose(arqSaida);

    return 0;
}



