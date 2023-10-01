/* Atv 02: Agora utilizando "Fila". Aqui está um programa em linguagem C que utiliza o mesmo algoritmo, 
mas desta vez implementa uma fila (queue) em vez de uma pilha (stack). 
O programa oferece um menu para que o usuário possa inserir e remover elementos na fila e mostrar o estado atual da fila */

#include <stdio.h>
#define SIZE 10

int fila[SIZE];
int frente = -1; // Inicializa o índice da frente da fila como -1
int tras = -1;   // Inicializa o índice da parte de trás da fila como -1

// Função para verificar se a fila está vazia
int estaVazia() {
    return frente == -1;
}

// Função para verificar se a fila está cheia
int estaCheia() {
    return (tras == SIZE - 1 && frente == 0) || (tras == frente - 1);
}

// Função para enfileirar (enqueue) um elemento na fila
int enqueue(int valor) {
    if (estaCheia()) {
        printf("A fila esta cheia. Nao e possivel adicionar mais elementos.\n");
        return 0; // Falha ao adicionar
    }

    if (frente == -1) {
        frente = 0; // Se a fila estiver vazia, ajuste o índice da frente
    }
    
    tras = (tras + 1) % SIZE; // Calcula o próximo índice da parte de trás (leva em consideração a circularidade)
    fila[tras] = valor;
    return 1; // Sucesso ao adicionar
}

// Função para desenfileirar (dequeue) um elemento da fila
int dequeue() {
    if (estaVazia()) {
        printf("A fila esta vazia. Nao e possivel remover elementos.\n");
        return 0; // Falha ao remover
    }
    
    if (frente == tras) {
        frente = tras = -1; // Se há apenas um elemento na fila, reinicialize os índices
    } else {
        frente = (frente + 1) % SIZE; // Avança o índice da frente (leva em consideração a circularidade)
    }

    return 1; // Sucesso ao remover
}

// Função para exibir todos os elementos da fila
void mostraFila() {
    if (estaVazia()) {
        printf("A fila esta vazia.\n");
        return;
    }
    
    printf("Elementos da fila:\n");
    int i = frente;
    do {
        printf("%d ", fila[i]);
        i = (i + 1) % SIZE; // Avança para o próximo elemento (leva em consideração a circularidade)
    } while (i != (tras + 1) % SIZE);
    printf("\n");
}

int main() {
    int opcao, valor;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Inserir elemento na fila\n");
        printf("2. Remover elemento da fila\n");
        printf("3. Mostrar fila\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                if (enqueue(valor)) {
                    printf("Elemento inserido com sucesso.\n");
                } else {
                    printf("Falha ao inserir elemento.\n");
                }
                break;
            case 2:
                if (dequeue()) {
                    printf("Elemento removido com sucesso.\n");
                } else {
                    printf("Falha ao remover elemento.\n");
                }
                break;
            case 3:
                mostraFila();
                break;
            case 4:
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}

