/* Resultado do Ex03, aqui o programa leu o n�mero de descendentes (4) e o que cada descendente fez com cada porta. 
O correto na interpreta��o do texto � descobrir quais portas foram abertas e fechadas */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  // Abre o arquivo para leitura
  FILE *arq = fopen("portas.in", "r");
  int i, j;
  int contador = 0;
  int *portas_abertas;
    // Declara uma vari�vel para armazenar o n�mero de descendentes
  int N;
  
  // Verifica se o arquivo foi aberto com sucesso
  if (arq == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  // L� o primeiro n�mero do arquivo
  fscanf(arq, "%d", &N);

  // Enquanto n�o for o fim do arquivo
  while (N != 0) {
    // Declara uma vari�vel para armazenar as portas abertas
    int *portas_abertas = malloc(sizeof(int) * N);
    // Verifica se a aloca��o de mem�ria foi bem-sucedida
	if (portas_abertas == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;
    }

    // Inicializa as portas como fechadas
    for (i = 0; i < N; i++) {
      portas_abertas[i] = 0;
    }

    // Para cada descendente
    for (i = 1; i <= N; i++) {
      // Para cada n�mero
      for (j = 1; j <= N; j++) {
        // Se o n�mero for m�ltiplo do identificador do descendente
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

    // Libera a mem�ria
    free(portas_abertas);

    // L� o pr�ximo n�mero do arquivo
    fscanf(arq, "%d", &N);
  }

  // Fecha o arquivo
  fclose(arq);

  return 0;
}
