/* Em C, voc� pode usar ponteiros para acessar e manipular diretamente a mem�ria do seu programa. 
Isso � �til em v�rias situa��es, como passar argumentos por refer�ncia para fun��es, alocar e liberar mem�ria dinamicamente e acessar elementos em estruturas de dados complexas.
Neste exemplo, temos uma fun��o chamada duplicar que recebe um ponteiro para um inteiro. 
Dentro da fun��o, usamos o operador de desrefer�ncia * para acessar o valor apontado pelo ponteiro e, em seguida, duplicamos esse valor multiplicando-o por 2.
No main(), criamos uma vari�vel x, chamamos a fun��o duplicar e passamos o endere�o de x como argumento para a fun��o. 
Isso permite que a fun��o modifique diretamente o valor de x na mem�ria.
Ao executar o programa, voc� ver� que o valor de x � duplicado ap�s a chamada da fun��o duplicar. 
Isso ilustra como usar ponteiros para alterar vari�veis fora do escopo da fun��o que os chamou.*/


#include <stdio.h>

// Fun��o que duplica o valor de um n�mero usando um ponteiro
void duplicar(int *numero) {
    *numero *= 2;
}

int main() {
    int x = 10;

    printf("Valor original de x: %d\n", x);

    // Chama a fun��o para duplicar o valor de x
    duplicar(&x);

    printf("Valor de x apos a duplicacao: %d\n", x);

    return 0;
}

