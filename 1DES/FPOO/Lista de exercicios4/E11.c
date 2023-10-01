/* Neste programa, usamos a função rand() para gerar números inteiros aleatórios entre 0 e 100 e preenchemos o vetor com esses números. 
Em seguida, solicitamos ao usuário que informe um valor a ser localizado e percorremos o vetor para procurar esse valor. 
Se o valor for encontrado, exibimos sua posição no vetor; caso contrário, informamos que o valor não foi encontrado.
A função srand(time(NULL)); é comumente usada em programas em C para inicializar o gerador de números aleatórios rand()com uma semente que varia com o tempo.
Essa sEssa semente torna os números gerados pelo rand() menos previsíveis, tornando-os mais aleatórios.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    int vetor[10];
    int i, valor, posicao;

    // Preenche o vetor com números inteiros aleatórios entre 0 e 100
    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 101; // Gera números entre 0 e 100
    }

    // Solicita ao usuário que informe um valor a ser localizado
    printf("Digite um valor a ser localizado no vetor:");
    scanf("%d", &valor);

    // Procura o valor no vetor
    posicao = -1; // Inicializa como -1 para indicar que o valor não foi encontrado
    for (i = 0; i < 10; i++) {
        if (vetor[i] == valor) {
            posicao = i; // Atualiza a posição se o valor for encontrado
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







