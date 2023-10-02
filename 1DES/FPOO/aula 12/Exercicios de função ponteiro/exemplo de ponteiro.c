/* Em C, você pode usar ponteiros para acessar e manipular diretamente a memória do seu programa. 
Isso é útil em várias situações, como passar argumentos por referência para funções, alocar e liberar memória dinamicamente e acessar elementos em estruturas de dados complexas.
Neste exemplo, temos uma função chamada duplicar que recebe um ponteiro para um inteiro. 
Dentro da função, usamos o operador de desreferência * para acessar o valor apontado pelo ponteiro e, em seguida, duplicamos esse valor multiplicando-o por 2.
No main(), criamos uma variável x, chamamos a função duplicar e passamos o endereço de x como argumento para a função. 
Isso permite que a função modifique diretamente o valor de x na memória.
Ao executar o programa, você verá que o valor de x é duplicado após a chamada da função duplicar. 
Isso ilustra como usar ponteiros para alterar variáveis fora do escopo da função que os chamou.*/


#include <stdio.h>

// Função que duplica o valor de um número usando um ponteiro
void duplicar(int *numero) {
    *numero *= 2;
}

int main() {
    int x = 10;

    printf("Valor original de x: %d\n", x);

    // Chama a função para duplicar o valor de x
    duplicar(&x);

    printf("Valor de x apos a duplicacao: %d\n", x);

    return 0;
}

