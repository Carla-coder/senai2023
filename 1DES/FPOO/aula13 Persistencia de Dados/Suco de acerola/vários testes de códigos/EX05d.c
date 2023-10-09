/* A primeira linha declara as variáveis necessárias: n para o número de amigos, f para a quantidade de frutas colhidas e volume para o volume de suco.
A segunda linha usa o loop while para ler a entrada do usuário. O loop termina quando o usuário digita duas linhas com o valor 0.
A terceira linha usa a função scanf() para ler os valores de n e f da entrada.
A quarta linha calcula o volume de suco usando a seguinte fórmula:
volume = f / 50.0 / n
Onde:
f é a quantidade de frutas colhidas
50.0 é o volume de suco produzido por cada fruta
n é o número de amigos
A quinta linha usa a função printf() para imprimir o volume de suco com duas casas decimais.*/

#include <stdio.h>

int main() {
  // Declaração de variáveis
  int n, f;
  float volume;

  // Leitura da entrada
  while (scanf("%d %d", &n, &f) != EOF) {
    // Cálculo do volume de suco
    volume = f / 50.0 / n;

    // Impressão da saída
    printf("%.2f\n", volume);
  }

  return 0;
}
