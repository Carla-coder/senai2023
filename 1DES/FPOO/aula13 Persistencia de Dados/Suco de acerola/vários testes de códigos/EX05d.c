/* A primeira linha declara as vari�veis necess�rias: n para o n�mero de amigos, f para a quantidade de frutas colhidas e volume para o volume de suco.
A segunda linha usa o loop while para ler a entrada do usu�rio. O loop termina quando o usu�rio digita duas linhas com o valor 0.
A terceira linha usa a fun��o scanf() para ler os valores de n e f da entrada.
A quarta linha calcula o volume de suco usando a seguinte f�rmula:
volume = f / 50.0 / n
Onde:
f � a quantidade de frutas colhidas
50.0 � o volume de suco produzido por cada fruta
n � o n�mero de amigos
A quinta linha usa a fun��o printf() para imprimir o volume de suco com duas casas decimais.*/

#include <stdio.h>

int main() {
  // Declara��o de vari�veis
  int n, f;
  float volume;

  // Leitura da entrada
  while (scanf("%d %d", &n, &f) != EOF) {
    // C�lculo do volume de suco
    volume = f / 50.0 / n;

    // Impress�o da sa�da
    printf("%.2f\n", volume);
  }

  return 0;
}
