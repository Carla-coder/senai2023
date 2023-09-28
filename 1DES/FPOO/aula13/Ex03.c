/* Resultado do Ex03, aqui o programa leu o número de descendentes (4) e o que cada descendente fez com cada porta. 
O correto na interpretação do texto é descobrir quais portas foram abertas e fechadas */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  // Abre o arquivo para leitura
  FILE *arq = fopen("portas.in", "r");
  int i, j;
  int contador = 0;
  int *portas_abertas;
    // Declara uma variável para armazenar o número de descendentes
  int N;
  
  // Verifica se o arquivo foi aberto com sucesso
  if (arq == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  // Lê o primeiro número do arquivo
  fscanf(arq, "%d", &N);

  // Enquanto não for o fim do arquivo
  while (N != 0) {
    // Declara uma variável para armazenar as portas abertas
    int *portas_abertas = malloc(sizeof(int) * N);
    // Verifica se a alocação de memória foi bem-sucedida
	if (portas_abertas == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializa as portas como fechadas
    for (i = 0; i < N; i++) {
      portas_abertas[i] = 0;
    }

    // Para cada descendente
    for (i = 1; i <= N; i++) {
      // Para cada número
      for (j = 1; j <= N; j++) {
        // Se o número for múltiplo do identificador do descendente
        if (j % i == 0) {
          // Abre a porta
          portas_abertas[j - 1] = 1;
        }
      }
    }

    // Imprime as portas abertas
    printf("%d ", portas_abertas[0]);
    for (i = 1; i < N; i++) {
      printf("%d ", portas_abertas[i]);
    }
    printf("\n");

    // Libera a memória
    free(portas_abertas);

    // Lê o próximo número do arquivo
    fscanf(arq, "%d", &N);
  }

  // Fecha o arquivo
  fclose(arq);

  return 0;
}
