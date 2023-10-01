#include <stdio.h>

struct resultado {
  int n;
  int f;
  float volume, resultados;
};

int main() {
  // Declara��o de vari�veis
  int N, i;
  struct resultado resultados[N];

  // Leitura da entrada
  for (i = 0; i < N; i++) {
    // Leitura dos valores de n e f
    scanf("%d %d", &resultados[i].n, &resultados[i].f);

    // C�lculo do volume de suco
    resultados[i].volume = (float) resultados[i].f / 50.0 / resultados[i].n;
  }

  // Impress�o da sa�da
  for (i = 0; i < N; i++) {
    printf("%.2f\n", resultados[i].volume);
  }

  return 0;
}
