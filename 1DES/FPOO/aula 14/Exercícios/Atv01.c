/* Atv 01: utilize o algoritmo de pilha apresentado e implemente um menu na função main para que o usuário possa escolher entre as opções 
de inserir e remover elementos na pilha, a acada alteração do usuário mostre a pilha.*/

#include <stdio.h>
#define SIZE 10

int pilha[SIZE];
int topo = -1; // Inicializa o topo da pilha como -1 (vazia)
int i;

// Função para verificar se a pilha está vazia
int estaVazia() {
    return topo == -1;
}

// Função para verificar se a pilha está cheia
int estaCheia() {
    return topo == SIZE - 1;
}

// Função para empilhar (push) um elemento na pilha
int push(int valor) {
    if (estaCheia()) {
        printf("A pilha esta cheia. Nao e possivel adicionar mais elementos.\n");
        return 0; // Falha ao adicionar
    }
    topo++;
    pilha[topo] = valor;
    return 1; // Sucesso ao adicionar
}

// Função para desempilhar (pop) um elemento da pilha
int pop() {
    if (estaVazia()) {
        printf("A pilha esta vazia. Nao e possível remover elementos.\n");
        return 0; // Falha ao remover
    }
    topo--;
    return 1; // Sucesso ao remover
}

// Função para exibir todos os elementos da pilha
void mostraPilha() {
    if (estaVazia()) {
        printf("A pilha esta vazia.\n");
        return;
    }
    printf("Elementos da pilha:\n");
    for (i = 0; i <= topo; i++) {
        printf("%d\n", pilha[i]);
    }
}

int main() {
    int opcao, valor;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Inserir elemento na pilha\n");
        printf("2. Remover elemento da pilha\n");
        printf("3. Mostrar pilha\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                if (push(valor)) {
                    printf("Elemento inserido com sucesso.\n");
                } else {
                    printf("Falha ao inserir elemento.\n");
                }
                break;
            case 2:
                if (pop()) {
                    printf("Elemento removido com sucesso.\n");
                } else {
                    printf("Falha ao remover elemento.\n");
                }
                break;
            case 3:
                mostraPilha();
                break;
            case 4:
                printf("Encerrando o programa.\n"); //O programa continuará em execução até que o usuário escolha a opção "Sair".
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}

