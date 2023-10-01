/* Neste programa, usamos a fun��o rand() para gerar n�meros inteiros aleat�rios entre 0 e 100 e preenchemos o vetor com esses n�meros. 
Em seguida, solicitamos ao usu�rio que informe um valor a ser localizado e percorremos o vetor para procurar esse valor. 
Se o valor for encontrado, exibimos sua posi��o no vetor; caso contr�rio, informamos que o valor n�o foi encontrado.
A fun��o srand(time(NULL)); � comumente usada em programas em C para inicializar o gerador de n�meros aleat�rios rand()com uma semente que varia com o tempo.
Essa sEssa semente torna os n�meros gerados pelo rand() menos previs�veis, tornando-os mais aleat�rios.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Inicializa o gerador de n�meros aleat�rios
    srand(time(NULL));

    int vetor[10];
    int i, valor, posicao;

    // Preenche o vetor com n�meros inteiros aleat�rios entre 0 e 100
    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 101; // Gera n�meros entre 0 e 100
    }

    // Solicita ao usu�rio que informe um valor a ser localizado
    printf("Digite um valor a ser localizado no vetor:");
    scanf("%d", &valor);

    // Procura o valor no vetor
    posicao = -1; // Inicializa como -1 para indicar que o valor n�o foi encontrado
    for (i = 0; i < 10; i++) {
        if (vetor[i] == valor) {
            posicao = i; // Atualiza a posi��o se o valor for encontrado
            break; // Sai do loop assim que encontrar o valor
        }
    }

    // Exibe o resultado
    if (posicao != -1) {
        printf("O valor %d foi encontrado na posicao %d do vetor.\n", valor, posicao);
    } else {
        printf("O valor %d nao foi encontrado no vetor.\n", valor);
    }

    return 0;
}







