#include <stdio.h> /*Inclui as bibliotecas padrão do C: stdio.h para entrada e saída de dados e math.h para funções matemáticas.*/
#include <math.h>

/*Declaração e abertura de dois ponteiros de arquivo (FILE *) para leitura ("r") e escrita ("w"). 
O primeiro, arqEntrada, aponta para o arquivo de entrada chamado "suco.in", e o segundo, arqSaida, aponta para o arquivo de saída chamado "suco.out".*/
int main() {
    FILE *arqEntrada = fopen("suco.in", "r"); 
    FILE *arqSaida = fopen("suco.out", "w");

 /*  Verifica se o arquivo de entrada foi aberto com sucesso usando uma condicional if. 
 Se não foi possível abrir o arquivo, exibe uma mensagem de erro na tela com printf e retorna 1 
 para indicar que ocorreu um erro durante a execução.*/ 
	if (arqEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }
/*Verifica se o arquivo de saída foi aberto com sucesso da mesma forma que o arquivo de entrada. 
Se não foi possível abrir o arquivo de saída, exibe uma mensagem de erro na tela com printf, 
fecha o arquivo de entrada com fclose para evitar vazamentos de recursos e retorna 1 para indicar que ocorreu um erro.*/
    if (arqSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(arqEntrada); // Fecha o arquivo de entrada antes de encerrar
        return 1;
    }
/*Declaração das variáveis inteiras N e F. Em seguida, entra em um loop while infinito, que será interrompido mais tarde com break.*/
    int N, F;
    while (1) {
        fscanf(arqEntrada, "%d %d", &N, &F); /*Usa fscanf para ler dois números inteiros do arquivo de entrada e armazená-los nas variáveis N e F. 
		Os números devem estar no formato "N F" no arquivo de entrada.*/
        if (N == 0 && F == 0) { /*Verifica se N e F são ambos iguais a zero. Se forem, isso indica o final da entrada, então o loop é interrompido usando break.*/
            break; // Final da entrada
        }
/*Calcula o volume usando a fórmula (F / (N * pow(50.0, 1.0/3.0))), onde pow é uma função da biblioteca math.h para calcular a potência. 
O resultado é armazenado na variável volume.*/
        double volume = (double) F / (N * pow(50.0, 1.0/3.0)); // Cálculo do volume em litros
/*Usa fprintf para escrever o valor calculado na variável volume no arquivo de saída, formatando-o com duas casas decimais ("%.2f") 
e adicionando uma quebra de linha (\n) para separar as saídas de cada caso.*/
        fprintf(arqSaida, "%.2f\n", volume); // Escreve o volume no arquivo de saída com duas casas decimais
    }

    // Fecha os arquivos após o uso
    fclose(arqEntrada);
    fclose(arqSaida);

    return 0;
}



